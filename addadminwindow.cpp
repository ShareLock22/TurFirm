#include "addadminwindow.h"
#include "ui_addadminwindow.h"
#include "actor.h"
#include "database.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

AddAdminWindow::AddAdminWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddAdminWindow)
{
    ui->setupUi(this);
}

AddAdminWindow::~AddAdminWindow()
{
    delete ui;
}

void AddAdminWindow::on_CancelpushButton_clicked()
{
    close();
}


void AddAdminWindow::on_AddAdminpushButton_clicked()
{
    Actor actor;
    auto db = DataBase::getDB();

    auto name = ui -> NamelineEdit -> text();
    auto number = ui -> NumberlineEdit -> text();
    auto mail = ui -> MaillineEdit -> text();
    auto login = ui -> LoginlineEdit -> text();
    auto password = ui -> PasswordlineEdit -> text();
    auto rpassword = ui -> RPasswordlineEdit -> text();

    auto str_warning = actor.dataValidCheck(name, number, login, password, rpassword, mail);
    QMessageBox::warning(this, "Ошибка", str_warning);

    if(str_warning == "Пользователь добавлен")
    {
    db.addActors(name, number, login, password, mail, 0);
    close();
    }
}

