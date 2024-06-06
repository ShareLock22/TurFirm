/********************************************************************************
** Form generated from reading UI file 'usermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINWINDOW_H
#define UI_USERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_UserMainWindow
{
public:

    void setupUi(QDialog *UserMainWindow)
    {
        if (UserMainWindow->objectName().isEmpty())
            UserMainWindow->setObjectName("UserMainWindow");
        UserMainWindow->resize(400, 300);

        retranslateUi(UserMainWindow);

        QMetaObject::connectSlotsByName(UserMainWindow);
    } // setupUi

    void retranslateUi(QDialog *UserMainWindow)
    {
        UserMainWindow->setWindowTitle(QCoreApplication::translate("UserMainWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMainWindow: public Ui_UserMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINWINDOW_H
