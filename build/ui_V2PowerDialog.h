/********************************************************************************
** Form generated from reading UI file 'V2PowerDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V2POWERDIALOG_H
#define UI_V2POWERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_V2PowerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLineEdit *resultLineEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *tempSpinBox;
    QSpinBox *pressureSpinBox;
    QLabel *label_3;
    QSpinBox *carMassSpinBox;
    QLabel *label_4;
    QSpinBox *smoothSpinBox;
    QPushButton *reCalcButton;
    QLabel *label_5;
    QDoubleSpinBox *driveTrainLossSpinBox;

    void setupUi(QDialog *V2PowerDialog)
    {
        if (V2PowerDialog->objectName().isEmpty())
            V2PowerDialog->setObjectName("V2PowerDialog");
        V2PowerDialog->resize(816, 682);
        verticalLayout = new QVBoxLayout(V2PowerDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(V2PowerDialog);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(groupBox);

        resultLineEdit = new QLineEdit(V2PowerDialog);
        resultLineEdit->setObjectName("resultLineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resultLineEdit->sizePolicy().hasHeightForWidth());
        resultLineEdit->setSizePolicy(sizePolicy1);
        resultLineEdit->setReadOnly(true);

        verticalLayout->addWidget(resultLineEdit);

        groupBox_2 = new QGroupBox(V2PowerDialog);
        groupBox_2->setObjectName("groupBox_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(groupBox_2);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 8, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 9, 0, 1, 1);

        tempSpinBox = new QSpinBox(groupBox_2);
        tempSpinBox->setObjectName("tempSpinBox");
        tempSpinBox->setMinimum(-20);
        tempSpinBox->setMaximum(50);
        tempSpinBox->setValue(20);

        gridLayout->addWidget(tempSpinBox, 2, 1, 1, 1);

        pressureSpinBox = new QSpinBox(groupBox_2);
        pressureSpinBox->setObjectName("pressureSpinBox");
        pressureSpinBox->setMinimum(900);
        pressureSpinBox->setMaximum(1100);
        pressureSpinBox->setValue(1013);

        gridLayout->addWidget(pressureSpinBox, 9, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        carMassSpinBox = new QSpinBox(groupBox_2);
        carMassSpinBox->setObjectName("carMassSpinBox");
        carMassSpinBox->setMaximum(2000);
        carMassSpinBox->setValue(1150);

        gridLayout->addWidget(carMassSpinBox, 2, 3, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 9, 2, 1, 1);

        smoothSpinBox = new QSpinBox(groupBox_2);
        smoothSpinBox->setObjectName("smoothSpinBox");
        smoothSpinBox->setValue(2);

        gridLayout->addWidget(smoothSpinBox, 9, 3, 1, 1);

        reCalcButton = new QPushButton(groupBox_2);
        reCalcButton->setObjectName("reCalcButton");

        gridLayout->addWidget(reCalcButton, 2, 6, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 4, 1, 1);

        driveTrainLossSpinBox = new QDoubleSpinBox(groupBox_2);
        driveTrainLossSpinBox->setObjectName("driveTrainLossSpinBox");
        driveTrainLossSpinBox->setDecimals(3);
        driveTrainLossSpinBox->setMaximum(1.000000000000000);
        driveTrainLossSpinBox->setValue(0.763000000000000);

        gridLayout->addWidget(driveTrainLossSpinBox, 2, 5, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(V2PowerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, V2PowerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, V2PowerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(V2PowerDialog);
    } // setupUi

    void retranslateUi(QDialog *V2PowerDialog)
    {
        V2PowerDialog->setWindowTitle(QCoreApplication::translate("V2PowerDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QCoreApplication::translate("V2PowerDialog", "Settings", nullptr));
        label->setText(QCoreApplication::translate("V2PowerDialog", "ambient temperature [\302\260C]", nullptr));
        label_2->setText(QCoreApplication::translate("V2PowerDialog", "ambient pressure [mbar]", nullptr));
        label_3->setText(QCoreApplication::translate("V2PowerDialog", "car weigth [kg]", nullptr));
        label_4->setText(QCoreApplication::translate("V2PowerDialog", "smooth", nullptr));
        reCalcButton->setText(QCoreApplication::translate("V2PowerDialog", "reCalc", nullptr));
        label_5->setText(QCoreApplication::translate("V2PowerDialog", "drive train loss", nullptr));
    } // retranslateUi

};

namespace Ui {
    class V2PowerDialog: public Ui_V2PowerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V2POWERDIALOG_H
