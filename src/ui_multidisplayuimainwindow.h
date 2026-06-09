/********************************************************************************
** Form generated from reading UI file 'multidisplayuimainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIDISPLAYUIMAINWINDOW_H
#define UI_MULTIDISPLAYUIMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultidisplayUIMainWindowClass
{
public:
    QAction *action_SerialConnect;
    QAction *action_SerialDisconnect;
    QAction *action_SerialOptions;
    QAction *action_Save;
    QAction *action_SaveAs;
    QAction *action_Export_as_CSV;
    QAction *action_Open;
    QAction *action_New;
    QAction *action_Enable_Zoom_Mode;
    QAction *actionShow_EGT0;
    QAction *actionShow_EGT1;
    QAction *action_config_Vis1;
    QAction *actionTest123;
    QAction *actionShow_Boost_Lambda;
    QAction *actionShow_RPM_Boost;
    QAction *action_Replay;
    QAction *actionTest_Thread;
    QAction *actionStop_Replay_Thread;
    QAction *action_activate_MD_string_output;
    QAction *action_calibrate_LD_measure_environment_pressure;
    QAction *action_load_settings_from_EEPROM;
    QAction *action_save_settings_to_EEPROM;
    QAction *action_set_N75_duty_cycles;
    QAction *actionN75_boost_control;
    QAction *actionActivate_MD_binary_output;
    QAction *action_disable_measurement_data_output;
    QAction *V2_action_load_settings_from_EEPROM;
    QAction *V2_action_save_settings_to_EEPROM;
    QAction *V2_action_calibrate_LD_measure_environment_pressure;
    QAction *actionSettings;
    QAction *actionGearbox_settings;
    QAction *actionAbout;
    QAction *action200kpa;
    QAction *action250kpa;
    QAction *action300kpa;
    QAction *action400kpa;
    QAction *action100kpa;
    QAction *action;
    QAction *actionShow_application_window;
    QAction *actionConfigure_DataTable;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *DataTableWidget;
    QWidget *DataTab;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *DataTextEdit;
    QWidget *BoostPidTab;
    QVBoxLayout *verticalLayout_3;
    QFrame *BoostParamFrame;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *BoostGraphGroupBox;
    QWidget *VisualizationTab;
    QWidget *Data;
    QHBoxLayout *horizontalLayout_3;
    QTableView *DataTableView;
    QWidget *DashboardTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *ReplayGroupBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *ReplayCurPos;
    QPushButton *PlayButton;
    QPushButton *PauseButton;
    QPushButton *StopButton;
    QDoubleSpinBox *ReplayFactorSpinBox;
    QGroupBox *CmdGroupBox;
    QVBoxLayout *verticalLayout_4;
    QPushButton *ButtonAPush;
    QPushButton *ButtonAHold;
    QPushButton *ButtonBPush;
    QPushButton *ButtonBHold;
    QGroupBox *DataViewGroupBox;
    QSlider *DataViewSlider;
    QSpinBox *DataViewWinSizeSpinBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *DataViewScrollLeftButton;
    QPushButton *DataViewScrollRightButton;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Serial;
    QMenu *menu_Evaluation;
    QMenu *menu_Visualization;
    QMenu *menuV2;
    QMenu *menu_Digifant_I;
    QMenu *menu_map_sensor;
    QMenu *menuHelp;
    QStatusBar *StatusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MultidisplayUIMainWindowClass)
    {
        if (MultidisplayUIMainWindowClass->objectName().isEmpty())
            MultidisplayUIMainWindowClass->setObjectName("MultidisplayUIMainWindowClass");
        MultidisplayUIMainWindowClass->resize(845, 651);
        action_SerialConnect = new QAction(MultidisplayUIMainWindowClass);
        action_SerialConnect->setObjectName("action_SerialConnect");
        action_SerialDisconnect = new QAction(MultidisplayUIMainWindowClass);
        action_SerialDisconnect->setObjectName("action_SerialDisconnect");
        action_SerialOptions = new QAction(MultidisplayUIMainWindowClass);
        action_SerialOptions->setObjectName("action_SerialOptions");
        action_Save = new QAction(MultidisplayUIMainWindowClass);
        action_Save->setObjectName("action_Save");
        action_SaveAs = new QAction(MultidisplayUIMainWindowClass);
        action_SaveAs->setObjectName("action_SaveAs");
        action_Export_as_CSV = new QAction(MultidisplayUIMainWindowClass);
        action_Export_as_CSV->setObjectName("action_Export_as_CSV");
        action_Open = new QAction(MultidisplayUIMainWindowClass);
        action_Open->setObjectName("action_Open");
        action_New = new QAction(MultidisplayUIMainWindowClass);
        action_New->setObjectName("action_New");
        action_Enable_Zoom_Mode = new QAction(MultidisplayUIMainWindowClass);
        action_Enable_Zoom_Mode->setObjectName("action_Enable_Zoom_Mode");
        action_Enable_Zoom_Mode->setCheckable(true);
        action_Enable_Zoom_Mode->setEnabled(false);
        actionShow_EGT0 = new QAction(MultidisplayUIMainWindowClass);
        actionShow_EGT0->setObjectName("actionShow_EGT0");
        actionShow_EGT0->setCheckable(true);
        actionShow_EGT0->setChecked(true);
        actionShow_EGT1 = new QAction(MultidisplayUIMainWindowClass);
        actionShow_EGT1->setObjectName("actionShow_EGT1");
        actionShow_EGT1->setCheckable(true);
        actionShow_EGT1->setChecked(true);
        action_config_Vis1 = new QAction(MultidisplayUIMainWindowClass);
        action_config_Vis1->setObjectName("action_config_Vis1");
        actionTest123 = new QAction(MultidisplayUIMainWindowClass);
        actionTest123->setObjectName("actionTest123");
        actionShow_Boost_Lambda = new QAction(MultidisplayUIMainWindowClass);
        actionShow_Boost_Lambda->setObjectName("actionShow_Boost_Lambda");
        actionShow_RPM_Boost = new QAction(MultidisplayUIMainWindowClass);
        actionShow_RPM_Boost->setObjectName("actionShow_RPM_Boost");
        action_Replay = new QAction(MultidisplayUIMainWindowClass);
        action_Replay->setObjectName("action_Replay");
        actionTest_Thread = new QAction(MultidisplayUIMainWindowClass);
        actionTest_Thread->setObjectName("actionTest_Thread");
        actionStop_Replay_Thread = new QAction(MultidisplayUIMainWindowClass);
        actionStop_Replay_Thread->setObjectName("actionStop_Replay_Thread");
        action_activate_MD_string_output = new QAction(MultidisplayUIMainWindowClass);
        action_activate_MD_string_output->setObjectName("action_activate_MD_string_output");
        action_calibrate_LD_measure_environment_pressure = new QAction(MultidisplayUIMainWindowClass);
        action_calibrate_LD_measure_environment_pressure->setObjectName("action_calibrate_LD_measure_environment_pressure");
        action_load_settings_from_EEPROM = new QAction(MultidisplayUIMainWindowClass);
        action_load_settings_from_EEPROM->setObjectName("action_load_settings_from_EEPROM");
        action_save_settings_to_EEPROM = new QAction(MultidisplayUIMainWindowClass);
        action_save_settings_to_EEPROM->setObjectName("action_save_settings_to_EEPROM");
        action_set_N75_duty_cycles = new QAction(MultidisplayUIMainWindowClass);
        action_set_N75_duty_cycles->setObjectName("action_set_N75_duty_cycles");
        actionN75_boost_control = new QAction(MultidisplayUIMainWindowClass);
        actionN75_boost_control->setObjectName("actionN75_boost_control");
        actionActivate_MD_binary_output = new QAction(MultidisplayUIMainWindowClass);
        actionActivate_MD_binary_output->setObjectName("actionActivate_MD_binary_output");
        action_disable_measurement_data_output = new QAction(MultidisplayUIMainWindowClass);
        action_disable_measurement_data_output->setObjectName("action_disable_measurement_data_output");
        V2_action_load_settings_from_EEPROM = new QAction(MultidisplayUIMainWindowClass);
        V2_action_load_settings_from_EEPROM->setObjectName("V2_action_load_settings_from_EEPROM");
        V2_action_save_settings_to_EEPROM = new QAction(MultidisplayUIMainWindowClass);
        V2_action_save_settings_to_EEPROM->setObjectName("V2_action_save_settings_to_EEPROM");
        V2_action_calibrate_LD_measure_environment_pressure = new QAction(MultidisplayUIMainWindowClass);
        V2_action_calibrate_LD_measure_environment_pressure->setObjectName("V2_action_calibrate_LD_measure_environment_pressure");
        actionSettings = new QAction(MultidisplayUIMainWindowClass);
        actionSettings->setObjectName("actionSettings");
        actionGearbox_settings = new QAction(MultidisplayUIMainWindowClass);
        actionGearbox_settings->setObjectName("actionGearbox_settings");
        actionAbout = new QAction(MultidisplayUIMainWindowClass);
        actionAbout->setObjectName("actionAbout");
        action200kpa = new QAction(MultidisplayUIMainWindowClass);
        action200kpa->setObjectName("action200kpa");
        action200kpa->setCheckable(true);
        action250kpa = new QAction(MultidisplayUIMainWindowClass);
        action250kpa->setObjectName("action250kpa");
        action250kpa->setCheckable(true);
        action300kpa = new QAction(MultidisplayUIMainWindowClass);
        action300kpa->setObjectName("action300kpa");
        action300kpa->setCheckable(true);
        action400kpa = new QAction(MultidisplayUIMainWindowClass);
        action400kpa->setObjectName("action400kpa");
        action400kpa->setCheckable(true);
        action100kpa = new QAction(MultidisplayUIMainWindowClass);
        action100kpa->setObjectName("action100kpa");
        action100kpa->setCheckable(true);
        action = new QAction(MultidisplayUIMainWindowClass);
        action->setObjectName("action");
        action->setCheckable(true);
        actionShow_application_window = new QAction(MultidisplayUIMainWindowClass);
        actionShow_application_window->setObjectName("actionShow_application_window");
        actionConfigure_DataTable = new QAction(MultidisplayUIMainWindowClass);
        actionConfigure_DataTable->setObjectName("actionConfigure_DataTable");
        centralwidget = new QWidget(MultidisplayUIMainWindowClass);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        DataTableWidget = new QTabWidget(centralwidget);
        DataTableWidget->setObjectName("DataTableWidget");
        DataTab = new QWidget();
        DataTab->setObjectName("DataTab");
        verticalLayout = new QVBoxLayout(DataTab);
        verticalLayout->setObjectName("verticalLayout");
        DataTextEdit = new QPlainTextEdit(DataTab);
        DataTextEdit->setObjectName("DataTextEdit");

        verticalLayout->addWidget(DataTextEdit);

        DataTableWidget->addTab(DataTab, QString());
        BoostPidTab = new QWidget();
        BoostPidTab->setObjectName("BoostPidTab");
        verticalLayout_3 = new QVBoxLayout(BoostPidTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        BoostParamFrame = new QFrame(BoostPidTab);
        BoostParamFrame->setObjectName("BoostParamFrame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BoostParamFrame->sizePolicy().hasHeightForWidth());
        BoostParamFrame->setSizePolicy(sizePolicy);
        BoostParamFrame->setMaximumSize(QSize(16777215, 150));
        horizontalLayout_2 = new QHBoxLayout(BoostParamFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        verticalLayout_3->addWidget(BoostParamFrame);

        BoostGraphGroupBox = new QGroupBox(BoostPidTab);
        BoostGraphGroupBox->setObjectName("BoostGraphGroupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BoostGraphGroupBox->sizePolicy().hasHeightForWidth());
        BoostGraphGroupBox->setSizePolicy(sizePolicy1);
        BoostGraphGroupBox->setMinimumSize(QSize(0, 100));

        verticalLayout_3->addWidget(BoostGraphGroupBox);

        DataTableWidget->addTab(BoostPidTab, QString());
        VisualizationTab = new QWidget();
        VisualizationTab->setObjectName("VisualizationTab");
        DataTableWidget->addTab(VisualizationTab, QString());
        Data = new QWidget();
        Data->setObjectName("Data");
        horizontalLayout_3 = new QHBoxLayout(Data);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        DataTableView = new QTableView(Data);
        DataTableView->setObjectName("DataTableView");

        horizontalLayout_3->addWidget(DataTableView);

        DataTableWidget->addTab(Data, QString());
        DashboardTab = new QWidget();
        DashboardTab->setObjectName("DashboardTab");
        DataTableWidget->addTab(DashboardTab, QString());

        horizontalLayout->addWidget(DataTableWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        ReplayGroupBox = new QGroupBox(centralwidget);
        ReplayGroupBox->setObjectName("ReplayGroupBox");
        ReplayGroupBox->setCheckable(false);
        ReplayGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(ReplayGroupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        ReplayCurPos = new QCheckBox(ReplayGroupBox);
        ReplayCurPos->setObjectName("ReplayCurPos");

        verticalLayout_5->addWidget(ReplayCurPos);

        PlayButton = new QPushButton(ReplayGroupBox);
        PlayButton->setObjectName("PlayButton");

        verticalLayout_5->addWidget(PlayButton);

        PauseButton = new QPushButton(ReplayGroupBox);
        PauseButton->setObjectName("PauseButton");

        verticalLayout_5->addWidget(PauseButton);

        StopButton = new QPushButton(ReplayGroupBox);
        StopButton->setObjectName("StopButton");

        verticalLayout_5->addWidget(StopButton);

        ReplayFactorSpinBox = new QDoubleSpinBox(ReplayGroupBox);
        ReplayFactorSpinBox->setObjectName("ReplayFactorSpinBox");
        ReplayFactorSpinBox->setMinimum(0.100000000000000);
        ReplayFactorSpinBox->setValue(1.000000000000000);

        verticalLayout_5->addWidget(ReplayFactorSpinBox);


        verticalLayout_2->addWidget(ReplayGroupBox);

        CmdGroupBox = new QGroupBox(centralwidget);
        CmdGroupBox->setObjectName("CmdGroupBox");
        CmdGroupBox->setEnabled(true);
        CmdGroupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_4 = new QVBoxLayout(CmdGroupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        ButtonAPush = new QPushButton(CmdGroupBox);
        ButtonAPush->setObjectName("ButtonAPush");

        verticalLayout_4->addWidget(ButtonAPush);

        ButtonAHold = new QPushButton(CmdGroupBox);
        ButtonAHold->setObjectName("ButtonAHold");
        ButtonAHold->setFlat(false);

        verticalLayout_4->addWidget(ButtonAHold);

        ButtonBPush = new QPushButton(CmdGroupBox);
        ButtonBPush->setObjectName("ButtonBPush");

        verticalLayout_4->addWidget(ButtonBPush);

        ButtonBHold = new QPushButton(CmdGroupBox);
        ButtonBHold->setObjectName("ButtonBHold");

        verticalLayout_4->addWidget(ButtonBHold);


        verticalLayout_2->addWidget(CmdGroupBox);

        DataViewGroupBox = new QGroupBox(centralwidget);
        DataViewGroupBox->setObjectName("DataViewGroupBox");
        DataViewGroupBox->setMinimumSize(QSize(0, 165));
        DataViewSlider = new QSlider(DataViewGroupBox);
        DataViewSlider->setObjectName("DataViewSlider");
        DataViewSlider->setGeometry(QRect(10, 50, 71, 16));
        DataViewSlider->setMinimum(0);
        DataViewSlider->setMaximum(100);
        DataViewSlider->setValue(1);
        DataViewSlider->setOrientation(Qt::Horizontal);
        DataViewSlider->setInvertedAppearance(true);
        DataViewSlider->setInvertedControls(false);
        DataViewWinSizeSpinBox = new QSpinBox(DataViewGroupBox);
        DataViewWinSizeSpinBox->setObjectName("DataViewWinSizeSpinBox");
        DataViewWinSizeSpinBox->setGeometry(QRect(10, 150, 71, 21));
        DataViewWinSizeSpinBox->setMinimum(10);
        DataViewWinSizeSpinBox->setMaximum(100000);
        DataViewWinSizeSpinBox->setSingleStep(10);
        DataViewWinSizeSpinBox->setValue(100);
        label = new QLabel(DataViewGroupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 81, 16));
        label_2 = new QLabel(DataViewGroupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 110, 81, 41));
        DataViewScrollLeftButton = new QPushButton(DataViewGroupBox);
        DataViewScrollLeftButton->setObjectName("DataViewScrollLeftButton");
        DataViewScrollLeftButton->setGeometry(QRect(10, 70, 31, 25));
        DataViewScrollLeftButton->setMaximumSize(QSize(70, 16777215));
        DataViewScrollRightButton = new QPushButton(DataViewGroupBox);
        DataViewScrollRightButton->setObjectName("DataViewScrollRightButton");
        DataViewScrollRightButton->setGeometry(QRect(50, 70, 31, 25));
        DataViewScrollRightButton->setMaximumSize(QSize(70, 16777215));

        verticalLayout_2->addWidget(DataViewGroupBox);


        horizontalLayout->addLayout(verticalLayout_2);

        MultidisplayUIMainWindowClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MultidisplayUIMainWindowClass);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 845, 27));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName("menu_File");
        menu_Serial = new QMenu(menubar);
        menu_Serial->setObjectName("menu_Serial");
        menu_Evaluation = new QMenu(menubar);
        menu_Evaluation->setObjectName("menu_Evaluation");
        menu_Visualization = new QMenu(menubar);
        menu_Visualization->setObjectName("menu_Visualization");
        menuV2 = new QMenu(menubar);
        menuV2->setObjectName("menuV2");
        menu_Digifant_I = new QMenu(menuV2);
        menu_Digifant_I->setObjectName("menu_Digifant_I");
        menu_map_sensor = new QMenu(menu_Digifant_I);
        menu_map_sensor->setObjectName("menu_map_sensor");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MultidisplayUIMainWindowClass->setMenuBar(menubar);
        StatusBar = new QStatusBar(MultidisplayUIMainWindowClass);
        StatusBar->setObjectName("StatusBar");
        MultidisplayUIMainWindowClass->setStatusBar(StatusBar);
        toolBar = new QToolBar(MultidisplayUIMainWindowClass);
        toolBar->setObjectName("toolBar");
        MultidisplayUIMainWindowClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Serial->menuAction());
        menubar->addAction(menu_Visualization->menuAction());
        menubar->addAction(menu_Evaluation->menuAction());
        menubar->addAction(menuV2->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(action_SaveAs);
        menu_File->addAction(action_Export_as_CSV);
        menu_Serial->addAction(action_SerialConnect);
        menu_Serial->addAction(action_SerialDisconnect);
        menu_Serial->addSeparator();
        menu_Serial->addAction(action_SerialOptions);
        menu_Serial->addAction(action_disable_measurement_data_output);
        menu_Serial->addAction(action_activate_MD_string_output);
        menu_Serial->addAction(actionActivate_MD_binary_output);
        menu_Serial->addSeparator();
        menu_Evaluation->addAction(actionShow_Boost_Lambda);
        menu_Evaluation->addAction(actionShow_RPM_Boost);
        menu_Visualization->addAction(action_Enable_Zoom_Mode);
        menu_Visualization->addSeparator();
        menu_Visualization->addAction(action_config_Vis1);
        menu_Visualization->addAction(actionConfigure_DataTable);
        menuV2->addAction(actionN75_boost_control);
        menuV2->addAction(actionSettings);
        menuV2->addAction(V2_action_load_settings_from_EEPROM);
        menuV2->addAction(V2_action_save_settings_to_EEPROM);
        menuV2->addSeparator();
        menuV2->addAction(V2_action_calibrate_LD_measure_environment_pressure);
        menuV2->addAction(actionGearbox_settings);
        menuV2->addSeparator();
        menuV2->addAction(menu_Digifant_I->menuAction());
        menu_Digifant_I->addAction(menu_map_sensor->menuAction());
        menu_Digifant_I->addAction(actionShow_application_window);
        menu_map_sensor->addAction(action100kpa);
        menu_map_sensor->addAction(action200kpa);
        menu_map_sensor->addAction(action250kpa);
        menu_map_sensor->addAction(action300kpa);
        menu_map_sensor->addAction(action400kpa);
        menuHelp->addAction(actionAbout);

        retranslateUi(MultidisplayUIMainWindowClass);

        DataTableWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MultidisplayUIMainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MultidisplayUIMainWindowClass)
    {
        MultidisplayUIMainWindowClass->setWindowTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Multidisplay UI", nullptr));
#if QT_CONFIG(accessibility)
        MultidisplayUIMainWindowClass->setAccessibleName(QCoreApplication::translate("MultidisplayUIMainWindowClass", "MultidisplayUI", nullptr));
#endif // QT_CONFIG(accessibility)
        action_SerialConnect->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Connect", nullptr));
        action_SerialDisconnect->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Disconnect", nullptr));
        action_SerialOptions->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Options", nullptr));
        action_Save->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_SaveAs->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Save &As", nullptr));
        action_Export_as_CSV->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Export as CSV", nullptr));
        action_Open->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Open", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_New->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&New", nullptr));
#if QT_CONFIG(shortcut)
        action_New->setShortcut(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Enable_Zoom_Mode->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "enable &Zoom Mode", nullptr));
        actionShow_EGT0->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "show EGT&0", nullptr));
        actionShow_EGT1->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "show EGT&1", nullptr));
        action_config_Vis1->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&configure Visualization 1", nullptr));
        actionTest123->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "test123", nullptr));
        actionShow_Boost_Lambda->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "show Boost / &Lambda", nullptr));
        actionShow_RPM_Boost->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "show RPM / &Boost", nullptr));
        action_Replay->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Replay", nullptr));
        actionTest_Thread->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "start Replay Thread", nullptr));
        actionStop_Replay_Thread->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "stop Replay Thread", nullptr));
        action_activate_MD_string_output->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&activate MD string output", nullptr));
        action_calibrate_LD_measure_environment_pressure->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&calibrate LD (measure environment pressure)", nullptr));
        action_load_settings_from_EEPROM->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&load settings from EEPROM", nullptr));
        action_save_settings_to_EEPROM->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&save settings to EEPROM", nullptr));
        action_set_N75_duty_cycles->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "s&et N75 duty cycles", nullptr));
        actionN75_boost_control->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "n75 &boost control", nullptr));
        actionActivate_MD_binary_output->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "activate MD &binary output", nullptr));
        action_disable_measurement_data_output->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&disable measurement data output", nullptr));
        V2_action_load_settings_from_EEPROM->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&load settings from EEPROM", nullptr));
        V2_action_save_settings_to_EEPROM->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&save settings to EEPROM", nullptr));
        V2_action_calibrate_LD_measure_environment_pressure->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&calibrate LD (measure environment pressure)", nullptr));
        actionSettings->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&settings", nullptr));
        actionGearbox_settings->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "gearbox settings", nullptr));
        actionAbout->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "about", nullptr));
        action200kpa->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "200kpa", nullptr));
        action250kpa->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "250kpa", nullptr));
        action300kpa->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "300kpa", nullptr));
        action400kpa->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "400kpa", nullptr));
        action100kpa->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "100kpa", nullptr));
        action->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "use as MD boost sensor", nullptr));
        actionShow_application_window->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "show &application window", nullptr));
        actionConfigure_DataTable->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "configure DataTable", nullptr));
#if QT_CONFIG(accessibility)
        DataTab->setAccessibleName(QCoreApplication::translate("MultidisplayUIMainWindowClass", "SerialData", nullptr));
#endif // QT_CONFIG(accessibility)
        DataTableWidget->setTabText(DataTableWidget->indexOf(DataTab), QCoreApplication::translate("MultidisplayUIMainWindowClass", "SerialInput", nullptr));
        BoostGraphGroupBox->setTitle(QString());
        DataTableWidget->setTabText(DataTableWidget->indexOf(BoostPidTab), QCoreApplication::translate("MultidisplayUIMainWindowClass", "Boost PID", nullptr));
        DataTableWidget->setTabText(DataTableWidget->indexOf(VisualizationTab), QCoreApplication::translate("MultidisplayUIMainWindowClass", "Visualization", nullptr));
        DataTableWidget->setTabText(DataTableWidget->indexOf(Data), QCoreApplication::translate("MultidisplayUIMainWindowClass", "Data", nullptr));
        DataTableWidget->setTabText(DataTableWidget->indexOf(DashboardTab), QCoreApplication::translate("MultidisplayUIMainWindowClass", "Dashboard", nullptr));
        ReplayGroupBox->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Replay", nullptr));
        ReplayCurPos->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "cur pos", nullptr));
        PlayButton->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Play", nullptr));
        PauseButton->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Pause", nullptr));
        StopButton->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Stop", nullptr));
        CmdGroupBox->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Commands", nullptr));
        ButtonAPush->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "A push", nullptr));
        ButtonAHold->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "A hold", nullptr));
        ButtonBPush->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "B push", nullptr));
        ButtonBHold->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "B hold", nullptr));
#if QT_CONFIG(tooltip)
        DataViewGroupBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        DataViewGroupBox->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "DataView", nullptr));
        label->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "plot data ]", nullptr));
        label_2->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "# of plotted \n"
"records:", nullptr));
        DataViewScrollLeftButton->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", "<", nullptr));
        DataViewScrollRightButton->setText(QCoreApplication::translate("MultidisplayUIMainWindowClass", ">", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&File", nullptr));
        menu_Serial->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Serial", nullptr));
        menu_Evaluation->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Evaluation", nullptr));
        menu_Visualization->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Visualization", nullptr));
        menuV2->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Multidisplay V&2", nullptr));
        menu_Digifant_I->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&Digifant I", nullptr));
        menu_map_sensor->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "&map sensor", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MultidisplayUIMainWindowClass", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultidisplayUIMainWindowClass: public Ui_MultidisplayUIMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIDISPLAYUIMAINWINDOW_H
