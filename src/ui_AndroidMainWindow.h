/********************************************************************************
** Form generated from reading UI file 'AndroidMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANDROIDMAINWINDOW_H
#define UI_ANDROIDMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AndroidMainWindow
{
public:
    QAction *action1;
    QAction *actionBluetooth;
    QAction *actionSettings;
    QAction *actionV2_N75_Settings;
    QAction *actionGearbox_settings;
    QAction *actionAbout;
    QAction *actionBluetoothToggleState;
    QAction *actionSave;
    QAction *actionMdSupportForum;
    QAction *actionOpen_Replay;
    QAction *actionClear;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *dashboardPushButton;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuConfig;
    QMenu *menuAbout;
    QMenu *menuData;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AndroidMainWindow)
    {
        if (AndroidMainWindow->objectName().isEmpty())
            AndroidMainWindow->setObjectName("AndroidMainWindow");
        AndroidMainWindow->resize(800, 600);
        action1 = new QAction(AndroidMainWindow);
        action1->setObjectName("action1");
        actionBluetooth = new QAction(AndroidMainWindow);
        actionBluetooth->setObjectName("actionBluetooth");
        actionSettings = new QAction(AndroidMainWindow);
        actionSettings->setObjectName("actionSettings");
        actionV2_N75_Settings = new QAction(AndroidMainWindow);
        actionV2_N75_Settings->setObjectName("actionV2_N75_Settings");
        actionGearbox_settings = new QAction(AndroidMainWindow);
        actionGearbox_settings->setObjectName("actionGearbox_settings");
        actionAbout = new QAction(AndroidMainWindow);
        actionAbout->setObjectName("actionAbout");
        actionBluetoothToggleState = new QAction(AndroidMainWindow);
        actionBluetoothToggleState->setObjectName("actionBluetoothToggleState");
        actionSave = new QAction(AndroidMainWindow);
        actionSave->setObjectName("actionSave");
        actionMdSupportForum = new QAction(AndroidMainWindow);
        actionMdSupportForum->setObjectName("actionMdSupportForum");
        actionOpen_Replay = new QAction(AndroidMainWindow);
        actionOpen_Replay->setObjectName("actionOpen_Replay");
        actionClear = new QAction(AndroidMainWindow);
        actionClear->setObjectName("actionClear");
        centralwidget = new QWidget(AndroidMainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName("mainFrame");
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        dashboardPushButton = new QPushButton(mainFrame);
        dashboardPushButton->setObjectName("dashboardPushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dashboardPushButton->sizePolicy().hasHeightForWidth());
        dashboardPushButton->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(dashboardPushButton);

        textEdit = new QTextEdit(mainFrame);
        textEdit->setObjectName("textEdit");
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);


        verticalLayout->addWidget(mainFrame);

        AndroidMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AndroidMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menuConfig = new QMenu(menubar);
        menuConfig->setObjectName("menuConfig");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        menuData = new QMenu(menubar);
        menuData->setObjectName("menuData");
        AndroidMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AndroidMainWindow);
        statusbar->setObjectName("statusbar");
        AndroidMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuData->menuAction());
        menubar->addAction(menuConfig->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuConfig->addAction(actionV2_N75_Settings);
        menuConfig->addAction(actionBluetooth);
        menuConfig->addAction(actionSettings);
        menuConfig->addAction(actionGearbox_settings);
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionMdSupportForum);
        menuData->addAction(actionBluetoothToggleState);
        menuData->addAction(actionSave);
        menuData->addAction(actionOpen_Replay);
        menuData->addAction(actionClear);

        retranslateUi(AndroidMainWindow);

        QMetaObject::connectSlotsByName(AndroidMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AndroidMainWindow)
    {
        AndroidMainWindow->setWindowTitle(QCoreApplication::translate("AndroidMainWindow", "MainWindow", nullptr));
        action1->setText(QCoreApplication::translate("AndroidMainWindow", "Boost", nullptr));
        actionBluetooth->setText(QCoreApplication::translate("AndroidMainWindow", "&bluetooth options", nullptr));
        actionSettings->setText(QCoreApplication::translate("AndroidMainWindow", "&options", nullptr));
        actionV2_N75_Settings->setText(QCoreApplication::translate("AndroidMainWindow", "&N75 boost control", nullptr));
        actionGearbox_settings->setText(QCoreApplication::translate("AndroidMainWindow", "&gearbox", nullptr));
        actionAbout->setText(QCoreApplication::translate("AndroidMainWindow", "about", nullptr));
        actionBluetoothToggleState->setText(QCoreApplication::translate("AndroidMainWindow", "Bluetooth toggle", nullptr));
        actionSave->setText(QCoreApplication::translate("AndroidMainWindow", "Save", nullptr));
        actionMdSupportForum->setText(QCoreApplication::translate("AndroidMainWindow", "md support forum", nullptr));
        actionOpen_Replay->setText(QCoreApplication::translate("AndroidMainWindow", "Open and Replay", nullptr));
        actionClear->setText(QCoreApplication::translate("AndroidMainWindow", "Clear", nullptr));
        dashboardPushButton->setText(QCoreApplication::translate("AndroidMainWindow", "show DashBoard", nullptr));
        textEdit->setHtml(QCoreApplication::translate("AndroidMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">auto-connect to paired bluetooth device is on.</p></body></html>", nullptr));
        menuConfig->setTitle(QCoreApplication::translate("AndroidMainWindow", "Config", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("AndroidMainWindow", "Help", nullptr));
        menuData->setTitle(QCoreApplication::translate("AndroidMainWindow", "mdv2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AndroidMainWindow: public Ui_AndroidMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANDROIDMAINWINDOW_H
