/********************************************************************************
** Form generated from reading UI file 'V2SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_V2SETTINGSDIALOG_H
#define UI_V2SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_V2SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBoxFrequency;
    QVBoxLayout *verticalLayout;
    QSpinBox *serialFrequencySpinBox;
    QGroupBox *groupBoxEnergy;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *actualizeVis1CheckBox;
    QCheckBox *actualizeDashboardCheckBox;
    QGroupBox *groupBoxEcu;
    QGridLayout *gridLayout_2;
    QComboBox *comboBoxEcu;
    QGroupBox *groupBoxEnergy_2;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBoxMapSensor;

    void setupUi(QDialog *V2SettingsDialog)
    {
        if (V2SettingsDialog->objectName().isEmpty())
            V2SettingsDialog->setObjectName("V2SettingsDialog");
        V2SettingsDialog->resize(585, 398);
        gridLayout = new QGridLayout(V2SettingsDialog);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(V2SettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

        groupBoxFrequency = new QGroupBox(V2SettingsDialog);
        groupBoxFrequency->setObjectName("groupBoxFrequency");
        verticalLayout = new QVBoxLayout(groupBoxFrequency);
        verticalLayout->setObjectName("verticalLayout");
        serialFrequencySpinBox = new QSpinBox(groupBoxFrequency);
        serialFrequencySpinBox->setObjectName("serialFrequencySpinBox");
        serialFrequencySpinBox->setMinimum(1);
        serialFrequencySpinBox->setMaximum(100);
        serialFrequencySpinBox->setValue(10);

        verticalLayout->addWidget(serialFrequencySpinBox);


        gridLayout->addWidget(groupBoxFrequency, 1, 0, 1, 1);

        groupBoxEnergy = new QGroupBox(V2SettingsDialog);
        groupBoxEnergy->setObjectName("groupBoxEnergy");
        verticalLayout_2 = new QVBoxLayout(groupBoxEnergy);
        verticalLayout_2->setObjectName("verticalLayout_2");
        actualizeVis1CheckBox = new QCheckBox(groupBoxEnergy);
        actualizeVis1CheckBox->setObjectName("actualizeVis1CheckBox");

        verticalLayout_2->addWidget(actualizeVis1CheckBox);

        actualizeDashboardCheckBox = new QCheckBox(groupBoxEnergy);
        actualizeDashboardCheckBox->setObjectName("actualizeDashboardCheckBox");

        verticalLayout_2->addWidget(actualizeDashboardCheckBox);


        gridLayout->addWidget(groupBoxEnergy, 4, 0, 1, 1);

        groupBoxEcu = new QGroupBox(V2SettingsDialog);
        groupBoxEcu->setObjectName("groupBoxEcu");
        gridLayout_2 = new QGridLayout(groupBoxEcu);
        gridLayout_2->setObjectName("gridLayout_2");
        comboBoxEcu = new QComboBox(groupBoxEcu);
        comboBoxEcu->addItem(QString());
        comboBoxEcu->addItem(QString());
        comboBoxEcu->addItem(QString());
        comboBoxEcu->setObjectName("comboBoxEcu");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxEcu->sizePolicy().hasHeightForWidth());
        comboBoxEcu->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBoxEcu, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxEcu, 2, 0, 1, 1);

        groupBoxEnergy_2 = new QGroupBox(V2SettingsDialog);
        groupBoxEnergy_2->setObjectName("groupBoxEnergy_2");
        verticalLayout_3 = new QVBoxLayout(groupBoxEnergy_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        comboBoxMapSensor = new QComboBox(groupBoxEnergy_2);
        comboBoxMapSensor->addItem(QString());
        comboBoxMapSensor->addItem(QString());
        comboBoxMapSensor->addItem(QString());
        comboBoxMapSensor->addItem(QString());
        comboBoxMapSensor->addItem(QString());
        comboBoxMapSensor->setObjectName("comboBoxMapSensor");

        verticalLayout_3->addWidget(comboBoxMapSensor);


        gridLayout->addWidget(groupBoxEnergy_2, 3, 0, 1, 1);


        retranslateUi(V2SettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, V2SettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, V2SettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(V2SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *V2SettingsDialog)
    {
        V2SettingsDialog->setWindowTitle(QCoreApplication::translate("V2SettingsDialog", "Dialog", nullptr));
        groupBoxFrequency->setTitle(QCoreApplication::translate("V2SettingsDialog", "Serial Frequency (Hz)", nullptr));
        groupBoxEnergy->setTitle(QCoreApplication::translate("V2SettingsDialog", "mobility / save energy settings (mUI)", nullptr));
        actualizeVis1CheckBox->setText(QCoreApplication::translate("V2SettingsDialog", "actualize plots on new data", nullptr));
        actualizeDashboardCheckBox->setText(QCoreApplication::translate("V2SettingsDialog", "actualize Dashboard on new data", nullptr));
        groupBoxEcu->setTitle(QCoreApplication::translate("V2SettingsDialog", "ECU", nullptr));
        comboBoxEcu->setItemText(0, QCoreApplication::translate("V2SettingsDialog", "Digifant 1", nullptr));
        comboBoxEcu->setItemText(1, QCoreApplication::translate("V2SettingsDialog", "VR6 M3.8.1", nullptr));
        comboBoxEcu->setItemText(2, QCoreApplication::translate("V2SettingsDialog", "generic", nullptr));

        groupBoxEnergy_2->setTitle(QCoreApplication::translate("V2SettingsDialog", "Digifant 1 MapSensor", nullptr));
        comboBoxMapSensor->setItemText(0, QCoreApplication::translate("V2SettingsDialog", "100", nullptr));
        comboBoxMapSensor->setItemText(1, QCoreApplication::translate("V2SettingsDialog", "200", nullptr));
        comboBoxMapSensor->setItemText(2, QCoreApplication::translate("V2SettingsDialog", "250", nullptr));
        comboBoxMapSensor->setItemText(3, QCoreApplication::translate("V2SettingsDialog", "300", nullptr));
        comboBoxMapSensor->setItemText(4, QCoreApplication::translate("V2SettingsDialog", "400", nullptr));

    } // retranslateUi

};

namespace Ui {
    class V2SettingsDialog: public Ui_V2SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_V2SETTINGSDIALOG_H
