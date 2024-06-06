/********************************************************************************
** Form generated from reading UI file 'changepasswordwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDWINDOW_H
#define UI_CHANGEPASSWORDWINDOW_H

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

class Ui_ChangePasswordWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *OldPasswordlabel;
    QLineEdit *PasswordlineEdit;
    QLineEdit *RePasswordlineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *ChangepushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *CancelpushButton;

    void setupUi(QDialog *ChangePasswordWindow)
    {
        if (ChangePasswordWindow->objectName().isEmpty())
            ChangePasswordWindow->setObjectName("ChangePasswordWindow");
        ChangePasswordWindow->resize(400, 300);
        gridLayout = new QGridLayout(ChangePasswordWindow);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        OldPasswordlabel = new QLabel(ChangePasswordWindow);
        OldPasswordlabel->setObjectName("OldPasswordlabel");

        verticalLayout->addWidget(OldPasswordlabel);

        PasswordlineEdit = new QLineEdit(ChangePasswordWindow);
        PasswordlineEdit->setObjectName("PasswordlineEdit");

        verticalLayout->addWidget(PasswordlineEdit);

        RePasswordlineEdit = new QLineEdit(ChangePasswordWindow);
        RePasswordlineEdit->setObjectName("RePasswordlineEdit");

        verticalLayout->addWidget(RePasswordlineEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ChangepushButton = new QPushButton(ChangePasswordWindow);
        ChangepushButton->setObjectName("ChangepushButton");

        horizontalLayout->addWidget(ChangepushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        CancelpushButton = new QPushButton(ChangePasswordWindow);
        CancelpushButton->setObjectName("CancelpushButton");

        horizontalLayout->addWidget(CancelpushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(ChangePasswordWindow);

        QMetaObject::connectSlotsByName(ChangePasswordWindow);
    } // setupUi

    void retranslateUi(QDialog *ChangePasswordWindow)
    {
        ChangePasswordWindow->setWindowTitle(QCoreApplication::translate("ChangePasswordWindow", "Dialog", nullptr));
        OldPasswordlabel->setText(QCoreApplication::translate("ChangePasswordWindow", "TextLabel", nullptr));
        ChangepushButton->setText(QCoreApplication::translate("ChangePasswordWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        CancelpushButton->setText(QCoreApplication::translate("ChangePasswordWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordWindow: public Ui_ChangePasswordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDWINDOW_H
