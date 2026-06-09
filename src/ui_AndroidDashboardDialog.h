/********************************************************************************
** Form generated from reading UI file 'AndroidDashboardDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANDROIDDASHBOARDDIALOG_H
#define UI_ANDROIDDASHBOARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AndroidDashboardDialog
{
public:

    void setupUi(QDialog *AndroidDashboardDialog)
    {
        if (AndroidDashboardDialog->objectName().isEmpty())
            AndroidDashboardDialog->setObjectName("AndroidDashboardDialog");
        AndroidDashboardDialog->resize(640, 480);

        retranslateUi(AndroidDashboardDialog);

        QMetaObject::connectSlotsByName(AndroidDashboardDialog);
    } // setupUi

    void retranslateUi(QDialog *AndroidDashboardDialog)
    {
        AndroidDashboardDialog->setWindowTitle(QCoreApplication::translate("AndroidDashboardDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AndroidDashboardDialog: public Ui_AndroidDashboardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANDROIDDASHBOARDDIALOG_H
