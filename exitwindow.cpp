

#include "exitwindow.h"
#include "ui_exitwindow.h"
#include "mainadminwindow.h"
#include "database.h"

ExitWindow::ExitWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExitWindow)
{
    ui->setupUi(this);
}

ExitWindow::~ExitWindow()
{
    delete ui;
}

void ExitWindow::on_pushButton_clicked()
{
    // auto db = DataBase::getDB();
    // db.closeDataBase();
    accept();
}


void ExitWindow::on_pushButton_2_clicked()
{
    reject();
}

