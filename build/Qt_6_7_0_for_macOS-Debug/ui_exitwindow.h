/********************************************************************************
** Form generated from reading UI file 'exitwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITWINDOW_H
#define UI_EXITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExitWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *ExitWindow)
    {
        if (ExitWindow->objectName().isEmpty())
            ExitWindow->setObjectName("ExitWindow");
        ExitWindow->resize(350, 223);
        gridLayout = new QGridLayout(ExitWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 58, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(52, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ExitWindow);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(ExitWindow);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ExitWindow);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(52, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 57, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(ExitWindow);

        QMetaObject::connectSlotsByName(ExitWindow);
    } // setupUi

    void retranslateUi(QDialog *ExitWindow)
    {
        ExitWindow->setWindowTitle(QCoreApplication::translate("ExitWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ExitWindow", "\320\222\321\213 \321\203\320\262\320\265\321\200\320\265\320\275\321\213, \321\207\321\202\320\276 \321\205\320\276\321\202\320\270\321\202\320\265 \320\262\321\213\320\271\321\202\320\270 ", nullptr));
        pushButton->setText(QCoreApplication::translate("ExitWindow", "\320\224\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ExitWindow", "\320\235\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExitWindow: public Ui_ExitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITWINDOW_H
