/********************************************************************************
** Form generated from reading UI file 'profileturwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILETURWINDOW_H
#define UI_PROFILETURWINDOW_H

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

class Ui_ProfileTurWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *Operatorlabel;
    QSpacerItem *horizontalSpacer;
    QLabel *Clientlabel;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *Countrylabel;
    QLineEdit *DateelineEdit;
    QComboBox *HotelcomboBox;
    QComboBox *ClimatecomboBox;
    QComboBox *DureationcomboBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *DeletepushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ProfileTurWindow)
    {
        if (ProfileTurWindow->objectName().isEmpty())
            ProfileTurWindow->setObjectName("ProfileTurWindow");
        ProfileTurWindow->resize(594, 412);
        gridLayout = new QGridLayout(ProfileTurWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 59, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Operatorlabel = new QLabel(ProfileTurWindow);
        Operatorlabel->setObjectName("Operatorlabel");

        horizontalLayout->addWidget(Operatorlabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Clientlabel = new QLabel(ProfileTurWindow);
        Clientlabel->setObjectName("Clientlabel");

        horizontalLayout->addWidget(Clientlabel);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(101, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        Countrylabel = new QLabel(ProfileTurWindow);
        Countrylabel->setObjectName("Countrylabel");

        verticalLayout->addWidget(Countrylabel);

        DateelineEdit = new QLineEdit(ProfileTurWindow);
        DateelineEdit->setObjectName("DateelineEdit");

        verticalLayout->addWidget(DateelineEdit);

        HotelcomboBox = new QComboBox(ProfileTurWindow);
        HotelcomboBox->setObjectName("HotelcomboBox");

        verticalLayout->addWidget(HotelcomboBox);

        ClimatecomboBox = new QComboBox(ProfileTurWindow);
        ClimatecomboBox->addItem(QString());
        ClimatecomboBox->addItem(QString());
        ClimatecomboBox->addItem(QString());
        ClimatecomboBox->setObjectName("ClimatecomboBox");

        verticalLayout->addWidget(ClimatecomboBox);

        DureationcomboBox = new QComboBox(ProfileTurWindow);
        DureationcomboBox->addItem(QString());
        DureationcomboBox->addItem(QString());
        DureationcomboBox->addItem(QString());
        DureationcomboBox->setObjectName("DureationcomboBox");

        verticalLayout->addWidget(DureationcomboBox);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_2 = new QPushButton(ProfileTurWindow);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(ProfileTurWindow);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        DeletepushButton = new QPushButton(ProfileTurWindow);
        DeletepushButton->setObjectName("DeletepushButton");

        horizontalLayout_2->addWidget(DeletepushButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 3, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 59, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);


        retranslateUi(ProfileTurWindow);

        QMetaObject::connectSlotsByName(ProfileTurWindow);
    } // setupUi

    void retranslateUi(QDialog *ProfileTurWindow)
    {
        ProfileTurWindow->setWindowTitle(QCoreApplication::translate("ProfileTurWindow", "Dialog", nullptr));
        Operatorlabel->setText(QCoreApplication::translate("ProfileTurWindow", "TextLabel", nullptr));
        Clientlabel->setText(QCoreApplication::translate("ProfileTurWindow", "TextLabel", nullptr));
        Countrylabel->setText(QCoreApplication::translate("ProfileTurWindow", "TextLabel", nullptr));
        ClimatecomboBox->setItemText(0, QCoreApplication::translate("ProfileTurWindow", "\320\242\320\265\320\277\320\273\321\213\320\271", nullptr));
        ClimatecomboBox->setItemText(1, QCoreApplication::translate("ProfileTurWindow", "\320\243\320\274\320\265\321\200\320\265\320\275\320\275\321\213\320\271", nullptr));
        ClimatecomboBox->setItemText(2, QCoreApplication::translate("ProfileTurWindow", "\320\245\320\276\320\273\320\276\320\264\320\275\321\213\320\271", nullptr));

        DureationcomboBox->setItemText(0, QCoreApplication::translate("ProfileTurWindow", "1 \320\275\320\265\320\264\320\265\320\273\321\217", nullptr));
        DureationcomboBox->setItemText(1, QCoreApplication::translate("ProfileTurWindow", "2 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        DureationcomboBox->setItemText(2, QCoreApplication::translate("ProfileTurWindow", "4 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));

        pushButton_2->setText(QCoreApplication::translate("ProfileTurWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("ProfileTurWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        DeletepushButton->setText(QCoreApplication::translate("ProfileTurWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileTurWindow: public Ui_ProfileTurWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILETURWINDOW_H
