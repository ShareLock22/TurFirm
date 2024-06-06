/********************************************************************************
** Form generated from reading UI file 'mainuserwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUSERWINDOW_H
#define UI_MAINUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainUserWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *ProfilepushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *ExitpushButton;
    QTableView *ClienttableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainUserWindow)
    {
        if (MainUserWindow->objectName().isEmpty())
            MainUserWindow->setObjectName("MainUserWindow");
        MainUserWindow->resize(800, 600);
        centralwidget = new QWidget(MainUserWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        horizontalLayout_2->addLayout(horizontalLayout);

        ProfilepushButton = new QPushButton(centralwidget);
        ProfilepushButton->setObjectName("ProfilepushButton");

        horizontalLayout_2->addWidget(ProfilepushButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(318, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        ExitpushButton = new QPushButton(centralwidget);
        ExitpushButton->setObjectName("ExitpushButton");

        horizontalLayout_3->addWidget(ExitpushButton);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        ClienttableView = new QTableView(centralwidget);
        ClienttableView->setObjectName("ClienttableView");

        gridLayout->addWidget(ClienttableView, 1, 0, 1, 1);

        MainUserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainUserWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainUserWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainUserWindow);
        statusbar->setObjectName("statusbar");
        MainUserWindow->setStatusBar(statusbar);

        retranslateUi(MainUserWindow);

        QMetaObject::connectSlotsByName(MainUserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainUserWindow)
    {
        MainUserWindow->setWindowTitle(QCoreApplication::translate("MainUserWindow", "MainWindow", nullptr));
        ProfilepushButton->setText(QCoreApplication::translate("MainUserWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        ExitpushButton->setText(QCoreApplication::translate("MainUserWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainUserWindow: public Ui_MainUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUSERWINDOW_H
