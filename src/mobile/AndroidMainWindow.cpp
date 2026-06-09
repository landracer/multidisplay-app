#include <QCloseEvent>
#include <QtCore/qmath.h>
#include <QDebug>
#include <QGestureEvent>
#include <QElapsedTimer>

#include "AndroidMainWindow.h"
#include "ui_AndroidMainWindow.h"
#include "AppEngine.h"

#if defined(Q_OS_ANDROID)
    #include <QAndroidJniObject>
    #include <QAndroidJniEnvironment>
#endif


AndroidMainWindow::AndroidMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AndroidMainWindow)
{
    ui->setupUi(this);


     t.start();

     grabGesture(Qt::TapGesture);
     grabGesture(Qt::TapAndHoldGesture);
     grabGesture(Qt::PanGesture);
     grabGesture(Qt::PinchGesture);
     grabGesture(Qt::SwipeGesture);

     connect (ui->actionMdSupportForum, SIGNAL(triggered()), this, SLOT(fireSupportForumIntent()) );

     QSettings settings;
     if ( settings.value("md/md", QVariant ( MDMODE ).toBool() )  == false ) {
         ui->actionV2_N75_Settings->setVisible(false);
         ui->actionGearbox_settings->setVisible(false);

         ui->menuData->setTitle("Digifant 1");
         ui->actionMdSupportForum->setText("more information");
     }
}

AndroidMainWindow::~AndroidMainWindow()
{
    delete ui;
}

bool AndroidMainWindow::event(QEvent *event)
{
    if (event->type() == QEvent::Gesture) {
        QGestureEvent *gEvent = static_cast<QGestureEvent*>(event);
        if (QGesture *swipe = gEvent->gesture(Qt::SwipeGesture))
            qDebug() << "swipe";
        else if (QGesture *pan = gEvent->gesture(Qt::PanGesture))
            qDebug() << "pan";
        if (QGesture *pinch = gEvent->gesture(Qt::PinchGesture))
            qDebug() << "pinch";
        if (QGesture *tap = gEvent->gesture(Qt::TapGesture))
            qDebug() << "tap";
        if (QGesture *tapAndHold = gEvent->gesture(Qt::TapAndHoldGesture))
            qDebug() << "tap and hold";
        return true;
    }
    return QWidget::event(event);
}

void AndroidMainWindow::closeEvent(QCloseEvent *event) {
    //segfaults :(
    emit writeSettings();
    event->accept();
    QMainWindow::closeEvent ( event );
}

void AndroidMainWindow::resizeEvent(QResizeEvent *event)
{
    qDebug() << "AndroidMainWindow::resizeEvent size=" << event->size() << " old=" << event->oldSize();
    QMainWindow::resizeEvent(event);
}

void AndroidMainWindow::showStatusMessage(const QString &msg)
{
    qDebug() << "showStatusMessage";
    if ( ui->textEdit )
        ui->textEdit->insertPlainText( msg + "\n" );
}

void AndroidMainWindow::btPortClosed()
{
    ui->actionBluetoothToggleState->setText("Bluetooth connect");
}

void AndroidMainWindow::btPortOpened()
{
    ui->actionBluetoothToggleState->setText("Bluetooth disconnect");
}

void AndroidMainWindow::fireSupportForumIntent()
{
#ifdef Q_OS_ANDROID
//    qDebug() << "fireSupportForumIntent()";
    QAndroidJniObject s1 = QAndroidJniObject::fromString("http://mdforum.designer2k2.at/viewtopic.php?f=15&t=334");
    QSettings settings;
    if ( settings.value("md/md", QVariant ( MDMODE ).toBool() )  == false ) {
        s1 = QAndroidJniObject::fromString("http://digifant-einzelabstimmung.de/bofh-ng/de/digifant-1/live-daten-auslesen");
    }


    QAndroidJniObject::callStaticMethod<void>( "de/gummelinformatics/mui/MuiIntentHelper",
                                           "openUrl",
                                           "(Ljava/lang/String;)V",
                                            s1.object<jstring>() );

    QAndroidJniEnvironment env;
    if (env->ExceptionCheck()) {
        // Handle exception here.
        qDebug() << "*** JNI exception ***";
        env->ExceptionDescribe();
        env->ExceptionClear();
        env->ExceptionClear();
    } else {
        qDebug() << "NO JNI exception";
    }

//    QDesktopServices::openUrl( QUrl("http://mdforum.designer2k2.at/") );

#endif
}


