/********************************************************************************
** Form generated from reading UI file 'V2N75SetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V2N75SETUPDIALOG_H
#define UI_V2N75SETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_V2N75SetupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *n75TableGroupBox;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QComboBox *n75comboBox;
    QPushButton *n75ReadPushButton;
    QPushButton *n75WritePushButton;
    QPushButton *loadEepromPushButton;
    QPushButton *writeEepromPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *V2N75SetupDialog)
    {
        if (V2N75SetupDialog->objectName().isEmpty())
            V2N75SetupDialog->setObjectName("V2N75SetupDialog");
        V2N75SetupDialog->resize(900, 560);
        verticalLayout = new QVBoxLayout(V2N75SetupDialog);
        verticalLayout->setObjectName("verticalLayout");
        n75TableGroupBox = new QGroupBox(V2N75SetupDialog);
        n75TableGroupBox->setObjectName("n75TableGroupBox");
        gridLayout = new QGridLayout(n75TableGroupBox);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(n75TableGroupBox);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        n75comboBox = new QComboBox(frame);
        n75comboBox->addItem(QString());
        n75comboBox->addItem(QString());
        n75comboBox->setObjectName("n75comboBox");

        horizontalLayout->addWidget(n75comboBox);

        n75ReadPushButton = new QPushButton(frame);
        n75ReadPushButton->setObjectName("n75ReadPushButton");

        horizontalLayout->addWidget(n75ReadPushButton);

        n75WritePushButton = new QPushButton(frame);
        n75WritePushButton->setObjectName("n75WritePushButton");

        horizontalLayout->addWidget(n75WritePushButton);

        loadEepromPushButton = new QPushButton(frame);
        loadEepromPushButton->setObjectName("loadEepromPushButton");

        horizontalLayout->addWidget(loadEepromPushButton);

        writeEepromPushButton = new QPushButton(frame);
        writeEepromPushButton->setObjectName("writeEepromPushButton");

        horizontalLayout->addWidget(writeEepromPushButton);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        verticalLayout->addWidget(n75TableGroupBox);

        buttonBox = new QDialogButtonBox(V2N75SetupDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(V2N75SetupDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, V2N75SetupDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, V2N75SetupDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(V2N75SetupDialog);
    } // setupUi

    void retranslateUi(QDialog *V2N75SetupDialog)
    {
        V2N75SetupDialog->setWindowTitle(QCoreApplication::translate("V2N75SetupDialog", "V2 N75 Settings", nullptr));
        n75TableGroupBox->setTitle(QCoreApplication::translate("V2N75SetupDialog", "N75 maps", nullptr));
        n75comboBox->setItemText(0, QCoreApplication::translate("V2N75SetupDialog", "Low Boost", nullptr));
        n75comboBox->setItemText(1, QCoreApplication::translate("V2N75SetupDialog", "High Boost", nullptr));

        n75ReadPushButton->setText(QCoreApplication::translate("V2N75SetupDialog", "Read from MD", nullptr));
        n75WritePushButton->setText(QCoreApplication::translate("V2N75SetupDialog", "Write to MD", nullptr));
        loadEepromPushButton->setText(QCoreApplication::translate("V2N75SetupDialog", "Load from EEprom", nullptr));
        writeEepromPushButton->setText(QCoreApplication::translate("V2N75SetupDialog", "Write to EEprom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class V2N75SetupDialog: public Ui_V2N75SetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V2N75SETUPDIALOG_H
