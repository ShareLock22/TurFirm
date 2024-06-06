#include "addoperatorwindow.h"
#include "ui_addoperatorwindow.h"

#include <QMessageBox>

AddOperatorWindow::AddOperatorWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddOperatorWindow)
{
    ui->setupUi(this);
}

AddOperatorWindow::~AddOperatorWindow()
{
    delete ui;
}

void AddOperatorWindow::on_pushButton_clicked()
{
    close();
}


void AddOperatorWindow::on_pushButton_2_clicked()
{
    Actor actor;
    auto db = DataBase::getDB();

    const auto name = ui -> NamelineEdit -> text();
    const auto number = ui -> NumberlineEdit -> text();
    const auto mail = ui -> MaillineEdit -> text();
    const auto login = ui -> LoginlineEdit -> text();
    const auto password = ui -> PasslineEdit -> text();
    const auto rpassword = ui -> RPasslineEdit -> text();

    auto str_warning = actor.dataValidCheck(name, number, login, password, rpassword, mail);
    QMessageBox::warning(this, "Ошибка", str_warning);

    if(str_warning == "Пользователь добавлен"){
    db.addActors(name, number, login, password, mail, 1);
        emit finished(QDialog::Accepted);
    close();
    }

}

