#include "regwindow.h"
#include "ui_regwindow.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include "database.h"
#include "actor.h"

RegWindow::RegWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegWindow)
{
    ui->setupUi(this);
    m_nameValidator = new QRegularExpressionValidator(QRegularExpression("^[a-zA-Z\\s]+$"), this);
    m_phoneValidator = new QRegularExpressionValidator(QRegularExpression("^\\+\\d{1,2}\$\\d{3,5}\$\\d{2,7}$"), this);
    m_emailValidator = new QRegularExpressionValidator(QRegularExpression("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$"), this);
    m_loginValidator = new QRegularExpressionValidator(QRegularExpression("^[a-zA-Z0-9]+$"), this);
    m_passwordValidator = new QRegularExpressionValidator(QRegularExpression("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[!@#$%^&*(),.?:{}|<>])[a-zA-Z\\d!@#$%^&*(),.?:{}|<>]{8,}$"), this);

    // Установка валидаторов на соответствующие виджеты
    ui->NamelineEdit->setValidator(m_nameValidator);
    ui->NumberlineEdit->setValidator(m_phoneValidator);
    ui->MaillineEdit->setValidator(m_emailValidator);
    ui->LoginlineEdit->setValidator(m_loginValidator);
    ui->PasswordlineEdit->setValidator(m_passwordValidator);
}

RegWindow::~RegWindow()
{
    delete ui;
}

void RegWindow::on_regClicked_clicked()
{
    auto db = DataBase::getDB();
    Actor actor;

    const auto name = ui -> NamelineEdit -> text();
    const auto number = ui -> NumberlineEdit -> text();
    const auto mail = ui -> MaillineEdit -> text();
    const auto adress = ui -> AdresslineEdit -> text();
    const auto login = ui -> LoginlineEdit -> text();
    const auto password = ui -> PasswordlineEdit -> text();
    const auto rpassword = ui -> RepeatPasswordlineEdit -> text();


    auto str_warning = actor.dataValidCheck(name, number, login, password, rpassword, mail);
    QMessageBox::warning(this, "Ошибка", str_warning);

    if(str_warning == "Пользователь добавлен"){
    db.addActors(name, number, login, password, mail, 2);
    close();
    }

}


void RegWindow::on_pushButton_clicked()
{
    close();
}

