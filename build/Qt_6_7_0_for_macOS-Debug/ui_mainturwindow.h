/********************************************************************************
** Form generated from reading UI file 'mainturwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTURWINDOW_H
#define UI_MAINTURWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainTurWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QComboBox *TourModelcomboBox;
    QSpacerItem *horizontalSpacer_4;
    QListView *TurslistView;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QComboBox *HotelModelcomboBox;
    QSpacerItem *horizontalSpacer_5;
    QListView *HotelListView;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *TurspushButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *HotelspushButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QPushButton *AddCountrypushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ExitpushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainTurWindow)
    {
        if (MainTurWindow->objectName().isEmpty())
            MainTurWindow->setObjectName("MainTurWindow");
        MainTurWindow->resize(727, 708);
        centralwidget = new QWidget(MainTurWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        TourModelcomboBox = new QComboBox(tab);
        TourModelcomboBox->addItem(QString());
        TourModelcomboBox->addItem(QString());
        TourModelcomboBox->addItem(QString());
        TourModelcomboBox->setObjectName("TourModelcomboBox");

        gridLayout_2->addWidget(TourModelcomboBox, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(506, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        TurslistView = new QListView(tab);
        TurslistView->setObjectName("TurslistView");

        gridLayout_2->addWidget(TurslistView, 1, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        HotelModelcomboBox = new QComboBox(tab_2);
        HotelModelcomboBox->addItem(QString());
        HotelModelcomboBox->addItem(QString());
        HotelModelcomboBox->addItem(QString());
        HotelModelcomboBox->setObjectName("HotelModelcomboBox");

        gridLayout_3->addWidget(HotelModelcomboBox, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(547, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        HotelListView = new QListView(tab_2);
        HotelListView->setObjectName("HotelListView");

        gridLayout_3->addWidget(HotelListView, 1, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        TurspushButton = new QPushButton(centralwidget);
        TurspushButton->setObjectName("TurspushButton");

        horizontalLayout->addWidget(TurspushButton);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        HotelspushButton = new QPushButton(centralwidget);
        HotelspushButton->setObjectName("HotelspushButton");

        horizontalLayout_2->addWidget(HotelspushButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        AddCountrypushButton = new QPushButton(centralwidget);
        AddCountrypushButton->setObjectName("AddCountrypushButton");

        horizontalLayout_5->addWidget(AddCountrypushButton);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(368, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        ExitpushButton = new QPushButton(centralwidget);
        ExitpushButton->setObjectName("ExitpushButton");

        horizontalLayout_4->addWidget(ExitpushButton);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        MainTurWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainTurWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 727, 24));
        MainTurWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainTurWindow);
        statusbar->setObjectName("statusbar");
        MainTurWindow->setStatusBar(statusbar);

        retranslateUi(MainTurWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainTurWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainTurWindow)
    {
        MainTurWindow->setWindowTitle(QCoreApplication::translate("MainTurWindow", "MainWindow", nullptr));
        TourModelcomboBox->setItemText(0, QCoreApplication::translate("MainTurWindow", "\320\222\321\201\320\265", nullptr));
        TourModelcomboBox->setItemText(1, QCoreApplication::translate("MainTurWindow", "\320\236\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\275\321\213\320\265", nullptr));
        TourModelcomboBox->setItemText(2, QCoreApplication::translate("MainTurWindow", "\320\241\320\262\320\276\320\261\320\276\320\264\320\275\321\213\320\265", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainTurWindow", "\320\242\321\203\321\200\321\213", nullptr));
        HotelModelcomboBox->setItemText(0, QCoreApplication::translate("MainTurWindow", "\320\222\321\201\320\265", nullptr));
        HotelModelcomboBox->setItemText(1, QCoreApplication::translate("MainTurWindow", "\320\220\320\272\321\202\321\203\320\260\320\273\321\214\320\275\321\213\320\265", nullptr));
        HotelModelcomboBox->setItemText(2, QCoreApplication::translate("MainTurWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\275\321\213\320\265", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainTurWindow", "\320\236\321\202\320\265\320\273\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainTurWindow", "\320\242\321\203\321\200\321\213", nullptr));
        TurspushButton->setText(QCoreApplication::translate("MainTurWindow", "+", nullptr));
        label_2->setText(QCoreApplication::translate("MainTurWindow", "\320\236\321\202\320\265\320\273\320\270", nullptr));
        HotelspushButton->setText(QCoreApplication::translate("MainTurWindow", "+", nullptr));
        label_3->setText(QCoreApplication::translate("MainTurWindow", "\320\241\321\202\321\200\320\260\320\275\321\213", nullptr));
        AddCountrypushButton->setText(QCoreApplication::translate("MainTurWindow", "+", nullptr));
        ExitpushButton->setText(QCoreApplication::translate("MainTurWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainTurWindow: public Ui_MainTurWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTURWINDOW_H
