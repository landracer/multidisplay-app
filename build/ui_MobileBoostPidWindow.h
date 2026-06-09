/********************************************************************************
** Form generated from reading UI file 'MobileBoostPidWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILEBOOSTPIDWINDOW_H
#define UI_MOBILEBOOSTPIDWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MobileBoostPidWindow
{
public:
    QAction *actionF2;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *BoostParamGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *BoostPIDTableWidget;
    QPushButton *changePidButton;
    QGroupBox *BoostGraphGroupBox;
    QMenuBar *menubar;
    QMenu *menuFileBoost;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MobileBoostPidWindow)
    {
        if (MobileBoostPidWindow->objectName().isEmpty())
            MobileBoostPidWindow->setObjectName("MobileBoostPidWindow");
        MobileBoostPidWindow->resize(800, 480);
        actionF2 = new QAction(MobileBoostPidWindow);
        actionF2->setObjectName("actionF2");
        centralWidget = new QWidget(MobileBoostPidWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName("verticalLayout");
        BoostParamGroupBox = new QGroupBox(centralWidget);
        BoostParamGroupBox->setObjectName("BoostParamGroupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BoostParamGroupBox->sizePolicy().hasHeightForWidth());
        BoostParamGroupBox->setSizePolicy(sizePolicy);
        BoostParamGroupBox->setMaximumSize(QSize(16777215, 150));
        horizontalLayout_2 = new QHBoxLayout(BoostParamGroupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        BoostPIDTableWidget = new QTableWidget(BoostParamGroupBox);
        if (BoostPIDTableWidget->columnCount() < 7)
            BoostPIDTableWidget->setColumnCount(7);
        if (BoostPIDTableWidget->rowCount() < 2)
            BoostPIDTableWidget->setRowCount(2);
        BoostPIDTableWidget->setObjectName("BoostPIDTableWidget");
        BoostPIDTableWidget->setMinimumSize(QSize(0, 90));
        BoostPIDTableWidget->setMaximumSize(QSize(16777215, 90));
        BoostPIDTableWidget->setAlternatingRowColors(true);
        BoostPIDTableWidget->setRowCount(2);
        BoostPIDTableWidget->setColumnCount(7);

        horizontalLayout_2->addWidget(BoostPIDTableWidget);

        changePidButton = new QPushButton(BoostParamGroupBox);
        changePidButton->setObjectName("changePidButton");

        horizontalLayout_2->addWidget(changePidButton);


        verticalLayout->addWidget(BoostParamGroupBox);

        BoostGraphGroupBox = new QGroupBox(centralWidget);
        BoostGraphGroupBox->setObjectName("BoostGraphGroupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BoostGraphGroupBox->sizePolicy().hasHeightForWidth());
        BoostGraphGroupBox->setSizePolicy(sizePolicy1);
        BoostGraphGroupBox->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(BoostGraphGroupBox);

        MobileBoostPidWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MobileBoostPidWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuFileBoost = new QMenu(menubar);
        menuFileBoost->setObjectName("menuFileBoost");
        MobileBoostPidWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MobileBoostPidWindow);
        statusbar->setObjectName("statusbar");
        MobileBoostPidWindow->setStatusBar(statusbar);

        menubar->addAction(menuFileBoost->menuAction());

        retranslateUi(MobileBoostPidWindow);

        QMetaObject::connectSlotsByName(MobileBoostPidWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MobileBoostPidWindow)
    {
        MobileBoostPidWindow->setWindowTitle(QCoreApplication::translate("MobileBoostPidWindow", "MD Boost PID", nullptr));
        actionF2->setText(QCoreApplication::translate("MobileBoostPidWindow", "f2", nullptr));
        BoostParamGroupBox->setTitle(QCoreApplication::translate("MobileBoostPidWindow", "Parameter", nullptr));
        changePidButton->setText(QCoreApplication::translate("MobileBoostPidWindow", "change PID", nullptr));
        BoostGraphGroupBox->setTitle(QCoreApplication::translate("MobileBoostPidWindow", "Visualization", nullptr));
        menuFileBoost->setTitle(QCoreApplication::translate("MobileBoostPidWindow", "FileBoost", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MobileBoostPidWindow: public Ui_MobileBoostPidWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILEBOOSTPIDWINDOW_H
