/********************************************************************************
** Form generated from reading UI file 'addoperatorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDOPERATORWINDOW_H
#define UI_ADDOPERATORWINDOW_H

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

class Ui_AddOperatorWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *NamelineEdit;
    QLineEdit *NumberlineEdit;
    QLineEdit *MaillineEdit;
    QLineEdit *LoginlineEdit;
    QLineEdit *PasslineEdit;
    QLineEdit *RPasslineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AddOperatorWindow)
    {
        if (AddOperatorWindow->objectName().isEmpty())
            AddOperatorWindow->setObjectName("AddOperatorWindow");
        AddOperatorWindow->resize(400, 300);
        gridLayout = new QGridLayout(AddOperatorWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(83, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddOperatorWindow);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        NamelineEdit = new QLineEdit(AddOperatorWindow);
        NamelineEdit->setObjectName("NamelineEdit");

        verticalLayout->addWidget(NamelineEdit);

        NumberlineEdit = new QLineEdit(AddOperatorWindow);
        NumberlineEdit->setObjectName("NumberlineEdit");

        verticalLayout->addWidget(NumberlineEdit);

        MaillineEdit = new QLineEdit(AddOperatorWindow);
        MaillineEdit->setObjectName("MaillineEdit");

        verticalLayout->addWidget(MaillineEdit);

        LoginlineEdit = new QLineEdit(AddOperatorWindow);
        LoginlineEdit->setObjectName("LoginlineEdit");

        verticalLayout->addWidget(LoginlineEdit);

        PasslineEdit = new QLineEdit(AddOperatorWindow);
        PasslineEdit->setObjectName("PasslineEdit");

        verticalLayout->addWidget(PasslineEdit);

        RPasslineEdit = new QLineEdit(AddOperatorWindow);
        RPasslineEdit->setObjectName("RPasslineEdit");

        verticalLayout->addWidget(RPasslineEdit);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(82, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_2 = new QPushButton(AddOperatorWindow);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(AddOperatorWindow);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);


        retranslateUi(AddOperatorWindow);

        QMetaObject::connectSlotsByName(AddOperatorWindow);
    } // setupUi

    void retranslateUi(QDialog *AddOperatorWindow)
    {
        AddOperatorWindow->setWindowTitle(QCoreApplication::translate("AddOperatorWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddOperatorWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\321\203\321\200 \320\276\320\277\320\265\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        NamelineEdit->setPlaceholderText(QCoreApplication::translate("AddOperatorWindow", "\320\244\320\230\320\236", nullptr));
        NumberlineEdit->setPlaceholderText(QCoreApplication::translate("AddOperatorWindow", "+7", nullptr));
        MaillineEdit->setPlaceholderText(QCoreApplication::translate("AddOperatorWindow", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\260\321\217 \320\277\320\276\321\207\321\202\320\260", nullptr));
        LoginlineEdit->setPlaceholderText(QCoreApplication::translate("AddOperatorWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        PasslineEdit->setPlaceholderText(QCoreApplication::translate("AddOperatorWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        RPasslineEdit->setPlaceholderText(QCoreApplication::translate("AddOperatorWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddOperatorWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("AddOperatorWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddOperatorWindow: public Ui_AddOperatorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDOPERATORWINDOW_H
