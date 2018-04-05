/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/displaybar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReadMcconf;
    QAction *actionReadMcconfDefault;
    QAction *actionWriteMcconf;
    QAction *actionSaveMotorConfXml;
    QAction *actionLoadMotorConfXml;
    QAction *actionDisconnect;
    QAction *actionReboot;
    QAction *actionCanFwd;
    QAction *actionReconnect;
    QAction *actionRtData;
    QAction *actionReadAppconf;
    QAction *actionReadAppconfDefault;
    QAction *actionWriteAppconf;
    QAction *actionSaveAppconfXml;
    QAction *actionLoadAppconfXml;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionKeyboardControl;
    QAction *actionParameterEditorMcconf;
    QAction *actionParameterEditorAppconf;
    QAction *actionSaveAppConfigurationHeader;
    QAction *actionSaveMotorConfigurationHeader;
    QAction *actionSaveAppConfigurationHeaderWrap;
    QAction *actionSaveMotorConfigurationHeaderWrap;
    QAction *actionRtDataApp;
    QAction *actionTerminalPrintFaults;
    QAction *actionTerminalShowHelp;
    QAction *actionTerminalClear;
    QAction *actionTerminalPrintThreads;
    QAction *actionSendAlive;
    QAction *actionLibrariesUsed;
    QAction *actionMotorSetupWizard;
    QAction *actionAppSetupWizard;
    QAction *actionAboutQt;
    QAction *actionParameterEditorInfo;
    QAction *actionSafetyInformation;
    QAction *actionWarrantyStatement;
    QAction *actionVESCToolChangelog;
    QAction *actionTerminalDRV8301ResetLatchedFaults;
    QAction *actionVESCProjectForums;
    QAction *actionFirmwareChangelog;
    QAction *actionLicense;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *pageLabel;
    QListWidget *pageList;
    QStackedWidget *pageWidget;
    QGridLayout *gridLayout_3;
    DisplayBar *dispCurrent;
    DisplayBar *dispDuty;
    QPushButton *fullBrakeButton;
    QDoubleSpinBox *handbrakeBox;
    QPushButton *handbrakeButton;
    QDoubleSpinBox *currentBox;
    QDoubleSpinBox *speedBox;
    QPushButton *dutyButton;
    QDoubleSpinBox *posBox;
    QPushButton *posButton;
    QPushButton *stopButton;
    QPushButton *speedButton;
    QPushButton *currentButton;
    QDoubleSpinBox *brakeCurrentBox;
    QPushButton *brakeCurrentButton;
    QDoubleSpinBox *dutyBox;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuTerminal;
    QMenu *menuCommands;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1054, 642);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionReadMcconf = new QAction(MainWindow);
        actionReadMcconf->setObjectName(QStringLiteral("actionReadMcconf"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/motor_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadMcconf->setIcon(icon1);
        actionReadMcconfDefault = new QAction(MainWindow);
        actionReadMcconfDefault->setObjectName(QStringLiteral("actionReadMcconfDefault"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/motor_default.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadMcconfDefault->setIcon(icon2);
        actionWriteMcconf = new QAction(MainWindow);
        actionWriteMcconf->setObjectName(QStringLiteral("actionWriteMcconf"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/motor_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWriteMcconf->setIcon(icon3);
        actionSaveMotorConfXml = new QAction(MainWindow);
        actionSaveMotorConfXml->setObjectName(QStringLiteral("actionSaveMotorConfXml"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icons/Save as-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveMotorConfXml->setIcon(icon4);
        actionLoadMotorConfXml = new QAction(MainWindow);
        actionLoadMotorConfXml->setObjectName(QStringLiteral("actionLoadMotorConfXml"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icons/Open Folder-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadMotorConfXml->setIcon(icon5);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/icons/Disconnected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon6);
        actionReboot = new QAction(MainWindow);
        actionReboot->setObjectName(QStringLiteral("actionReboot"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/icons/Restart-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReboot->setIcon(icon7);
        actionCanFwd = new QAction(MainWindow);
        actionCanFwd->setObjectName(QStringLiteral("actionCanFwd"));
        actionCanFwd->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/res/icons/can_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QStringLiteral(":/res/icons/can_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCanFwd->setIcon(icon8);
        actionReconnect = new QAction(MainWindow);
        actionReconnect->setObjectName(QStringLiteral("actionReconnect"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/res/icons/Connected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReconnect->setIcon(icon9);
        actionRtData = new QAction(MainWindow);
        actionRtData->setObjectName(QStringLiteral("actionRtData"));
        actionRtData->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/res/icons/rt_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QStringLiteral(":/res/icons/rt_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRtData->setIcon(icon10);
        actionReadAppconf = new QAction(MainWindow);
        actionReadAppconf->setObjectName(QStringLiteral("actionReadAppconf"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/res/icons/app_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadAppconf->setIcon(icon11);
        actionReadAppconfDefault = new QAction(MainWindow);
        actionReadAppconfDefault->setObjectName(QStringLiteral("actionReadAppconfDefault"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/res/icons/app_default.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReadAppconfDefault->setIcon(icon12);
        actionWriteAppconf = new QAction(MainWindow);
        actionWriteAppconf->setObjectName(QStringLiteral("actionWriteAppconf"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/res/icons/app_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWriteAppconf->setIcon(icon13);
        actionSaveAppconfXml = new QAction(MainWindow);
        actionSaveAppconfXml->setObjectName(QStringLiteral("actionSaveAppconfXml"));
        actionSaveAppconfXml->setIcon(icon4);
        actionLoadAppconfXml = new QAction(MainWindow);
        actionLoadAppconfXml->setObjectName(QStringLiteral("actionLoadAppconfXml"));
        actionLoadAppconfXml->setIcon(icon5);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/res/icons/Shutdown-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon14);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/res/icons/About-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon15);
        actionKeyboardControl = new QAction(MainWindow);
        actionKeyboardControl->setObjectName(QStringLiteral("actionKeyboardControl"));
        actionKeyboardControl->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/res/icons/keys_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon16.addFile(QStringLiteral(":/res/icons/keys_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionKeyboardControl->setIcon(icon16);
        actionParameterEditorMcconf = new QAction(MainWindow);
        actionParameterEditorMcconf->setObjectName(QStringLiteral("actionParameterEditorMcconf"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/res/icons/Horizontal Settings Mixer-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionParameterEditorMcconf->setIcon(icon17);
        actionParameterEditorAppconf = new QAction(MainWindow);
        actionParameterEditorAppconf->setObjectName(QStringLiteral("actionParameterEditorAppconf"));
        actionParameterEditorAppconf->setIcon(icon17);
        actionSaveAppConfigurationHeader = new QAction(MainWindow);
        actionSaveAppConfigurationHeader->setObjectName(QStringLiteral("actionSaveAppConfigurationHeader"));
        actionSaveAppConfigurationHeader->setIcon(icon4);
        actionSaveMotorConfigurationHeader = new QAction(MainWindow);
        actionSaveMotorConfigurationHeader->setObjectName(QStringLiteral("actionSaveMotorConfigurationHeader"));
        actionSaveMotorConfigurationHeader->setIcon(icon4);
        actionSaveAppConfigurationHeaderWrap = new QAction(MainWindow);
        actionSaveAppConfigurationHeaderWrap->setObjectName(QStringLiteral("actionSaveAppConfigurationHeaderWrap"));
        actionSaveAppConfigurationHeaderWrap->setIcon(icon4);
        actionSaveMotorConfigurationHeaderWrap = new QAction(MainWindow);
        actionSaveMotorConfigurationHeaderWrap->setObjectName(QStringLiteral("actionSaveMotorConfigurationHeaderWrap"));
        actionSaveMotorConfigurationHeaderWrap->setIcon(icon4);
        actionRtDataApp = new QAction(MainWindow);
        actionRtDataApp->setObjectName(QStringLiteral("actionRtDataApp"));
        actionRtDataApp->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/res/icons/rt_app_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon18.addFile(QStringLiteral(":/res/icons/rt_app_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRtDataApp->setIcon(icon18);
        actionTerminalPrintFaults = new QAction(MainWindow);
        actionTerminalPrintFaults->setObjectName(QStringLiteral("actionTerminalPrintFaults"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/res/icons/Console-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalPrintFaults->setIcon(icon19);
        actionTerminalShowHelp = new QAction(MainWindow);
        actionTerminalShowHelp->setObjectName(QStringLiteral("actionTerminalShowHelp"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalShowHelp->setIcon(icon20);
        actionTerminalClear = new QAction(MainWindow);
        actionTerminalClear->setObjectName(QStringLiteral("actionTerminalClear"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/res/icons/Delete-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalClear->setIcon(icon21);
        actionTerminalPrintThreads = new QAction(MainWindow);
        actionTerminalPrintThreads->setObjectName(QStringLiteral("actionTerminalPrintThreads"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/res/icons/Electronics-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalPrintThreads->setIcon(icon22);
        actionSendAlive = new QAction(MainWindow);
        actionSendAlive->setObjectName(QStringLiteral("actionSendAlive"));
        actionSendAlive->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/res/icons/alive_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon23.addFile(QStringLiteral(":/res/icons/alive_on.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSendAlive->setIcon(icon23);
        actionLibrariesUsed = new QAction(MainWindow);
        actionLibrariesUsed->setObjectName(QStringLiteral("actionLibrariesUsed"));
        actionLibrariesUsed->setIcon(icon15);
        actionMotorSetupWizard = new QAction(MainWindow);
        actionMotorSetupWizard->setObjectName(QStringLiteral("actionMotorSetupWizard"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/res/icons/Wizard-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMotorSetupWizard->setIcon(icon24);
        actionAppSetupWizard = new QAction(MainWindow);
        actionAppSetupWizard->setObjectName(QStringLiteral("actionAppSetupWizard"));
        actionAppSetupWizard->setIcon(icon24);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionAboutQt->setIcon(icon15);
        actionParameterEditorInfo = new QAction(MainWindow);
        actionParameterEditorInfo->setObjectName(QStringLiteral("actionParameterEditorInfo"));
        actionParameterEditorInfo->setIcon(icon17);
        actionSafetyInformation = new QAction(MainWindow);
        actionSafetyInformation->setObjectName(QStringLiteral("actionSafetyInformation"));
        actionSafetyInformation->setIcon(icon15);
        actionWarrantyStatement = new QAction(MainWindow);
        actionWarrantyStatement->setObjectName(QStringLiteral("actionWarrantyStatement"));
        actionWarrantyStatement->setIcon(icon15);
        actionVESCToolChangelog = new QAction(MainWindow);
        actionVESCToolChangelog->setObjectName(QStringLiteral("actionVESCToolChangelog"));
        actionVESCToolChangelog->setIcon(icon15);
        actionTerminalDRV8301ResetLatchedFaults = new QAction(MainWindow);
        actionTerminalDRV8301ResetLatchedFaults->setObjectName(QStringLiteral("actionTerminalDRV8301ResetLatchedFaults"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/res/icons/Bug-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminalDRV8301ResetLatchedFaults->setIcon(icon25);
        actionVESCProjectForums = new QAction(MainWindow);
        actionVESCProjectForums->setObjectName(QStringLiteral("actionVESCProjectForums"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/res/icons/User Group Man Man-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVESCProjectForums->setIcon(icon26);
        actionFirmwareChangelog = new QAction(MainWindow);
        actionFirmwareChangelog->setObjectName(QStringLiteral("actionFirmwareChangelog"));
        actionFirmwareChangelog->setIcon(icon15);
        actionLicense = new QAction(MainWindow);
        actionLicense->setObjectName(QStringLiteral("actionLicense"));
        actionLicense->setIcon(icon15);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, -1, -1, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pageLabel = new QLabel(centralWidget);
        pageLabel->setObjectName(QStringLiteral("pageLabel"));
        pageLabel->setEnabled(true);
        pageLabel->setMaximumSize(QSize(220, 56));
        pageLabel->setPixmap(QPixmap(QString::fromUtf8(":/res/logo.png")));
        pageLabel->setScaledContents(true);

        verticalLayout_2->addWidget(pageLabel);

        pageList = new QListWidget(centralWidget);
        pageList->setObjectName(QStringLiteral("pageList"));
        pageList->setMinimumSize(QSize(220, 0));
        pageList->setMaximumSize(QSize(220, 16777215));
        pageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pageList->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(pageList);


        horizontalLayout->addLayout(verticalLayout_2);

        pageWidget = new QStackedWidget(centralWidget);
        pageWidget->setObjectName(QStringLiteral("pageWidget"));

        horizontalLayout->addWidget(pageWidget);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        dispCurrent = new DisplayBar(centralWidget);
        dispCurrent->setObjectName(QStringLiteral("dispCurrent"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dispCurrent->sizePolicy().hasHeightForWidth());
        dispCurrent->setSizePolicy(sizePolicy);
        dispCurrent->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(dispCurrent, 1, 8, 1, 1);

        dispDuty = new DisplayBar(centralWidget);
        dispDuty->setObjectName(QStringLiteral("dispDuty"));
        sizePolicy.setHeightForWidth(dispDuty->sizePolicy().hasHeightForWidth());
        dispDuty->setSizePolicy(sizePolicy);
        dispDuty->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(dispDuty, 0, 8, 1, 1);

        fullBrakeButton = new QPushButton(centralWidget);
        fullBrakeButton->setObjectName(QStringLiteral("fullBrakeButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fullBrakeButton->sizePolicy().hasHeightForWidth());
        fullBrakeButton->setSizePolicy(sizePolicy1);
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/res/icons/Anchor-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        fullBrakeButton->setIcon(icon27);
        fullBrakeButton->setIconSize(QSize(40, 40));
        fullBrakeButton->setAutoDefault(false);
        fullBrakeButton->setFlat(false);

        gridLayout_3->addWidget(fullBrakeButton, 0, 6, 2, 1);

        handbrakeBox = new QDoubleSpinBox(centralWidget);
        handbrakeBox->setObjectName(QStringLiteral("handbrakeBox"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        handbrakeBox->setFont(font);
        handbrakeBox->setMinimum(-500);
        handbrakeBox->setMaximum(500);
        handbrakeBox->setSingleStep(0.5);
        handbrakeBox->setValue(3);

        gridLayout_3->addWidget(handbrakeBox, 1, 4, 1, 1);

        handbrakeButton = new QPushButton(centralWidget);
        handbrakeButton->setObjectName(QStringLiteral("handbrakeButton"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/res/icons/Brake Warning-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        handbrakeButton->setIcon(icon28);

        gridLayout_3->addWidget(handbrakeButton, 1, 5, 1, 1);

        currentBox = new QDoubleSpinBox(centralWidget);
        currentBox->setObjectName(QStringLiteral("currentBox"));
        currentBox->setFont(font);
        currentBox->setFrame(true);
        currentBox->setMinimum(-500);
        currentBox->setMaximum(500);
        currentBox->setSingleStep(0.5);
        currentBox->setValue(3);

        gridLayout_3->addWidget(currentBox, 1, 0, 1, 1);

        speedBox = new QDoubleSpinBox(centralWidget);
        speedBox->setObjectName(QStringLiteral("speedBox"));
        speedBox->setFont(font);
        speedBox->setDecimals(0);
        speedBox->setMinimum(-400000);
        speedBox->setMaximum(400000);
        speedBox->setSingleStep(100);
        speedBox->setValue(5000);

        gridLayout_3->addWidget(speedBox, 0, 2, 1, 1);

        dutyButton = new QPushButton(centralWidget);
        dutyButton->setObjectName(QStringLiteral("dutyButton"));
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/res/icons/Circled Play-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        dutyButton->setIcon(icon29);
        dutyButton->setFlat(false);

        gridLayout_3->addWidget(dutyButton, 0, 1, 1, 1);

        posBox = new QDoubleSpinBox(centralWidget);
        posBox->setObjectName(QStringLiteral("posBox"));
        posBox->setFont(font);
        posBox->setMaximum(360);
        posBox->setSingleStep(10);
        posBox->setValue(0);

        gridLayout_3->addWidget(posBox, 1, 2, 1, 1);

        posButton = new QPushButton(centralWidget);
        posButton->setObjectName(QStringLiteral("posButton"));
        posButton->setIcon(icon29);

        gridLayout_3->addWidget(posButton, 1, 3, 1, 1);

        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        sizePolicy1.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy1);
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/res/icons/Stop Sign-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon30);
        stopButton->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(stopButton, 0, 7, 2, 1);

        speedButton = new QPushButton(centralWidget);
        speedButton->setObjectName(QStringLiteral("speedButton"));
        speedButton->setIcon(icon29);

        gridLayout_3->addWidget(speedButton, 0, 3, 1, 1);

        currentButton = new QPushButton(centralWidget);
        currentButton->setObjectName(QStringLiteral("currentButton"));
        currentButton->setIcon(icon29);

        gridLayout_3->addWidget(currentButton, 1, 1, 1, 1);

        brakeCurrentBox = new QDoubleSpinBox(centralWidget);
        brakeCurrentBox->setObjectName(QStringLiteral("brakeCurrentBox"));
        brakeCurrentBox->setFont(font);
        brakeCurrentBox->setMinimum(-500);
        brakeCurrentBox->setMaximum(500);
        brakeCurrentBox->setSingleStep(0.5);
        brakeCurrentBox->setValue(3);

        gridLayout_3->addWidget(brakeCurrentBox, 0, 4, 1, 1);

        brakeCurrentButton = new QPushButton(centralWidget);
        brakeCurrentButton->setObjectName(QStringLiteral("brakeCurrentButton"));
        brakeCurrentButton->setIcon(icon28);

        gridLayout_3->addWidget(brakeCurrentButton, 0, 5, 1, 1);

        dutyBox = new QDoubleSpinBox(centralWidget);
        dutyBox->setObjectName(QStringLiteral("dutyBox"));
        dutyBox->setFont(font);
        dutyBox->setWrapping(false);
        dutyBox->setFrame(true);
        dutyBox->setMinimum(-1);
        dutyBox->setMaximum(1);
        dutyBox->setSingleStep(0.01);
        dutyBox->setValue(0.2);

        gridLayout_3->addWidget(dutyBox, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        verticalLayout->setStretch(0, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1054, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuTerminal = new QMenu(menuBar);
        menuTerminal->setObjectName(QStringLiteral("menuTerminal"));
        menuCommands = new QMenu(menuBar);
        menuCommands->setObjectName(QStringLiteral("menuCommands"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::RightToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuCommands->menuAction());
        menuBar->addAction(menuTerminal->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSaveMotorConfXml);
        menuFile->addAction(actionLoadMotorConfXml);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveAppconfXml);
        menuFile->addAction(actionLoadAppconfXml);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveMotorConfigurationHeader);
        menuFile->addAction(actionSaveMotorConfigurationHeaderWrap);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveAppConfigurationHeader);
        menuFile->addAction(actionSaveAppConfigurationHeaderWrap);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionMotorSetupWizard);
        menuHelp->addAction(actionAppSetupWizard);
        menuHelp->addSeparator();
        menuHelp->addAction(actionVESCProjectForums);
        menuHelp->addSeparator();
        menuHelp->addAction(actionVESCToolChangelog);
        menuHelp->addAction(actionFirmwareChangelog);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionLibrariesUsed);
        menuHelp->addAction(actionAboutQt);
        menuHelp->addSeparator();
        menuHelp->addAction(actionSafetyInformation);
        menuHelp->addAction(actionWarrantyStatement);
        menuHelp->addAction(actionLicense);
        menuTools->addAction(actionParameterEditorMcconf);
        menuTools->addAction(actionParameterEditorAppconf);
        menuTools->addAction(actionParameterEditorInfo);
        menuTerminal->addAction(actionTerminalShowHelp);
        menuTerminal->addAction(actionTerminalPrintFaults);
        menuTerminal->addAction(actionTerminalPrintThreads);
        menuTerminal->addSeparator();
        menuTerminal->addAction(actionTerminalDRV8301ResetLatchedFaults);
        menuTerminal->addSeparator();
        menuTerminal->addAction(actionTerminalClear);
        menuCommands->addAction(actionReboot);
        mainToolBar->addAction(actionReconnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionReadMcconf);
        mainToolBar->addAction(actionReadMcconfDefault);
        mainToolBar->addAction(actionWriteMcconf);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionReadAppconf);
        mainToolBar->addAction(actionReadAppconfDefault);
        mainToolBar->addAction(actionWriteAppconf);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionKeyboardControl);
        mainToolBar->addAction(actionRtData);
        mainToolBar->addAction(actionRtDataApp);
        mainToolBar->addAction(actionSendAlive);
        mainToolBar->addAction(actionCanFwd);

        retranslateUi(MainWindow);

        pageWidget->setCurrentIndex(-1);
        fullBrakeButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "VESC Tool", Q_NULLPTR));
        actionReadMcconf->setText(QApplication::translate("MainWindow", "readMcconf", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReadMcconf->setToolTip(QApplication::translate("MainWindow", "Read motor Configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionReadMcconfDefault->setText(QApplication::translate("MainWindow", "readMcconfDefault", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReadMcconfDefault->setToolTip(QApplication::translate("MainWindow", "Read default motor configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionWriteMcconf->setText(QApplication::translate("MainWindow", "writeMcconf", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionWriteMcconf->setToolTip(QApplication::translate("MainWindow", "Write motor configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSaveMotorConfXml->setText(QApplication::translate("MainWindow", "Save Motor Configuration XML as...", Q_NULLPTR));
        actionLoadMotorConfXml->setText(QApplication::translate("MainWindow", "Load Motor Configuration XML", Q_NULLPTR));
        actionDisconnect->setText(QApplication::translate("MainWindow", "disconnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionReboot->setText(QApplication::translate("MainWindow", "Reboot", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReboot->setToolTip(QApplication::translate("MainWindow", "Reboot", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCanFwd->setText(QApplication::translate("MainWindow", "canFwd", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCanFwd->setToolTip(QApplication::translate("MainWindow", "Forward communication over CAN-bus", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionReconnect->setText(QApplication::translate("MainWindow", "reconnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReconnect->setToolTip(QApplication::translate("MainWindow", "Reconnect last connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRtData->setText(QApplication::translate("MainWindow", "rtData", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRtData->setToolTip(QApplication::translate("MainWindow", "Stream realtime data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionReadAppconf->setText(QApplication::translate("MainWindow", "readAppconf", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReadAppconf->setToolTip(QApplication::translate("MainWindow", "Read app configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionReadAppconfDefault->setText(QApplication::translate("MainWindow", "readAppconfDefault", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReadAppconfDefault->setToolTip(QApplication::translate("MainWindow", "Read default app configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionWriteAppconf->setText(QApplication::translate("MainWindow", "writeAppconf", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionWriteAppconf->setToolTip(QApplication::translate("MainWindow", "Write app configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSaveAppconfXml->setText(QApplication::translate("MainWindow", "Save App Configuration XML as...", Q_NULLPTR));
        actionLoadAppconfXml->setText(QApplication::translate("MainWindow", "Load App Configuration XML", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About VESC Tool", Q_NULLPTR));
        actionKeyboardControl->setText(QApplication::translate("MainWindow", "keyboardControl", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionKeyboardControl->setToolTip(QApplication::translate("MainWindow", "Use arrow keys to control motor", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionParameterEditorMcconf->setText(QApplication::translate("MainWindow", "Parameter Editor Mcconf", Q_NULLPTR));
        actionParameterEditorAppconf->setText(QApplication::translate("MainWindow", "Parameter Editor Appconf", Q_NULLPTR));
        actionSaveAppConfigurationHeader->setText(QApplication::translate("MainWindow", "Save App Configuration C Header as...", Q_NULLPTR));
        actionSaveMotorConfigurationHeader->setText(QApplication::translate("MainWindow", "Save Motor Configuration C Header as...", Q_NULLPTR));
        actionSaveAppConfigurationHeaderWrap->setText(QApplication::translate("MainWindow", "Save App Configuration C Header (ifdef wrapped) as...", Q_NULLPTR));
        actionSaveMotorConfigurationHeaderWrap->setText(QApplication::translate("MainWindow", "Save Motor Configuration C Header (ifdef wrapped) as...", Q_NULLPTR));
        actionRtDataApp->setText(QApplication::translate("MainWindow", "rtDataApp", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRtDataApp->setToolTip(QApplication::translate("MainWindow", "Stream realtime app data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTerminalPrintFaults->setText(QApplication::translate("MainWindow", "Print Faults", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTerminalPrintFaults->setToolTip(QApplication::translate("MainWindow", "Print Faults", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTerminalShowHelp->setText(QApplication::translate("MainWindow", "Show Help", Q_NULLPTR));
        actionTerminalClear->setText(QApplication::translate("MainWindow", "Clear Terminal", Q_NULLPTR));
        actionTerminalPrintThreads->setText(QApplication::translate("MainWindow", "Print Threads", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTerminalPrintThreads->setToolTip(QApplication::translate("MainWindow", "Print Threads", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSendAlive->setText(QApplication::translate("MainWindow", "Send Alive Commands", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSendAlive->setToolTip(QApplication::translate("MainWindow", "Send alive packets periodically to prevent timeout", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLibrariesUsed->setText(QApplication::translate("MainWindow", "About Libraries Used", Q_NULLPTR));
        actionMotorSetupWizard->setText(QApplication::translate("MainWindow", "Motor Setup Wizard [MOTOR]", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMotorSetupWizard->setToolTip(QApplication::translate("MainWindow", "Start the Motor Setup Wizard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAppSetupWizard->setText(QApplication::translate("MainWindow", "Input Setup Wizard [APP]", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAppSetupWizard->setToolTip(QApplication::translate("MainWindow", "Start the App Setup Wizard", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAboutQt->setToolTip(QApplication::translate("MainWindow", "Show the Qt library's About box", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionParameterEditorInfo->setText(QApplication::translate("MainWindow", "Parameter Editor Info", Q_NULLPTR));
        actionSafetyInformation->setText(QApplication::translate("MainWindow", "Safety Information", Q_NULLPTR));
        actionWarrantyStatement->setText(QApplication::translate("MainWindow", "Limited Warranty Statement", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionWarrantyStatement->setToolTip(QApplication::translate("MainWindow", "Limited Warranty Statement", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionVESCToolChangelog->setText(QApplication::translate("MainWindow", "VESC Tool Changelog", Q_NULLPTR));
        actionTerminalDRV8301ResetLatchedFaults->setText(QApplication::translate("MainWindow", "DRV8301 Reset Latched Faults", Q_NULLPTR));
        actionVESCProjectForums->setText(QApplication::translate("MainWindow", "VESC Project Forums", Q_NULLPTR));
        actionFirmwareChangelog->setText(QApplication::translate("MainWindow", "Firmware Changelog", Q_NULLPTR));
        actionLicense->setText(QApplication::translate("MainWindow", "License", Q_NULLPTR));
        pageLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        fullBrakeButton->setToolTip(QApplication::translate("MainWindow", "Full brake", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fullBrakeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        handbrakeBox->setToolTip(QApplication::translate("MainWindow", "Handbrake current", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        handbrakeBox->setPrefix(QApplication::translate("MainWindow", "HB ", Q_NULLPTR));
        handbrakeBox->setSuffix(QApplication::translate("MainWindow", " A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        handbrakeButton->setToolTip(QApplication::translate("MainWindow", "Handbrake current", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        handbrakeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        currentBox->setToolTip(QApplication::translate("MainWindow", "Current", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        currentBox->setPrefix(QApplication::translate("MainWindow", "I ", Q_NULLPTR));
        currentBox->setSuffix(QApplication::translate("MainWindow", " A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        speedBox->setToolTip(QApplication::translate("MainWindow", "Speed", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        speedBox->setPrefix(QApplication::translate("MainWindow", "\317\211 ", Q_NULLPTR));
        speedBox->setSuffix(QApplication::translate("MainWindow", " RPM", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        dutyButton->setToolTip(QApplication::translate("MainWindow", "Duty cycle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        dutyButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        posBox->setToolTip(QApplication::translate("MainWindow", "Position", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        posBox->setPrefix(QApplication::translate("MainWindow", "P ", Q_NULLPTR));
        posBox->setSuffix(QApplication::translate("MainWindow", " \302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        posButton->setToolTip(QApplication::translate("MainWindow", "Position", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        posButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("MainWindow", "Switch off", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        stopButton->setShortcut(QApplication::translate("MainWindow", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        speedButton->setToolTip(QApplication::translate("MainWindow", "Speed", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        speedButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        currentButton->setToolTip(QApplication::translate("MainWindow", "Current", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        currentButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        brakeCurrentBox->setToolTip(QApplication::translate("MainWindow", "Brake current", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        brakeCurrentBox->setPrefix(QApplication::translate("MainWindow", "IB ", Q_NULLPTR));
        brakeCurrentBox->setSuffix(QApplication::translate("MainWindow", " A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        brakeCurrentButton->setToolTip(QApplication::translate("MainWindow", "Brake current", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        brakeCurrentButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        dutyBox->setToolTip(QApplication::translate("MainWindow", "Duty cycle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        dutyBox->setPrefix(QApplication::translate("MainWindow", "D ", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Developer", Q_NULLPTR));
        menuTerminal->setTitle(QApplication::translate("MainWindow", "Terminal", Q_NULLPTR));
        menuCommands->setTitle(QApplication::translate("MainWindow", "Commands", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
