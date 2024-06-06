/********************************************************************************
** Form generated from reading UI file 'mainadminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINADMINWINDOW_H
#define UI_MAINADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainAdminWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *AddpushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *AddAdminpushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *ExitpushButton;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QTableView *ActortableView;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTableView *AdmintableView;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QTableView *OperatortableView;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QTableView *ClienttableView;
    QWidget *tab_5;
    QGridLayout *gridLayout_6;
    QComboBox *HotelModelcomboBox;
    QSpacerItem *horizontalSpacer_3;
    QListView *HotelListView;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QComboBox *CountryModelcomboBox;
    QSpacerItem *horizontalSpacer_2;
    QListView *CountryListView;
    QWidget *tab_7;
    QGridLayout *gridLayout_8;
    QComboBox *TourModelcomboBox;
    QSpacerItem *horizontalSpacer_4;
    QListView *TourListView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainAdminWindow)
    {
        if (MainAdminWindow->objectName().isEmpty())
            MainAdminWindow->setObjectName("MainAdminWindow");
        MainAdminWindow->resize(800, 600);
        centralwidget = new QWidget(MainAdminWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        AddpushButton = new QPushButton(centralwidget);
        AddpushButton->setObjectName("AddpushButton");

        horizontalLayout->addWidget(AddpushButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        AddAdminpushButton = new QPushButton(centralwidget);
        AddAdminpushButton->setObjectName("AddAdminpushButton");

        horizontalLayout_3->addWidget(AddAdminpushButton);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(448, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ExitpushButton = new QPushButton(centralwidget);
        ExitpushButton->setObjectName("ExitpushButton");

        horizontalLayout_2->addWidget(ExitpushButton);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName("gridLayout_4");
        ActortableView = new QTableView(tab_3);
        ActortableView->setObjectName("ActortableView");

        gridLayout_4->addWidget(ActortableView, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        AdmintableView = new QTableView(tab);
        AdmintableView->setObjectName("AdmintableView");

        gridLayout->addWidget(AdmintableView, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName("gridLayout_2");
        OperatortableView = new QTableView(tab_2);
        OperatortableView->setObjectName("OperatortableView");

        gridLayout_2->addWidget(OperatortableView, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setObjectName("gridLayout_5");
        ClienttableView = new QTableView(tab_4);
        ClienttableView->setObjectName("ClienttableView");

        gridLayout_5->addWidget(ClienttableView, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        gridLayout_6 = new QGridLayout(tab_5);
        gridLayout_6->setObjectName("gridLayout_6");
        HotelModelcomboBox = new QComboBox(tab_5);
        HotelModelcomboBox->addItem(QString());
        HotelModelcomboBox->addItem(QString());
        HotelModelcomboBox->addItem(QString());
        HotelModelcomboBox->setObjectName("HotelModelcomboBox");

        gridLayout_6->addWidget(HotelModelcomboBox, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(596, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        HotelListView = new QListView(tab_5);
        HotelListView->setObjectName("HotelListView");

        gridLayout_6->addWidget(HotelListView, 1, 0, 1, 2);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setObjectName("gridLayout_7");
        CountryModelcomboBox = new QComboBox(tab_6);
        CountryModelcomboBox->addItem(QString());
        CountryModelcomboBox->addItem(QString());
        CountryModelcomboBox->addItem(QString());
        CountryModelcomboBox->setObjectName("CountryModelcomboBox");

        gridLayout_7->addWidget(CountryModelcomboBox, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(596, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        CountryListView = new QListView(tab_6);
        CountryListView->setObjectName("CountryListView");

        gridLayout_7->addWidget(CountryListView, 1, 0, 1, 2);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        gridLayout_8 = new QGridLayout(tab_7);
        gridLayout_8->setObjectName("gridLayout_8");
        TourModelcomboBox = new QComboBox(tab_7);
        TourModelcomboBox->addItem(QString());
        TourModelcomboBox->addItem(QString());
        TourModelcomboBox->addItem(QString());
        TourModelcomboBox->setObjectName("TourModelcomboBox");

        gridLayout_8->addWidget(TourModelcomboBox, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(596, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        TourListView = new QListView(tab_7);
        TourListView->setObjectName("TourListView");

        gridLayout_8->addWidget(TourListView, 1, 0, 1, 2);

        tabWidget->addTab(tab_7, QString());

        gridLayout_3->addWidget(tabWidget, 1, 0, 1, 1);

        MainAdminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainAdminWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainAdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainAdminWindow);
        statusbar->setObjectName("statusbar");
        MainAdminWindow->setStatusBar(statusbar);

        retranslateUi(MainAdminWindow);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainAdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainAdminWindow)
    {
        MainAdminWindow->setWindowTitle(QCoreApplication::translate("MainAdminWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainAdminWindow", "\320\242\321\203\321\200 \320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200\321\213", nullptr));
        AddpushButton->setText(QCoreApplication::translate("MainAdminWindow", "+", nullptr));
        label_2->setText(QCoreApplication::translate("MainAdminWindow", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\321\213", nullptr));
        AddAdminpushButton->setText(QCoreApplication::translate("MainAdminWindow", "+", nullptr));
        ExitpushButton->setText(QCoreApplication::translate("MainAdminWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainAdminWindow", "\320\222\321\201\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainAdminWindow", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\321\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainAdminWindow", "\320\236\320\277\320\265\321\200\320\260\321\202\320\276\321\200\321\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainAdminWindow", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        HotelModelcomboBox->setItemText(0, QCoreApplication::translate("MainAdminWindow", "\320\222\321\201\320\265", nullptr));
        HotelModelcomboBox->setItemText(1, QCoreApplication::translate("MainAdminWindow", "\320\220\320\272\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\265", nullptr));
        HotelModelcomboBox->setItemText(2, QCoreApplication::translate("MainAdminWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\275\321\213\320\265", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainAdminWindow", "\320\236\321\202\320\265\320\273\320\270", nullptr));
        CountryModelcomboBox->setItemText(0, QCoreApplication::translate("MainAdminWindow", "\320\222\321\201\320\265", nullptr));
        CountryModelcomboBox->setItemText(1, QCoreApplication::translate("MainAdminWindow", "\320\220\320\272\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\265", nullptr));
        CountryModelcomboBox->setItemText(2, QCoreApplication::translate("MainAdminWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\275\321\213\320\265", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainAdminWindow", "\320\241\321\202\321\200\320\260\320\275\321\213", nullptr));
        TourModelcomboBox->setItemText(0, QCoreApplication::translate("MainAdminWindow", "\320\222\321\201\320\265", nullptr));
        TourModelcomboBox->setItemText(1, QCoreApplication::translate("MainAdminWindow", "\320\220\320\272\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\265", nullptr));
        TourModelcomboBox->setItemText(2, QCoreApplication::translate("MainAdminWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\275\321\213\320\265", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainAdminWindow", "\320\242\321\203\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainAdminWindow: public Ui_MainAdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINADMINWINDOW_H
