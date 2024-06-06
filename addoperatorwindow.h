#ifndef ADDOPERATORWINDOW_H
#define ADDOPERATORWINDOW_H

#include <QDialog>
#include "database.h"

namespace Ui {
class AddOperatorWindow;
}

class AddOperatorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddOperatorWindow(QWidget *parent = nullptr);
    ~AddOperatorWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddOperatorWindow *ui;
};

#endif // ADDOPERATORWINDOW_H
