/********************************************************************************
** Form generated from reading UI file 'deletewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOW_H
#define UI_DELETEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DeleteWindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *Namelabel;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *DeletepushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *CancelpushButton;

    void setupUi(QDialog *DeleteWindow)
    {
        if (DeleteWindow->objectName().isEmpty())
            DeleteWindow->setObjectName("DeleteWindow");
        DeleteWindow->resize(470, 430);
        gridLayout = new QGridLayout(DeleteWindow);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(DeleteWindow);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        Namelabel = new QLabel(DeleteWindow);
        Namelabel->setObjectName("Namelabel");

        horizontalLayout_2->addWidget(Namelabel);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        label_2 = new QLabel(DeleteWindow);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(74, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(73, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 46, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        DeletepushButton = new QPushButton(DeleteWindow);
        DeletepushButton->setObjectName("DeletepushButton");

        horizontalLayout->addWidget(DeletepushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        CancelpushButton = new QPushButton(DeleteWindow);
        CancelpushButton->setObjectName("CancelpushButton");

        horizontalLayout->addWidget(CancelpushButton);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);


        retranslateUi(DeleteWindow);

        QMetaObject::connectSlotsByName(DeleteWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteWindow)
    {
        DeleteWindow->setWindowTitle(QCoreApplication::translate("DeleteWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DeleteWindow", "\320\222\321\213 \321\203\320\262\320\265\321\200\320\275\320\275\321\213, \321\207\321\202\320\276 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        Namelabel->setText(QCoreApplication::translate("DeleteWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("DeleteWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \321\215\321\202\320\276 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265 \320\261\321\203\320\264\320\265\321\202 \320\275\320\265\320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276.", nullptr));
        DeletepushButton->setText(QCoreApplication::translate("DeleteWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        CancelpushButton->setText(QCoreApplication::translate("DeleteWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteWindow: public Ui_DeleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
