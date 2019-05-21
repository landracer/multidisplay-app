#ifndef ANDROIDMAINWINDOW_H
#define ANDROIDMAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QGridLayout>
#include <QTime>
#include <QString>
#include "MdData.h"
#include "widgets/rtwidget.h"
#include "widgets/DFExtendedWidget.h"

namespace Ui {
class AndroidMainWindow;
}

class AndroidMainWindow : public QMainWindow
{
    Q_OBJECT
    
     friend class AppEngine;

public:
    explicit AndroidMainWindow(QWidget *parent = 0);
    ~AndroidMainWindow();

    bool event(QEvent *event);
    bool gestureEvent(QGestureEvent *event);
    void closeEvent(QCloseEvent *event);
    void resizeEvent ( QResizeEvent * event );


public slots:
    void showStatusMessage ( const QString &msg );
    void btPortClosed ();
    void btPortOpened ();

    void fireSupportForumIntent();

signals:
    void writeSettings();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AndroidMainWindow *ui;

    QGridLayout* l;
    QTime t;
    MeasurementWidget* boostw;
    DFExtendedWidget *dfexw;
    MeasurementWidget *lw;
    IatWidget *iatW;
    MaxEgtWidget *egtw;
    Egt1Widget *egt1w;
    Egt2Widget *egt2w;
    Egt3Widget *egt3w;
    Egt4Widget *egt4w;
};

#endif // ANDROIDMAINWINDOW_H
