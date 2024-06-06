/********************************************************************************
** Form generated from reading UI file 'addturwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTURWINDOW_H
#define UI_ADDTURWINDOW_H

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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddTurWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *DurationcomboBox;
    QComboBox *HotelcomboBox;
    QLineEdit *DatelineEdit;
    QComboBox *ClimatecomboBox;
    QComboBox *CountrycomboBox;
    QSpinBox *PricespinBox;
    QSpinBox *DiscountspinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddpushButton;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AddTurWindow)
    {
        if (AddTurWindow->objectName().isEmpty())
            AddTurWindow->setObjectName("AddTurWindow");
        AddTurWindow->resize(355, 354);
        gridLayout = new QGridLayout(AddTurWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 61, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(AddTurWindow);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        DurationcomboBox = new QComboBox(AddTurWindow);
        DurationcomboBox->addItem(QString());
        DurationcomboBox->addItem(QString());
        DurationcomboBox->addItem(QString());
        DurationcomboBox->addItem(QString());
        DurationcomboBox->setObjectName("DurationcomboBox");

        gridLayout->addWidget(DurationcomboBox, 2, 1, 1, 1);

        HotelcomboBox = new QComboBox(AddTurWindow);
        HotelcomboBox->setObjectName("HotelcomboBox");

        gridLayout->addWidget(HotelcomboBox, 3, 1, 1, 1);

        DatelineEdit = new QLineEdit(AddTurWindow);
        DatelineEdit->setObjectName("DatelineEdit");

        gridLayout->addWidget(DatelineEdit, 4, 1, 1, 1);

        ClimatecomboBox = new QComboBox(AddTurWindow);
        ClimatecomboBox->addItem(QString());
        ClimatecomboBox->addItem(QString());
        ClimatecomboBox->addItem(QString());
        ClimatecomboBox->addItem(QString());
        ClimatecomboBox->setObjectName("ClimatecomboBox");

        gridLayout->addWidget(ClimatecomboBox, 5, 1, 1, 1);

        CountrycomboBox = new QComboBox(AddTurWindow);
        CountrycomboBox->setObjectName("CountrycomboBox");

        gridLayout->addWidget(CountrycomboBox, 6, 1, 1, 1);

        PricespinBox = new QSpinBox(AddTurWindow);
        PricespinBox->setObjectName("PricespinBox");
        PricespinBox->setMaximum(10000);

        gridLayout->addWidget(PricespinBox, 7, 1, 1, 1);

        DiscountspinBox = new QSpinBox(AddTurWindow);
        DiscountspinBox->setObjectName("DiscountspinBox");
        DiscountspinBox->setMaximum(50);
        DiscountspinBox->setDisplayIntegerBase(10);

        gridLayout->addWidget(DiscountspinBox, 8, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        AddpushButton = new QPushButton(AddTurWindow);
        AddpushButton->setObjectName("AddpushButton");

        horizontalLayout->addWidget(AddpushButton);

        pushButton = new QPushButton(AddTurWindow);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 9, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 61, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 10, 1, 1, 1);


        retranslateUi(AddTurWindow);

        QMetaObject::connectSlotsByName(AddTurWindow);
    } // setupUi

    void retranslateUi(QDialog *AddTurWindow)
    {
        AddTurWindow->setWindowTitle(QCoreApplication::translate("AddTurWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddTurWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\321\203\321\200", nullptr));
        DurationcomboBox->setItemText(0, QCoreApplication::translate("AddTurWindow", "None", nullptr));
        DurationcomboBox->setItemText(1, QCoreApplication::translate("AddTurWindow", "1 \320\275\320\265\320\264\320\265\320\273\321\217", nullptr));
        DurationcomboBox->setItemText(2, QCoreApplication::translate("AddTurWindow", "2 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        DurationcomboBox->setItemText(3, QCoreApplication::translate("AddTurWindow", "4 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));

        DatelineEdit->setInputMask(QString());
        DatelineEdit->setText(QString());
        DatelineEdit->setPlaceholderText(QCoreApplication::translate("AddTurWindow", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\273\320\265\321\202\320\260", nullptr));
        ClimatecomboBox->setItemText(0, QCoreApplication::translate("AddTurWindow", "None", nullptr));
        ClimatecomboBox->setItemText(1, QCoreApplication::translate("AddTurWindow", "\320\242\320\265\320\277\320\273\321\213\320\271", nullptr));
        ClimatecomboBox->setItemText(2, QCoreApplication::translate("AddTurWindow", "\320\243\320\274\320\265\321\200\320\265\320\275\320\275\321\213\320\271", nullptr));
        ClimatecomboBox->setItemText(3, QCoreApplication::translate("AddTurWindow", "\320\245\320\276\320\273\320\276\320\264\320\275\321\213\320\271", nullptr));

        AddpushButton->setText(QCoreApplication::translate("AddTurWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("AddTurWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTurWindow: public Ui_AddTurWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTURWINDOW_H
