/********************************************************************************
** Form generated from reading UI file 'serialoptions.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALOPTIONS_H
#define UI_SERIALOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SerialOptionsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *speedComboBox;
    QLabel *label_2;
    QComboBox *portComboBox;
    QLabel *label;
    QPushButton *disconnectPushButton;
    QLabel *label_3;
    QDialogButtonBox *SerialOptionsButtonBox;

    void setupUi(QDialog *SerialOptionsDialog)
    {
        if (SerialOptionsDialog->objectName().isEmpty())
            SerialOptionsDialog->setObjectName("SerialOptionsDialog");
        SerialOptionsDialog->resize(258, 186);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(SerialOptionsDialog->sizePolicy().hasHeightForWidth());
        SerialOptionsDialog->setSizePolicy(sizePolicy);
        SerialOptionsDialog->setMaximumSize(QSize(1677721, 1677721));
        horizontalLayout = new QHBoxLayout(SerialOptionsDialog);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(SerialOptionsDialog);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        speedComboBox = new QComboBox(frame);
        speedComboBox->addItem(QString());
        speedComboBox->addItem(QString());
        speedComboBox->setObjectName("speedComboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(speedComboBox->sizePolicy().hasHeightForWidth());
        speedComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(speedComboBox, 0, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        portComboBox = new QComboBox(frame);
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->addItem(QString());
        portComboBox->setObjectName("portComboBox");
        sizePolicy1.setHeightForWidth(portComboBox->sizePolicy().hasHeightForWidth());
        portComboBox->setSizePolicy(sizePolicy1);
        portComboBox->setEditable(true);

        gridLayout->addWidget(portComboBox, 2, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        disconnectPushButton = new QPushButton(frame);
        disconnectPushButton->setObjectName("disconnectPushButton");

        gridLayout->addWidget(disconnectPushButton, 3, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);

        verticalLayout->addLayout(gridLayout);

        SerialOptionsButtonBox = new QDialogButtonBox(frame);
        SerialOptionsButtonBox->setObjectName("SerialOptionsButtonBox");
        SerialOptionsButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(SerialOptionsButtonBox);


        horizontalLayout->addWidget(frame);


        retranslateUi(SerialOptionsDialog);

        QMetaObject::connectSlotsByName(SerialOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *SerialOptionsDialog)
    {
        SerialOptionsDialog->setWindowTitle(QCoreApplication::translate("SerialOptionsDialog", "SerialOptions", nullptr));
        speedComboBox->setItemText(0, QCoreApplication::translate("SerialOptionsDialog", "115200", nullptr));
        speedComboBox->setItemText(1, QCoreApplication::translate("SerialOptionsDialog", "57600", nullptr));

        label_2->setText(QCoreApplication::translate("SerialOptionsDialog", "Port", nullptr));
        portComboBox->setItemText(0, QCoreApplication::translate("SerialOptionsDialog", "/dev/ttyUSB0", nullptr));
        portComboBox->setItemText(1, QCoreApplication::translate("SerialOptionsDialog", "/dev/ttyUSB1", nullptr));
        portComboBox->setItemText(2, QCoreApplication::translate("SerialOptionsDialog", "/dev/ttyUSB2", nullptr));
        portComboBox->setItemText(3, QCoreApplication::translate("SerialOptionsDialog", "/dev/ttyUSB3", nullptr));
        portComboBox->setItemText(4, QCoreApplication::translate("SerialOptionsDialog", "/dev/ttyACM0", nullptr));
        portComboBox->setItemText(5, QCoreApplication::translate("SerialOptionsDialog", "/dev/rfcomm0", nullptr));
        portComboBox->setItemText(6, QCoreApplication::translate("SerialOptionsDialog", "/dev/rfcomm1", nullptr));
        portComboBox->setItemText(7, QCoreApplication::translate("SerialOptionsDialog", "COM1", nullptr));
        portComboBox->setItemText(8, QCoreApplication::translate("SerialOptionsDialog", "COM2", nullptr));
        portComboBox->setItemText(9, QCoreApplication::translate("SerialOptionsDialog", "COM3", nullptr));
        portComboBox->setItemText(10, QCoreApplication::translate("SerialOptionsDialog", "COM4", nullptr));
        portComboBox->setItemText(11, QCoreApplication::translate("SerialOptionsDialog", "COM5", nullptr));
        portComboBox->setItemText(12, QCoreApplication::translate("SerialOptionsDialog", "COM6", nullptr));
        portComboBox->setItemText(13, QCoreApplication::translate("SerialOptionsDialog", "COM7", nullptr));
        portComboBox->setItemText(14, QCoreApplication::translate("SerialOptionsDialog", "COM8", nullptr));
        portComboBox->setItemText(15, QCoreApplication::translate("SerialOptionsDialog", "COM9", nullptr));
        portComboBox->setItemText(16, QCoreApplication::translate("SerialOptionsDialog", "COM10", nullptr));
        portComboBox->setItemText(17, QCoreApplication::translate("SerialOptionsDialog", "COM11", nullptr));
        portComboBox->setItemText(18, QCoreApplication::translate("SerialOptionsDialog", "COM12", nullptr));
        portComboBox->setItemText(19, QCoreApplication::translate("SerialOptionsDialog", "COM13", nullptr));
        portComboBox->setItemText(20, QCoreApplication::translate("SerialOptionsDialog", "COM14", nullptr));
        portComboBox->setItemText(21, QCoreApplication::translate("SerialOptionsDialog", "COM15", nullptr));
        portComboBox->setItemText(22, QCoreApplication::translate("SerialOptionsDialog", "COM16", nullptr));
        portComboBox->setItemText(23, QCoreApplication::translate("SerialOptionsDialog", "COM17", nullptr));
        portComboBox->setItemText(24, QCoreApplication::translate("SerialOptionsDialog", "COM18", nullptr));
        portComboBox->setItemText(25, QCoreApplication::translate("SerialOptionsDialog", "COM19", nullptr));
        portComboBox->setItemText(26, QCoreApplication::translate("SerialOptionsDialog", "COM20", nullptr));
        portComboBox->setItemText(27, QCoreApplication::translate("SerialOptionsDialog", "COM21", nullptr));
        portComboBox->setItemText(28, QCoreApplication::translate("SerialOptionsDialog", "COM22", nullptr));
        portComboBox->setItemText(29, QCoreApplication::translate("SerialOptionsDialog", "COM23", nullptr));
        portComboBox->setItemText(30, QCoreApplication::translate("SerialOptionsDialog", "COM24", nullptr));
        portComboBox->setItemText(31, QCoreApplication::translate("SerialOptionsDialog", "COM25", nullptr));
        portComboBox->setItemText(32, QCoreApplication::translate("SerialOptionsDialog", "COM26", nullptr));
        portComboBox->setItemText(33, QCoreApplication::translate("SerialOptionsDialog", "COM27", nullptr));
        portComboBox->setItemText(34, QCoreApplication::translate("SerialOptionsDialog", "COM28", nullptr));
        portComboBox->setItemText(35, QCoreApplication::translate("SerialOptionsDialog", "COM29", nullptr));
        portComboBox->setItemText(36, QCoreApplication::translate("SerialOptionsDialog", "COM30", nullptr));

        label->setText(QCoreApplication::translate("SerialOptionsDialog", "Speed", nullptr));
        disconnectPushButton->setText(QCoreApplication::translate("SerialOptionsDialog", "&Disconnect", nullptr));
        label_3->setText(QCoreApplication::translate("SerialOptionsDialog", "OK connects automatically!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialOptionsDialog: public Ui_SerialOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALOPTIONS_H
