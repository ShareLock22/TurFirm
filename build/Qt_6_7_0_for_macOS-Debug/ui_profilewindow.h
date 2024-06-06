/********************************************************************************
** Form generated from reading UI file 'profilewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEWINDOW_H
#define UI_PROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfileWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *Clientlabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *PhonelineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *MailLineEdit;
    QLabel *Discountlabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *Loginlabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *UpdatepushButton;
    QPushButton *SavepushButton;
    QPushButton *BackpushButton;
    QTableView *CurrentTurtableView;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProfileWindow)
    {
        if (ProfileWindow->objectName().isEmpty())
            ProfileWindow->setObjectName("ProfileWindow");
        ProfileWindow->resize(800, 600);
        centralwidget = new QWidget(ProfileWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(304, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        Clientlabel = new QLabel(centralwidget);
        Clientlabel->setObjectName("Clientlabel");

        gridLayout->addWidget(Clientlabel, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        PhonelineEdit = new QLineEdit(centralwidget);
        PhonelineEdit->setObjectName("PhonelineEdit");

        horizontalLayout->addWidget(PhonelineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        MailLineEdit = new QLineEdit(centralwidget);
        MailLineEdit->setObjectName("MailLineEdit");

        horizontalLayout_2->addWidget(MailLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        Discountlabel = new QLabel(centralwidget);
        Discountlabel->setObjectName("Discountlabel");

        verticalLayout->addWidget(Discountlabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        Loginlabel = new QLabel(centralwidget);
        Loginlabel->setObjectName("Loginlabel");

        horizontalLayout_4->addWidget(Loginlabel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        UpdatepushButton = new QPushButton(centralwidget);
        UpdatepushButton->setObjectName("UpdatepushButton");

        horizontalLayout_3->addWidget(UpdatepushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        SavepushButton = new QPushButton(centralwidget);
        SavepushButton->setObjectName("SavepushButton");

        verticalLayout->addWidget(SavepushButton);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 3);

        BackpushButton = new QPushButton(centralwidget);
        BackpushButton->setObjectName("BackpushButton");

        gridLayout->addWidget(BackpushButton, 0, 2, 1, 1);

        CurrentTurtableView = new QTableView(centralwidget);
        CurrentTurtableView->setObjectName("CurrentTurtableView");

        gridLayout->addWidget(CurrentTurtableView, 0, 3, 2, 1);

        ProfileWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProfileWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        ProfileWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ProfileWindow);
        statusbar->setObjectName("statusbar");
        ProfileWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(ProfileWindow);

        QMetaObject::connectSlotsByName(ProfileWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ProfileWindow)
    {
        ProfileWindow->setWindowTitle(QCoreApplication::translate("ProfileWindow", "MainWindow", nullptr));
        Clientlabel->setText(QCoreApplication::translate("ProfileWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("ProfileWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("ProfileWindow", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        Discountlabel->setText(QCoreApplication::translate("ProfileWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ProfileWindow", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        Loginlabel->setText(QCoreApplication::translate("ProfileWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ProfileWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        UpdatepushButton->setText(QCoreApplication::translate("ProfileWindow", "PushButton", nullptr));
        SavepushButton->setText(QCoreApplication::translate("ProfileWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        BackpushButton->setText(QCoreApplication::translate("ProfileWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        menu->setTitle(QCoreApplication::translate("ProfileWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileWindow: public Ui_ProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEWINDOW_H
