/********************************************************************************
** Form generated from reading UI file 'parameditstring.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMEDITSTRING_H
#define UI_PARAMEDITSTRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamEditString
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *valueEdit;
    QPushButton *helpButton;

    void setupUi(QWidget *ParamEditString)
    {
        if (ParamEditString->objectName().isEmpty())
            ParamEditString->setObjectName(QStringLiteral("ParamEditString"));
        ParamEditString->resize(258, 32);
        horizontalLayout = new QHBoxLayout(ParamEditString);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        valueEdit = new QLineEdit(ParamEditString);
        valueEdit->setObjectName(QStringLiteral("valueEdit"));

        horizontalLayout->addWidget(valueEdit);

        helpButton = new QPushButton(ParamEditString);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/Help-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon);

        horizontalLayout->addWidget(helpButton);


        retranslateUi(ParamEditString);

        QMetaObject::connectSlotsByName(ParamEditString);
    } // setupUi

    void retranslateUi(QWidget *ParamEditString)
    {
        ParamEditString->setWindowTitle(QApplication::translate("ParamEditString", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("ParamEditString", "Show help", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ParamEditString: public Ui_ParamEditString {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMEDITSTRING_H