#include "changepasswordwindow.h"
#include "ui_changepasswordwindow.h"
#include "database.h"
#include <QMessageBox>

ChangePasswordWindow::ChangePasswordWindow(int id_user,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ChangePasswordWindow)
    ,m_id_user(id_user)
{
    ui->setupUi(this);
}

ChangePasswordWindow::~ChangePasswordWindow()
{
    delete ui;
}

void ChangePasswordWindow::on_CancelpushButton_clicked()
{
    close();
}


void ChangePasswordWindow::on_ChangepushButton_clicked()
{
    auto password = ui->PasswordlineEdit->text();
    auto repassword = ui->RePasswordlineEdit->text();
    if (password != repassword) {
        QMessageBox::warning(this, "Ошибка", "Пароли должны совпадать");
    }
    else {
        auto db = DataBase::getDB();
        db.updatePassword(m_id_user, password);
        close();
    }
}

