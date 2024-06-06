/********************************************************************************
** Form generated from reading UI file 'addadminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDADMINWINDOW_H
#define UI_ADDADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddAdminWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLineEdit *NamelineEdit;
    QLineEdit *NumberlineEdit;
    QLineEdit *MaillineEdit;
    QLineEdit *LoginlineEdit;
    QLineEdit *PasswordlineEdit;
    QLineEdit *RPasswordlineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddAdminpushButton;
    QPushButton *CancelpushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AddAdminWindow)
    {
        if (AddAdminWindow->objectName().isEmpty())
            AddAdminWindow->setObjectName("AddAdminWindow");
        AddAdminWindow->resize(429, 396);
        gridLayout = new QGridLayout(AddAdminWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        label = new QLabel(AddAdminWindow);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(97, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        NamelineEdit = new QLineEdit(AddAdminWindow);
        NamelineEdit->setObjectName("NamelineEdit");

        verticalLayout->addWidget(NamelineEdit);

        NumberlineEdit = new QLineEdit(AddAdminWindow);
        NumberlineEdit->setObjectName("NumberlineEdit");

        verticalLayout->addWidget(NumberlineEdit);

        MaillineEdit = new QLineEdit(AddAdminWindow);
        MaillineEdit->setObjectName("MaillineEdit");

        verticalLayout->addWidget(MaillineEdit);

        LoginlineEdit = new QLineEdit(AddAdminWindow);
        LoginlineEdit->setObjectName("LoginlineEdit");

        verticalLayout->addWidget(LoginlineEdit);

        PasswordlineEdit = new QLineEdit(AddAdminWindow);
        PasswordlineEdit->setObjectName("PasswordlineEdit");

        verticalLayout->addWidget(PasswordlineEdit);

        RPasswordlineEdit = new QLineEdit(AddAdminWindow);
        RPasswordlineEdit->setObjectName("RPasswordlineEdit");

        verticalLayout->addWidget(RPasswordlineEdit);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(97, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        AddAdminpushButton = new QPushButton(AddAdminWindow);
        AddAdminpushButton->setObjectName("AddAdminpushButton");

        horizontalLayout->addWidget(AddAdminpushButton);

        CancelpushButton = new QPushButton(AddAdminWindow);
        CancelpushButton->setObjectName("CancelpushButton");

        horizontalLayout->addWidget(CancelpushButton);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);


        retranslateUi(AddAdminWindow);

        QMetaObject::connectSlotsByName(AddAdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AddAdminWindow)
    {
        AddAdminWindow->setWindowTitle(QCoreApplication::translate("AddAdminWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddAdminWindow", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        NamelineEdit->setPlaceholderText(QCoreApplication::translate("AddAdminWindow", "\320\244\320\230\320\236", nullptr));
        NumberlineEdit->setPlaceholderText(QCoreApplication::translate("AddAdminWindow", "+7", nullptr));
        MaillineEdit->setPlaceholderText(QCoreApplication::translate("AddAdminWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\260\321\217 \320\277\320\276\321\207\321\202\320\260", nullptr));
        LoginlineEdit->setPlaceholderText(QCoreApplication::translate("AddAdminWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        PasswordlineEdit->setPlaceholderText(QCoreApplication::translate("AddAdminWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        RPasswordlineEdit->setPlaceholderText(QCoreApplication::translate("AddAdminWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        AddAdminpushButton->setText(QCoreApplication::translate("AddAdminWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        CancelpushButton->setText(QCoreApplication::translate("AddAdminWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAdminWindow: public Ui_AddAdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDADMINWINDOW_H
