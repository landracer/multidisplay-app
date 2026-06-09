#include "V2PowerDialog.h"
#include "ui_V2PowerDialog.h"

#include "PowerPlot.h"

V2PowerDialog::V2PowerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::V2PowerDialog)
{
    ui->setupUi(this);
    plot = new PowerPlot((QMainWindow*)this, (QWidget*) ui->groupBox);

    connect (ui->pressureSpinBox, &QSpinBox::valueChanged, plot, &PowerPlot::setDinAirPressure);
    connect (ui->tempSpinBox, &QSpinBox::valueChanged, plot, &PowerPlot::setDinTemp);
    connect (ui->carMassSpinBox, &QSpinBox::valueChanged, plot, &PowerPlot::setCarMass);
    connect (ui->smoothSpinBox, &QSpinBox::valueChanged, plot, &PowerPlot::setSmoothAmount);
    connect (ui->driveTrainLossSpinBox, &QDoubleSpinBox::valueChanged, plot, &PowerPlot::setDriveTrainLoss);

    connect (ui->reCalcButton, &QPushButton::clicked, plot, &PowerPlot::reCalculate);

    connect (plot, &PowerPlot::resultString, ui->resultLineEdit, &QLineEdit::setText);

    ui->pressureSpinBox->setValue(plot->dinAirPressure());
    ui->tempSpinBox->setValue(plot->dinTemp());
    ui->carMassSpinBox->setValue(plot->getCarMass());
    ui->smoothSpinBox->setValue(plot->getSmoothAmount());
    ui->driveTrainLossSpinBox->setValue(plot->getDriveTrainLoss());
}

V2PowerDialog::~V2PowerDialog()
{
    delete ui;
}
