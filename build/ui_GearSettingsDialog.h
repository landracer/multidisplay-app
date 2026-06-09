/********************************************************************************
** Form generated from reading UI file 'GearSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEARSETTINGSDIALOG_H
#define UI_GEARSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GearSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *g1SpinBox;
    QLabel *label_2;
    QDoubleSpinBox *g2SpinBox;
    QLabel *label_3;
    QDoubleSpinBox *g3SpinBox;
    QLabel *label_4;
    QDoubleSpinBox *g4SpinBox;
    QLabel *label_5;
    QDoubleSpinBox *g5SpinBox;
    QLabel *label_6;
    QDoubleSpinBox *g6SpinBox;
    QComboBox *comboBox;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GearSettingsDialog)
    {
        if (GearSettingsDialog->objectName().isEmpty())
            GearSettingsDialog->setObjectName("GearSettingsDialog");
        GearSettingsDialog->resize(443, 300);
        verticalLayout = new QVBoxLayout(GearSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(GearSettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        g1SpinBox = new QDoubleSpinBox(groupBox);
        g1SpinBox->setObjectName("g1SpinBox");
        g1SpinBox->setDecimals(4);

        gridLayout->addWidget(g1SpinBox, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        g2SpinBox = new QDoubleSpinBox(groupBox);
        g2SpinBox->setObjectName("g2SpinBox");
        g2SpinBox->setDecimals(4);

        gridLayout->addWidget(g2SpinBox, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        g3SpinBox = new QDoubleSpinBox(groupBox);
        g3SpinBox->setObjectName("g3SpinBox");
        g3SpinBox->setDecimals(4);

        gridLayout->addWidget(g3SpinBox, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        g4SpinBox = new QDoubleSpinBox(groupBox);
        g4SpinBox->setObjectName("g4SpinBox");
        g4SpinBox->setDecimals(4);

        gridLayout->addWidget(g4SpinBox, 4, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        g5SpinBox = new QDoubleSpinBox(groupBox);
        g5SpinBox->setObjectName("g5SpinBox");
        g5SpinBox->setDecimals(4);

        gridLayout->addWidget(g5SpinBox, 5, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        g6SpinBox = new QDoubleSpinBox(groupBox);
        g6SpinBox->setObjectName("g6SpinBox");
        g6SpinBox->setDecimals(4);

        gridLayout->addWidget(g6SpinBox, 6, 1, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(GearSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GearSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GearSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GearSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(GearSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *GearSettingsDialog)
    {
        GearSettingsDialog->setWindowTitle(QCoreApplication::translate("GearSettingsDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("GearSettingsDialog", "Gear 1", nullptr));
        label_2->setText(QCoreApplication::translate("GearSettingsDialog", "Gear 2", nullptr));
        label_3->setText(QCoreApplication::translate("GearSettingsDialog", "Gear 3", nullptr));
        label_4->setText(QCoreApplication::translate("GearSettingsDialog", "Gear 4", nullptr));
        label_5->setText(QCoreApplication::translate("GearSettingsDialog", "Gear 5", nullptr));
        label_6->setText(QCoreApplication::translate("GearSettingsDialog", "Gear 6", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("GearSettingsDialog", "---", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("GearSettingsDialog", "02A ATB", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("GearSettingsDialog", "02A AYN", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("GearSettingsDialog", "02A CBA", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("GearSettingsDialog", "02M FMP custom", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("GearSettingsDialog", "02A ATB custom with fifth gear from ASD", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("GearSettingsDialog", "02A CCM (VR6)", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("GearSettingsDialog", "02A CSR (VR6 Syncro)", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("GearSettingsDialog", "02M DQB", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("GearSettingsDialog", "02A CDA", nullptr));

        label_7->setText(QCoreApplication::translate("GearSettingsDialog", "load gearbox data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GearSettingsDialog: public Ui_GearSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEARSETTINGSDIALOG_H
