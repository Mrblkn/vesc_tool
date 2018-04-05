/********************************************************************************
** Form generated from reading UI file 'pagedataanalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEDATAANALYSIS_H
#define UI_PAGEDATAANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/vtextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_PageDataAnalysis
{
public:
    QVBoxLayout *verticalLayout;
    VTextBrowser *textEdit;

    void setupUi(QWidget *PageDataAnalysis)
    {
        if (PageDataAnalysis->objectName().isEmpty())
            PageDataAnalysis->setObjectName(QStringLiteral("PageDataAnalysis"));
        PageDataAnalysis->resize(400, 300);
        verticalLayout = new QVBoxLayout(PageDataAnalysis);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new VTextBrowser(PageDataAnalysis);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(PageDataAnalysis);

        QMetaObject::connectSlotsByName(PageDataAnalysis);
    } // setupUi

    void retranslateUi(QWidget *PageDataAnalysis)
    {
        PageDataAnalysis->setWindowTitle(QApplication::translate("PageDataAnalysis", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PageDataAnalysis: public Ui_PageDataAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEDATAANALYSIS_H
