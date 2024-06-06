/********************************************************************************
** Form generated from reading UI file 'addcountry.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOUNTRY_H
#define UI_ADDCOUNTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddCountry
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddpushButton;
    QPushButton *CancelpushButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLineEdit *NamelineEdit;

    void setupUi(QDialog *AddCountry)
    {
        if (AddCountry->objectName().isEmpty())
            AddCountry->setObjectName("AddCountry");
        AddCountry->resize(400, 300);
        gridLayout = new QGridLayout(AddCountry);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        listView = new QListView(AddCountry);
        listView->setObjectName("listView");

        gridLayout->addWidget(listView, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        AddpushButton = new QPushButton(AddCountry);
        AddpushButton->setObjectName("AddpushButton");

        horizontalLayout->addWidget(AddpushButton);

        CancelpushButton = new QPushButton(AddCountry);
        CancelpushButton->setObjectName("CancelpushButton");

        horizontalLayout->addWidget(CancelpushButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        label = new QLabel(AddCountry);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        NamelineEdit = new QLineEdit(AddCountry);
        NamelineEdit->setObjectName("NamelineEdit");

        gridLayout->addWidget(NamelineEdit, 2, 0, 1, 2);


        retranslateUi(AddCountry);

        QMetaObject::connectSlotsByName(AddCountry);
    } // setupUi

    void retranslateUi(QDialog *AddCountry)
    {
        AddCountry->setWindowTitle(QCoreApplication::translate("AddCountry", "Dialog", nullptr));
        AddpushButton->setText(QCoreApplication::translate("AddCountry", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        CancelpushButton->setText(QCoreApplication::translate("AddCountry", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("AddCountry", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        NamelineEdit->setPlaceholderText(QCoreApplication::translate("AddCountry", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCountry: public Ui_AddCountry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOUNTRY_H
