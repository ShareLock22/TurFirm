/********************************************************************************
** Form generated from reading UI file 'hotelprofilewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELPROFILEWINDOW_H
#define UI_HOTELPROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HotelProfileWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *NamelineEdit;
    QLineEdit *AdresslineEdit;
    QComboBox *CountrycomboBox;
    QComboBox *ServicecomboBox;
    QPushButton *pushButton_2;

    void setupUi(QDialog *HotelProfileWindow)
    {
        if (HotelProfileWindow->objectName().isEmpty())
            HotelProfileWindow->setObjectName("HotelProfileWindow");
        HotelProfileWindow->resize(436, 452);
        gridLayout = new QGridLayout(HotelProfileWindow);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(103, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(HotelProfileWindow);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(HotelProfileWindow);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 97, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 96, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(103, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        NamelineEdit = new QLineEdit(HotelProfileWindow);
        NamelineEdit->setObjectName("NamelineEdit");

        verticalLayout->addWidget(NamelineEdit);

        AdresslineEdit = new QLineEdit(HotelProfileWindow);
        AdresslineEdit->setObjectName("AdresslineEdit");

        verticalLayout->addWidget(AdresslineEdit);

        CountrycomboBox = new QComboBox(HotelProfileWindow);
        CountrycomboBox->setObjectName("CountrycomboBox");

        verticalLayout->addWidget(CountrycomboBox);

        ServicecomboBox = new QComboBox(HotelProfileWindow);
        ServicecomboBox->addItem(QString());
        ServicecomboBox->addItem(QString());
        ServicecomboBox->addItem(QString());
        ServicecomboBox->addItem(QString());
        ServicecomboBox->addItem(QString());
        ServicecomboBox->setObjectName("ServicecomboBox");

        verticalLayout->addWidget(ServicecomboBox);

        pushButton_2 = new QPushButton(HotelProfileWindow);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(HotelProfileWindow);

        QMetaObject::connectSlotsByName(HotelProfileWindow);
    } // setupUi

    void retranslateUi(QDialog *HotelProfileWindow)
    {
        HotelProfileWindow->setWindowTitle(QCoreApplication::translate("HotelProfileWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("HotelProfileWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HotelProfileWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        ServicecomboBox->setItemText(0, QCoreApplication::translate("HotelProfileWindow", "5", nullptr));
        ServicecomboBox->setItemText(1, QCoreApplication::translate("HotelProfileWindow", "4", nullptr));
        ServicecomboBox->setItemText(2, QCoreApplication::translate("HotelProfileWindow", "3", nullptr));
        ServicecomboBox->setItemText(3, QCoreApplication::translate("HotelProfileWindow", "2", nullptr));
        ServicecomboBox->setItemText(4, QCoreApplication::translate("HotelProfileWindow", "1", nullptr));

        pushButton_2->setText(QCoreApplication::translate("HotelProfileWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotelProfileWindow: public Ui_HotelProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELPROFILEWINDOW_H
