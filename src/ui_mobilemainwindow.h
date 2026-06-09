/********************************************************************************
** Form generated from reading UI file 'mobilemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILEMAINWINDOW_H
#define UI_MOBILEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MobileMainWindow
{
public:
    QAction *actionBoostPid;
    QAction *actionVis1;
    QAction *actionSerial;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionNew;
    QAction *actionSend_Commands;
    QAction *actionEvaluate_Boost_Lambda;
    QAction *actionEvaluate_RPM_Boost;
    QAction *actionSerialConnect;
    QAction *actionSerialDisconnect;
    QAction *actionSettings;
    QAction *actionV2_N75_Settings;
    QAction *actionEvaluate;
    QAction *actionGearbox_settings;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QMenuBar *menubar;
    QMenu *menuFileMain;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MobileMainWindow)
    {
        if (MobileMainWindow->objectName().isEmpty())
            MobileMainWindow->setObjectName("MobileMainWindow");
        MobileMainWindow->resize(800, 480);
        actionBoostPid = new QAction(MobileMainWindow);
        actionBoostPid->setObjectName("actionBoostPid");
        QFont font;
        font.setPointSize(18);
        actionBoostPid->setFont(font);
        actionVis1 = new QAction(MobileMainWindow);
        actionVis1->setObjectName("actionVis1");
        actionSerial = new QAction(MobileMainWindow);
        actionSerial->setObjectName("actionSerial");
        actionOpen = new QAction(MobileMainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave_as = new QAction(MobileMainWindow);
        actionSave_as->setObjectName("actionSave_as");
        actionNew = new QAction(MobileMainWindow);
        actionNew->setObjectName("actionNew");
        actionSend_Commands = new QAction(MobileMainWindow);
        actionSend_Commands->setObjectName("actionSend_Commands");
        actionEvaluate_Boost_Lambda = new QAction(MobileMainWindow);
        actionEvaluate_Boost_Lambda->setObjectName("actionEvaluate_Boost_Lambda");
        actionEvaluate_RPM_Boost = new QAction(MobileMainWindow);
        actionEvaluate_RPM_Boost->setObjectName("actionEvaluate_RPM_Boost");
        actionSerialConnect = new QAction(MobileMainWindow);
        actionSerialConnect->setObjectName("actionSerialConnect");
        actionSerialDisconnect = new QAction(MobileMainWindow);
        actionSerialDisconnect->setObjectName("actionSerialDisconnect");
        actionSettings = new QAction(MobileMainWindow);
        actionSettings->setObjectName("actionSettings");
        actionV2_N75_Settings = new QAction(MobileMainWindow);
        actionV2_N75_Settings->setObjectName("actionV2_N75_Settings");
        actionEvaluate = new QAction(MobileMainWindow);
        actionEvaluate->setObjectName("actionEvaluate");
        actionGearbox_settings = new QAction(MobileMainWindow);
        actionGearbox_settings->setObjectName("actionGearbox_settings");
        actionAbout = new QAction(MobileMainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MobileMainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName("verticalLayout");
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName("mainFrame");
        mainFrame->setFrameShape(QFrame::NoFrame);
        mainFrame->setFrameShadow(QFrame::Plain);
        mainFrame->setLineWidth(0);

        verticalLayout->addWidget(mainFrame);

        MobileMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MobileMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuFileMain = new QMenu(menubar);
        menuFileMain->setObjectName("menuFileMain");
        MobileMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MobileMainWindow);
        statusbar->setObjectName("statusbar");
        MobileMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFileMain->menuAction());
        menuFileMain->addAction(actionBoostPid);
        menuFileMain->addAction(actionVis1);
        menuFileMain->addAction(actionSerial);
        menuFileMain->addAction(actionSerialConnect);
        menuFileMain->addAction(actionSerialDisconnect);
        menuFileMain->addAction(actionOpen);
        menuFileMain->addAction(actionSave_as);
        menuFileMain->addAction(actionNew);
        menuFileMain->addAction(actionSend_Commands);
        menuFileMain->addAction(actionSettings);
        menuFileMain->addAction(actionV2_N75_Settings);
        menuFileMain->addAction(actionGearbox_settings);
        menuFileMain->addAction(actionEvaluate);
        menuFileMain->addAction(actionAbout);

        retranslateUi(MobileMainWindow);

        QMetaObject::connectSlotsByName(MobileMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MobileMainWindow)
    {
        MobileMainWindow->setWindowTitle(QCoreApplication::translate("MobileMainWindow", "multidisplay UI", nullptr));
        actionBoostPid->setText(QCoreApplication::translate("MobileMainWindow", "Boost Pid", nullptr));
        actionVis1->setText(QCoreApplication::translate("MobileMainWindow", "Vis1", nullptr));
        actionSerial->setText(QCoreApplication::translate("MobileMainWindow", "Serial", nullptr));
        actionOpen->setText(QCoreApplication::translate("MobileMainWindow", "Open", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MobileMainWindow", "Save as", nullptr));
        actionNew->setText(QCoreApplication::translate("MobileMainWindow", "New", nullptr));
        actionSend_Commands->setText(QCoreApplication::translate("MobileMainWindow", "Send Commands", nullptr));
        actionEvaluate_Boost_Lambda->setText(QCoreApplication::translate("MobileMainWindow", "Evaluate Boost/Lambda", nullptr));
        actionEvaluate_RPM_Boost->setText(QCoreApplication::translate("MobileMainWindow", "Evaluate RPM/Boost", nullptr));
        actionSerialConnect->setText(QCoreApplication::translate("MobileMainWindow", "connect", nullptr));
        actionSerialDisconnect->setText(QCoreApplication::translate("MobileMainWindow", "disconnect", nullptr));
        actionSettings->setText(QCoreApplication::translate("MobileMainWindow", "Settings", nullptr));
        actionV2_N75_Settings->setText(QCoreApplication::translate("MobileMainWindow", "V2 N75 Settings", nullptr));
        actionEvaluate->setText(QCoreApplication::translate("MobileMainWindow", "evaluate", nullptr));
        actionGearbox_settings->setText(QCoreApplication::translate("MobileMainWindow", "Gearbox Settings", nullptr));
        actionAbout->setText(QCoreApplication::translate("MobileMainWindow", "About", nullptr));
        menuFileMain->setTitle(QCoreApplication::translate("MobileMainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MobileMainWindow: public Ui_MobileMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILEMAINWINDOW_H
