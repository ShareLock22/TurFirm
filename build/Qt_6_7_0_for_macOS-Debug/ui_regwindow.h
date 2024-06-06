/********************************************************************************
** Form generated from reading UI file 'regwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWINDOW_H
#define UI_REGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *NamelineEdit;
    QLineEdit *NumberlineEdit;
    QLineEdit *MaillineEdit;
    QLineEdit *AdresslineEdit;
    QLineEdit *LoginlineEdit;
    QLineEdit *PasswordlineEdit;
    QLineEdit *RepeatPasswordlineEdit;
    QPushButton *regClicked;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *RegWindow)
    {
        if (RegWindow->objectName().isEmpty())
            RegWindow->setObjectName("RegWindow");
        RegWindow->resize(314, 362);
        gridLayout = new QGridLayout(RegWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 34, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(51, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        NamelineEdit = new QLineEdit(RegWindow);
        NamelineEdit->setObjectName("NamelineEdit");

        verticalLayout->addWidget(NamelineEdit);

        NumberlineEdit = new QLineEdit(RegWindow);
        NumberlineEdit->setObjectName("NumberlineEdit");

        verticalLayout->addWidget(NumberlineEdit);

        MaillineEdit = new QLineEdit(RegWindow);
        MaillineEdit->setObjectName("MaillineEdit");

        verticalLayout->addWidget(MaillineEdit);

        AdresslineEdit = new QLineEdit(RegWindow);
        AdresslineEdit->setObjectName("AdresslineEdit");

        verticalLayout->addWidget(AdresslineEdit);

        LoginlineEdit = new QLineEdit(RegWindow);
        LoginlineEdit->setObjectName("LoginlineEdit");

        verticalLayout->addWidget(LoginlineEdit);

        PasswordlineEdit = new QLineEdit(RegWindow);
        PasswordlineEdit->setObjectName("PasswordlineEdit");

        verticalLayout->addWidget(PasswordlineEdit);

        RepeatPasswordlineEdit = new QLineEdit(RegWindow);
        RepeatPasswordlineEdit->setObjectName("RepeatPasswordlineEdit");

        verticalLayout->addWidget(RepeatPasswordlineEdit);

        regClicked = new QPushButton(RegWindow);
        regClicked->setObjectName("regClicked");

        verticalLayout->addWidget(regClicked);

        pushButton = new QPushButton(RegWindow);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(51, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 34, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(RegWindow);

        QMetaObject::connectSlotsByName(RegWindow);
    } // setupUi

    void retranslateUi(QDialog *RegWindow)
    {
        RegWindow->setWindowTitle(QCoreApplication::translate("RegWindow", "Dialog", nullptr));
        NamelineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\244\320\230\320\236", nullptr));
        NumberlineEdit->setInputMask(QString());
        NumberlineEdit->setText(QString());
        NumberlineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "+7", nullptr));
        MaillineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "E-mail", nullptr));
        AdresslineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        LoginlineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        PasswordlineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        RepeatPasswordlineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        regClicked->setText(QCoreApplication::translate("RegWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("RegWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegWindow: public Ui_RegWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWINDOW_H
