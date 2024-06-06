/********************************************************************************
** Form generated from reading UI file 'addhotelwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDHOTELWINDOW_H
#define UI_ADDHOTELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddHotelWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *NamelineEdit;
    QLineEdit *AdresslineEdit;
    QComboBox *CountrycomboBox;
    QComboBox *ServicecomboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddpushButton;
    QPushButton *CancelpushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AddHotelWindow)
    {
        if (AddHotelWindow->objectName().isEmpty())
            AddHotelWindow->setObjectName("AddHotelWindow");
        AddHotelWindow->resize(400, 300);
        gridLayout = new QGridLayout(AddHotelWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 49, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddHotelWindow);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        NamelineEdit = new QLineEdit(AddHotelWindow);
        NamelineEdit->setObjectName("NamelineEdit");

        verticalLayout->addWidget(NamelineEdit);

        AdresslineEdit = new QLineEdit(AddHotelWindow);
        AdresslineEdit->setObjectName("AdresslineEdit");

        verticalLayout->addWidget(AdresslineEdit);

        CountrycomboBox = new QComboBox(AddHotelWindow);
        CountrycomboBox->setObjectName("CountrycomboBox");

        verticalLayout->addWidget(CountrycomboBox);

        ServicecomboBox = new QComboBox(AddHotelWindow);
        ServicecomboBox->addItem(QString());
        ServicecomboBox->addItem(QString());
        ServicecomboBox->addItem(QString());
        ServicecomboBox->addItem(QString());
        ServicecomboBox->addItem(QString());
        ServicecomboBox->addItem(QString());
        ServicecomboBox->setObjectName("ServicecomboBox");

        verticalLayout->addWidget(ServicecomboBox);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        AddpushButton = new QPushButton(AddHotelWindow);
        AddpushButton->setObjectName("AddpushButton");

        horizontalLayout->addWidget(AddpushButton);

        CancelpushButton = new QPushButton(AddHotelWindow);
        CancelpushButton->setObjectName("CancelpushButton");

        horizontalLayout->addWidget(CancelpushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(79, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(AddHotelWindow);

        QMetaObject::connectSlotsByName(AddHotelWindow);
    } // setupUi

    void retranslateUi(QDialog *AddHotelWindow)
    {
        AddHotelWindow->setWindowTitle(QCoreApplication::translate("AddHotelWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddHotelWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\321\202\320\265\320\273\321\214", nullptr));
        NamelineEdit->setPlaceholderText(QCoreApplication::translate("AddHotelWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        AdresslineEdit->setPlaceholderText(QCoreApplication::translate("AddHotelWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        ServicecomboBox->setItemText(0, QCoreApplication::translate("AddHotelWindow", "0", nullptr));
        ServicecomboBox->setItemText(1, QCoreApplication::translate("AddHotelWindow", "5", nullptr));
        ServicecomboBox->setItemText(2, QCoreApplication::translate("AddHotelWindow", "4", nullptr));
        ServicecomboBox->setItemText(3, QCoreApplication::translate("AddHotelWindow", "3", nullptr));
        ServicecomboBox->setItemText(4, QCoreApplication::translate("AddHotelWindow", "2", nullptr));
        ServicecomboBox->setItemText(5, QCoreApplication::translate("AddHotelWindow", "1", nullptr));

        AddpushButton->setText(QCoreApplication::translate("AddHotelWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 ", nullptr));
        CancelpushButton->setText(QCoreApplication::translate("AddHotelWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddHotelWindow: public Ui_AddHotelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDHOTELWINDOW_H
