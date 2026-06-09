/********************************************************************************
** Form generated from reading UI file 'WotEventsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOTEVENTSDIALOG_H
#define UI_WOTEVENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_WotEventsDialog
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *jumpButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WotEventsDialog)
    {
        if (WotEventsDialog->objectName().isEmpty())
            WotEventsDialog->setObjectName("WotEventsDialog");
        WotEventsDialog->resize(542, 605);
        gridLayout = new QGridLayout(WotEventsDialog);
        gridLayout->setObjectName("gridLayout");
        tableWidget = new QTableWidget(WotEventsDialog);
        tableWidget->setObjectName("tableWidget");

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        frame = new QFrame(WotEventsDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        jumpButton = new QPushButton(frame);
        jumpButton->setObjectName("jumpButton");

        horizontalLayout->addWidget(jumpButton);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addWidget(frame, 1, 0, 1, 1);


        retranslateUi(WotEventsDialog);

        QMetaObject::connectSlotsByName(WotEventsDialog);
    } // setupUi

    void retranslateUi(QDialog *WotEventsDialog)
    {
        WotEventsDialog->setWindowTitle(QCoreApplication::translate("WotEventsDialog", "Dialog", nullptr));
        jumpButton->setText(QCoreApplication::translate("WotEventsDialog", "jump to", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WotEventsDialog: public Ui_WotEventsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOTEVENTSDIALOG_H
