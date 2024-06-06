/********************************************************************************
** Form generated from reading UI file 'confirmturwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMTURWINDOW_H
#define UI_CONFIRMTURWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ConfirmTurWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *CountryLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *HotelLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Climatelabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *DurationLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QLabel *Dateelabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *CancelpushButton;

    void setupUi(QDialog *ConfirmTurWindow)
    {
        if (ConfirmTurWindow->objectName().isEmpty())
            ConfirmTurWindow->setObjectName("ConfirmTurWindow");
        ConfirmTurWindow->resize(400, 300);
        gridLayout = new QGridLayout(ConfirmTurWindow);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(ConfirmTurWindow);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(ConfirmTurWindow);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        CountryLabel = new QLabel(ConfirmTurWindow);
        CountryLabel->setObjectName("CountryLabel");

        horizontalLayout_2->addWidget(CountryLabel);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(ConfirmTurWindow);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        HotelLabel = new QLabel(ConfirmTurWindow);
        HotelLabel->setObjectName("HotelLabel");

        horizontalLayout_3->addWidget(HotelLabel);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(ConfirmTurWindow);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        Climatelabel = new QLabel(ConfirmTurWindow);
        Climatelabel->setObjectName("Climatelabel");

        horizontalLayout_4->addWidget(Climatelabel);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(ConfirmTurWindow);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        DurationLabel = new QLabel(ConfirmTurWindow);
        DurationLabel->setObjectName("DurationLabel");

        horizontalLayout_5->addWidget(DurationLabel);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(ConfirmTurWindow);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        Dateelabel = new QLabel(ConfirmTurWindow);
        Dateelabel->setObjectName("Dateelabel");

        horizontalLayout_6->addWidget(Dateelabel);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(ConfirmTurWindow);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        CancelpushButton = new QPushButton(ConfirmTurWindow);
        CancelpushButton->setObjectName("CancelpushButton");

        horizontalLayout->addWidget(CancelpushButton);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);


        retranslateUi(ConfirmTurWindow);

        QMetaObject::connectSlotsByName(ConfirmTurWindow);
    } // setupUi

    void retranslateUi(QDialog *ConfirmTurWindow)
    {
        ConfirmTurWindow->setWindowTitle(QCoreApplication::translate("ConfirmTurWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ConfirmTurWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 ", nullptr));
        label_2->setText(QCoreApplication::translate("ConfirmTurWindow", "C\321\202\321\200\320\260\320\275\320\260:", nullptr));
        CountryLabel->setText(QCoreApplication::translate("ConfirmTurWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ConfirmTurWindow", "\320\236\321\202\320\265\320\273\321\214:", nullptr));
        HotelLabel->setText(QCoreApplication::translate("ConfirmTurWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ConfirmTurWindow", "\320\232\320\273\320\270\320\274\320\260\321\202", nullptr));
        Climatelabel->setText(QCoreApplication::translate("ConfirmTurWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("ConfirmTurWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        DurationLabel->setText(QCoreApplication::translate("ConfirmTurWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("ConfirmTurWindow", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        Dateelabel->setText(QCoreApplication::translate("ConfirmTurWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("ConfirmTurWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214", nullptr));
        CancelpushButton->setText(QCoreApplication::translate("ConfirmTurWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmTurWindow: public Ui_ConfirmTurWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMTURWINDOW_H
