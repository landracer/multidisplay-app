/********************************************************************************
** Form generated from reading UI file 'MobileCommandWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILECOMMANDWINDOW_H
#define UI_MOBILECOMMANDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MobileCommandWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *AHoldButton;
    QPushButton *pushButton_2;
    QPushButton *AHoldButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MobileCommandWindow)
    {
        if (MobileCommandWindow->objectName().isEmpty())
            MobileCommandWindow->setObjectName("MobileCommandWindow");
        MobileCommandWindow->resize(800, 480);
        centralwidget = new QWidget(MobileCommandWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        AHoldButton = new QPushButton(centralwidget);
        AHoldButton->setObjectName("AHoldButton");

        gridLayout->addWidget(AHoldButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        AHoldButton_2 = new QPushButton(centralwidget);
        AHoldButton_2->setObjectName("AHoldButton_2");

        gridLayout->addWidget(AHoldButton_2, 1, 1, 1, 1);

        MobileCommandWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MobileCommandWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MobileCommandWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MobileCommandWindow);
        statusbar->setObjectName("statusbar");
        MobileCommandWindow->setStatusBar(statusbar);

        retranslateUi(MobileCommandWindow);

        QMetaObject::connectSlotsByName(MobileCommandWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MobileCommandWindow)
    {
        MobileCommandWindow->setWindowTitle(QCoreApplication::translate("MobileCommandWindow", "multidisplay remote", nullptr));
        pushButton->setText(QCoreApplication::translate("MobileCommandWindow", "A push", nullptr));
        AHoldButton->setText(QCoreApplication::translate("MobileCommandWindow", "A hold", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MobileCommandWindow", "B push", nullptr));
        AHoldButton_2->setText(QCoreApplication::translate("MobileCommandWindow", "B hold", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MobileCommandWindow: public Ui_MobileCommandWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILECOMMANDWINDOW_H
