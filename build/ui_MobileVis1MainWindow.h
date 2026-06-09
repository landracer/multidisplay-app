/********************************************************************************
** Form generated from reading UI file 'MobileVis1MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILEVIS1MAINWINDOW_H
#define UI_MOBILEVIS1MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MobileVis1MainWindow
{
public:
    QAction *actionConfig_Visualization1;
    QAction *actionShow_Legend;
    QAction *actionReplay;
    QAction *actionShow_first_records;
    QAction *actionShow_last_records;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *Vis1PlotBox;
    QGroupBox *ButtonGroupBox;
    QHBoxLayout *horizontalLayout;
    QFrame *ReplayFrame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ReplayPlayButton;
    QPushButton *ReplayStopButton;
    QPushButton *ReplayPauseButton;
    QDoubleSpinBox *ReplaySpinBox;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *DVMicroLeftButton;
    QPushButton *DVLeftButton;
    QSlider *DVSlider;
    QPushButton *DVRightButton;
    QPushButton *DVMicroRightButton;
    QSpinBox *DVSpinBox;
    QPushButton *DelMarkerButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MobileVis1MainWindow)
    {
        if (MobileVis1MainWindow->objectName().isEmpty())
            MobileVis1MainWindow->setObjectName("MobileVis1MainWindow");
        MobileVis1MainWindow->resize(801, 480);
        actionConfig_Visualization1 = new QAction(MobileVis1MainWindow);
        actionConfig_Visualization1->setObjectName("actionConfig_Visualization1");
        actionShow_Legend = new QAction(MobileVis1MainWindow);
        actionShow_Legend->setObjectName("actionShow_Legend");
        actionReplay = new QAction(MobileVis1MainWindow);
        actionReplay->setObjectName("actionReplay");
        actionShow_first_records = new QAction(MobileVis1MainWindow);
        actionShow_first_records->setObjectName("actionShow_first_records");
        actionShow_last_records = new QAction(MobileVis1MainWindow);
        actionShow_last_records->setObjectName("actionShow_last_records");
        centralwidget = new QWidget(MobileVis1MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        Vis1PlotBox = new QGroupBox(centralwidget);
        Vis1PlotBox->setObjectName("Vis1PlotBox");
        Vis1PlotBox->setFlat(true);

        verticalLayout->addWidget(Vis1PlotBox);

        ButtonGroupBox = new QGroupBox(centralwidget);
        ButtonGroupBox->setObjectName("ButtonGroupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonGroupBox->sizePolicy().hasHeightForWidth());
        ButtonGroupBox->setSizePolicy(sizePolicy);
        ButtonGroupBox->setMinimumSize(QSize(0, 0));
        ButtonGroupBox->setFlat(true);
        horizontalLayout = new QHBoxLayout(ButtonGroupBox);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName("horizontalLayout");
        ReplayFrame = new QFrame(ButtonGroupBox);
        ReplayFrame->setObjectName("ReplayFrame");
        ReplayFrame->setFrameShape(QFrame::StyledPanel);
        ReplayFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(ReplayFrame);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ReplayPlayButton = new QPushButton(ReplayFrame);
        ReplayPlayButton->setObjectName("ReplayPlayButton");

        horizontalLayout_3->addWidget(ReplayPlayButton);

        ReplayStopButton = new QPushButton(ReplayFrame);
        ReplayStopButton->setObjectName("ReplayStopButton");

        horizontalLayout_3->addWidget(ReplayStopButton);

        ReplayPauseButton = new QPushButton(ReplayFrame);
        ReplayPauseButton->setObjectName("ReplayPauseButton");

        horizontalLayout_3->addWidget(ReplayPauseButton);

        ReplaySpinBox = new QDoubleSpinBox(ReplayFrame);
        ReplaySpinBox->setObjectName("ReplaySpinBox");
        ReplaySpinBox->setMinimum(0.100000000000000);
        ReplaySpinBox->setMaximum(100.000000000000000);
        ReplaySpinBox->setValue(1.000000000000000);

        horizontalLayout_3->addWidget(ReplaySpinBox);


        horizontalLayout->addWidget(ReplayFrame);

        frame_2 = new QFrame(ButtonGroupBox);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        DVMicroLeftButton = new QPushButton(frame_2);
        DVMicroLeftButton->setObjectName("DVMicroLeftButton");

        horizontalLayout_2->addWidget(DVMicroLeftButton);

        DVLeftButton = new QPushButton(frame_2);
        DVLeftButton->setObjectName("DVLeftButton");

        horizontalLayout_2->addWidget(DVLeftButton);

        DVSlider = new QSlider(frame_2);
        DVSlider->setObjectName("DVSlider");
        DVSlider->setMinimumSize(QSize(50, 0));
        DVSlider->setMinimum(0);
        DVSlider->setMaximum(100);
        DVSlider->setOrientation(Qt::Horizontal);
        DVSlider->setInvertedAppearance(true);

        horizontalLayout_2->addWidget(DVSlider);

        DVRightButton = new QPushButton(frame_2);
        DVRightButton->setObjectName("DVRightButton");

        horizontalLayout_2->addWidget(DVRightButton);

        DVMicroRightButton = new QPushButton(frame_2);
        DVMicroRightButton->setObjectName("DVMicroRightButton");

        horizontalLayout_2->addWidget(DVMicroRightButton);

        DVSpinBox = new QSpinBox(frame_2);
        DVSpinBox->setObjectName("DVSpinBox");
        DVSpinBox->setMinimum(10);
        DVSpinBox->setMaximum(100000);
        DVSpinBox->setSingleStep(10);
        DVSpinBox->setValue(100);

        horizontalLayout_2->addWidget(DVSpinBox);

        DelMarkerButton = new QPushButton(frame_2);
        DelMarkerButton->setObjectName("DelMarkerButton");

        horizontalLayout_2->addWidget(DelMarkerButton);


        horizontalLayout->addWidget(frame_2);


        verticalLayout->addWidget(ButtonGroupBox);

        MobileVis1MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MobileVis1MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 801, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MobileVis1MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MobileVis1MainWindow);
        statusbar->setObjectName("statusbar");
        MobileVis1MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionConfig_Visualization1);
        menuFile->addAction(actionShow_first_records);
        menuFile->addAction(actionShow_last_records);

        retranslateUi(MobileVis1MainWindow);

        QMetaObject::connectSlotsByName(MobileVis1MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MobileVis1MainWindow)
    {
        MobileVis1MainWindow->setWindowTitle(QCoreApplication::translate("MobileVis1MainWindow", "MD Vis1", nullptr));
        actionConfig_Visualization1->setText(QCoreApplication::translate("MobileVis1MainWindow", "Config Visualization1", nullptr));
        actionShow_Legend->setText(QCoreApplication::translate("MobileVis1MainWindow", "show Legend", nullptr));
        actionReplay->setText(QCoreApplication::translate("MobileVis1MainWindow", "Replay", nullptr));
        actionShow_first_records->setText(QCoreApplication::translate("MobileVis1MainWindow", "show first records", nullptr));
        actionShow_last_records->setText(QCoreApplication::translate("MobileVis1MainWindow", "show last records", nullptr));
        Vis1PlotBox->setTitle(QString());
        ButtonGroupBox->setTitle(QString());
        ReplayPlayButton->setText(QCoreApplication::translate("MobileVis1MainWindow", "play", nullptr));
        ReplayStopButton->setText(QCoreApplication::translate("MobileVis1MainWindow", "stop", nullptr));
        ReplayPauseButton->setText(QCoreApplication::translate("MobileVis1MainWindow", "pause", nullptr));
        DVMicroLeftButton->setText(QCoreApplication::translate("MobileVis1MainWindow", "<", nullptr));
        DVLeftButton->setText(QCoreApplication::translate("MobileVis1MainWindow", "<<", nullptr));
        DVRightButton->setText(QCoreApplication::translate("MobileVis1MainWindow", ">>", nullptr));
        DVMicroRightButton->setText(QCoreApplication::translate("MobileVis1MainWindow", ">", nullptr));
        DelMarkerButton->setText(QCoreApplication::translate("MobileVis1MainWindow", "DM", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MobileVis1MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MobileVis1MainWindow: public Ui_MobileVis1MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILEVIS1MAINWINDOW_H
