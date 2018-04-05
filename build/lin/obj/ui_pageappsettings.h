/********************************************************************************
** Form generated from reading UI file 'pageappsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEAPPSETTINGS_H
#define UI_PAGEAPPSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/vtextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_PageAppSettings
{
public:
    QVBoxLayout *verticalLayout;
    VTextBrowser *textEdit;
    QPushButton *appWizardButton;

    void setupUi(QWidget *PageAppSettings)
    {
        if (PageAppSettings->objectName().isEmpty())
            PageAppSettings->setObjectName(QStringLiteral("PageAppSettings"));
        PageAppSettings->resize(400, 300);
        verticalLayout = new QVBoxLayout(PageAppSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new VTextBrowser(PageAppSettings);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        appWizardButton = new QPushButton(PageAppSettings);
        appWizardButton->setObjectName(QStringLiteral("appWizardButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Wizard-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        appWizardButton->setIcon(icon);

        verticalLayout->addWidget(appWizardButton);


        retranslateUi(PageAppSettings);

        QMetaObject::connectSlotsByName(PageAppSettings);
    } // setupUi

    void retranslateUi(QWidget *PageAppSettings)
    {
        PageAppSettings->setWindowTitle(QApplication::translate("PageAppSettings", "Form", Q_NULLPTR));
        appWizardButton->setText(QApplication::translate("PageAppSettings", "Input Setup Wizard", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PageAppSettings: public Ui_PageAppSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEAPPSETTINGS_H
