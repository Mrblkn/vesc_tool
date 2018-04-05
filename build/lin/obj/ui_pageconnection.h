/********************************************************************************
** Form generated from reading UI file 'pageconnection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGECONNECTION_H
#define UI_PAGECONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageConnection
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *serialPortBox;
    QSpinBox *serialBaudBox;
    QPushButton *serialRefreshButton;
    QPushButton *serialDisconnectButton;
    QPushButton *serialConnectButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *tcpServerEdit;
    QSpinBox *tcpPortBox;
    QPushButton *tcpDisconnectButton;
    QPushButton *tcpConnectButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *bleDevBox;
    QPushButton *bleScanButton;
    QPushButton *bleDisconnectButton;
    QPushButton *bleConnectButton;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *canFwdBox;
    QPushButton *helpButton;
    QPushButton *canFwdButton;
    QPushButton *autoConnectButton;
    QLabel *statusLabel;

    void setupUi(QWidget *PageConnection)
    {
        if (PageConnection->objectName().isEmpty())
            PageConnection->setObjectName(QStringLiteral("PageConnection"));
        PageConnection->resize(657, 445);
        verticalLayout = new QVBoxLayout(PageConnection);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(PageConnection);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        serialPortBox = new QComboBox(tab);
        serialPortBox->setObjectName(QStringLiteral("serialPortBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serialPortBox->sizePolicy().hasHeightForWidth());
        serialPortBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(serialPortBox);

        serialBaudBox = new QSpinBox(tab);
        serialBaudBox->setObjectName(QStringLiteral("serialBaudBox"));
        serialBaudBox->setMaximum(3000000);
        serialBaudBox->setValue(115200);

        horizontalLayout->addWidget(serialBaudBox);

        serialRefreshButton = new QPushButton(tab);
        serialRefreshButton->setObjectName(QStringLiteral("serialRefreshButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(serialRefreshButton->sizePolicy().hasHeightForWidth());
        serialRefreshButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Refresh-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        serialRefreshButton->setIcon(icon);

        horizontalLayout->addWidget(serialRefreshButton);

        serialDisconnectButton = new QPushButton(tab);
        serialDisconnectButton->setObjectName(QStringLiteral("serialDisconnectButton"));
        sizePolicy1.setHeightForWidth(serialDisconnectButton->sizePolicy().hasHeightForWidth());
        serialDisconnectButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/Disconnected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        serialDisconnectButton->setIcon(icon1);

        horizontalLayout->addWidget(serialDisconnectButton);

        serialConnectButton = new QPushButton(tab);
        serialConnectButton->setObjectName(QStringLiteral("serialConnectButton"));
        sizePolicy1.setHeightForWidth(serialConnectButton->sizePolicy().hasHeightForWidth());
        serialConnectButton->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/Connected-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        serialConnectButton->setIcon(icon2);

        horizontalLayout->addWidget(serialConnectButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 322, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        tcpServerEdit = new QLineEdit(tab_2);
        tcpServerEdit->setObjectName(QStringLiteral("tcpServerEdit"));

        horizontalLayout_3->addWidget(tcpServerEdit);

        tcpPortBox = new QSpinBox(tab_2);
        tcpPortBox->setObjectName(QStringLiteral("tcpPortBox"));
        tcpPortBox->setMaximum(65535);
        tcpPortBox->setValue(65102);

        horizontalLayout_3->addWidget(tcpPortBox);

        tcpDisconnectButton = new QPushButton(tab_2);
        tcpDisconnectButton->setObjectName(QStringLiteral("tcpDisconnectButton"));
        sizePolicy1.setHeightForWidth(tcpDisconnectButton->sizePolicy().hasHeightForWidth());
        tcpDisconnectButton->setSizePolicy(sizePolicy1);
        tcpDisconnectButton->setIcon(icon1);

        horizontalLayout_3->addWidget(tcpDisconnectButton);

        tcpConnectButton = new QPushButton(tab_2);
        tcpConnectButton->setObjectName(QStringLiteral("tcpConnectButton"));
        sizePolicy1.setHeightForWidth(tcpConnectButton->sizePolicy().hasHeightForWidth());
        tcpConnectButton->setSizePolicy(sizePolicy1);
        tcpConnectButton->setIcon(icon2);

        horizontalLayout_3->addWidget(tcpConnectButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 273, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        bleDevBox = new QComboBox(tab_3);
        bleDevBox->setObjectName(QStringLiteral("bleDevBox"));
        sizePolicy.setHeightForWidth(bleDevBox->sizePolicy().hasHeightForWidth());
        bleDevBox->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(bleDevBox);

        bleScanButton = new QPushButton(tab_3);
        bleScanButton->setObjectName(QStringLiteral("bleScanButton"));
        sizePolicy1.setHeightForWidth(bleScanButton->sizePolicy().hasHeightForWidth());
        bleScanButton->setSizePolicy(sizePolicy1);
        bleScanButton->setIcon(icon);

        horizontalLayout_4->addWidget(bleScanButton);

        bleDisconnectButton = new QPushButton(tab_3);
        bleDisconnectButton->setObjectName(QStringLiteral("bleDisconnectButton"));
        sizePolicy1.setHeightForWidth(bleDisconnectButton->sizePolicy().hasHeightForWidth());
        bleDisconnectButton->setSizePolicy(sizePolicy1);
        bleDisconnectButton->setIcon(icon1);

        horizontalLayout_4->addWidget(bleDisconnectButton);

        bleConnectButton = new QPushButton(tab_3);
        bleConnectButton->setObjectName(QStringLiteral("bleConnectButton"));
        sizePolicy1.setHeightForWidth(bleConnectButton->sizePolicy().hasHeightForWidth());
        bleConnectButton->setSizePolicy(sizePolicy1);
        bleConnectButton->setIcon(icon2);

        horizontalLayout_4->addWidget(bleConnectButton);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 186, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        groupBox = new QGroupBox(PageConnection);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        canFwdBox = new QSpinBox(groupBox);
        canFwdBox->setObjectName(QStringLiteral("canFwdBox"));
        canFwdBox->setMaximum(255);

        horizontalLayout_2->addWidget(canFwdBox);

        helpButton = new QPushButton(groupBox);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        sizePolicy1.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon3);

        horizontalLayout_2->addWidget(helpButton);

        canFwdButton = new QPushButton(groupBox);
        canFwdButton->setObjectName(QStringLiteral("canFwdButton"));
        sizePolicy1.setHeightForWidth(canFwdButton->sizePolicy().hasHeightForWidth());
        canFwdButton->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icons/can_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QStringLiteral(":/res/icons/can_on.png"), QSize(), QIcon::Normal, QIcon::On);
        canFwdButton->setIcon(icon4);
        canFwdButton->setCheckable(true);

        horizontalLayout_2->addWidget(canFwdButton);


        verticalLayout->addWidget(groupBox);

        autoConnectButton = new QPushButton(PageConnection);
        autoConnectButton->setObjectName(QStringLiteral("autoConnectButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icons/Wizard-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoConnectButton->setIcon(icon5);
        autoConnectButton->setIconSize(QSize(45, 45));

        verticalLayout->addWidget(autoConnectButton);

        statusLabel = new QLabel(PageConnection);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusLabel);


        retranslateUi(PageConnection);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PageConnection);
    } // setupUi

    void retranslateUi(QWidget *PageConnection)
    {
        PageConnection->setWindowTitle(QApplication::translate("PageConnection", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("PageConnection", "Port", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        serialPortBox->setToolTip(QApplication::translate("PageConnection", "Serial port", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        serialBaudBox->setToolTip(QApplication::translate("PageConnection", "Baudrate", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        serialBaudBox->setSuffix(QApplication::translate("PageConnection", " bps", Q_NULLPTR));
        serialBaudBox->setPrefix(QApplication::translate("PageConnection", "Baud: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        serialRefreshButton->setToolTip(QApplication::translate("PageConnection", "Refresh serial port list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        serialRefreshButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        serialDisconnectButton->setToolTip(QApplication::translate("PageConnection", "Disconnect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        serialDisconnectButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        serialConnectButton->setToolTip(QApplication::translate("PageConnection", "Connect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        serialConnectButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageConnection", "(USB-)Serial", Q_NULLPTR));
        label->setText(QApplication::translate("PageConnection", "TCP Server", Q_NULLPTR));
        tcpServerEdit->setText(QApplication::translate("PageConnection", "127.0.0.1", Q_NULLPTR));
        tcpPortBox->setPrefix(QApplication::translate("PageConnection", "Port: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tcpDisconnectButton->setToolTip(QApplication::translate("PageConnection", "Disconnect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tcpDisconnectButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        tcpConnectButton->setToolTip(QApplication::translate("PageConnection", "Connect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tcpConnectButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageConnection", "TCP", Q_NULLPTR));
        label_3->setText(QApplication::translate("PageConnection", "BLE Device", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        bleScanButton->setToolTip(QApplication::translate("PageConnection", "Refresh serial port list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        bleScanButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        bleDisconnectButton->setToolTip(QApplication::translate("PageConnection", "Disconnect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        bleDisconnectButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        bleConnectButton->setToolTip(QApplication::translate("PageConnection", "Connect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        bleConnectButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PageConnection", "Bluetooth LE", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PageConnection", "CAN Forward", Q_NULLPTR));
        canFwdBox->setPrefix(QApplication::translate("PageConnection", "ID: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("PageConnection", "Show help", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        canFwdButton->setToolTip(QApplication::translate("PageConnection", "Forward communication over CAN-bus", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        canFwdButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        autoConnectButton->setToolTip(QApplication::translate("PageConnection", "Try to automatically connect using the USB connection", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        autoConnectButton->setText(QApplication::translate("PageConnection", "Autoconnect", Q_NULLPTR));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageConnection: public Ui_PageConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGECONNECTION_H
