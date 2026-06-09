/********************************************************************************
** Form generated from reading UI file 'AndroidN75Dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANDROIDN75DIALOG_H
#define UI_ANDROIDN75DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AndroidN75Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *lowTab;
    QWidget *highTab;
    QWidget *pidTab;

    void setupUi(QDialog *AndroidN75Dialog)
    {
        if (AndroidN75Dialog->objectName().isEmpty())
            AndroidN75Dialog->setObjectName("AndroidN75Dialog");
        AndroidN75Dialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(AndroidN75Dialog);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(AndroidN75Dialog);
        tabWidget->setObjectName("tabWidget");
        lowTab = new QWidget();
        lowTab->setObjectName("lowTab");
        tabWidget->addTab(lowTab, QString());
        highTab = new QWidget();
        highTab->setObjectName("highTab");
        tabWidget->addTab(highTab, QString());
        pidTab = new QWidget();
        pidTab->setObjectName("pidTab");
        tabWidget->addTab(pidTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AndroidN75Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AndroidN75Dialog);
    } // setupUi

    void retranslateUi(QDialog *AndroidN75Dialog)
    {
        AndroidN75Dialog->setWindowTitle(QCoreApplication::translate("AndroidN75Dialog", "Dialog", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(lowTab), QCoreApplication::translate("AndroidN75Dialog", "low", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(highTab), QCoreApplication::translate("AndroidN75Dialog", "high", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pidTab), QCoreApplication::translate("AndroidN75Dialog", "PID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AndroidN75Dialog: public Ui_AndroidN75Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANDROIDN75DIALOG_H
