#include "loginwindow.h"
#include "regwindow.h"
#include "actor.h"
#include "mainadminwindow.h"
#include "mainturwindow.h"
#include "mainuserwindow.h"
#include "ui_loginwindow.h"

#include <QMessageBox>
#include <QDebug>


LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginWindow)
{

    ui->setupUi(this);
    loadCheckboxState();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_clicked()
{
    auto db = DataBase::getDB();
    const auto login = ui -> lineEdit -> text();
    const auto password = ui -> lineEdit_2 -> text();

    if(login.isEmpty() ||
        password.isEmpty())
    {
        QMessageBox::warning(
            this, "Ошибка", "Логин и пароль не могут быть пустыми");
        return;
    }

    if (db.isActor(login, password)) {
    auto role = db.AuthCheck(login, password);
    saveCheckboxState();

    qDebug() << role;
    switch (role.toInt()) {
    case 0: emit userEntered(Actor::Admin);
        break;
    case 1: emit userEntered(Actor::Operator);
        break;
    case 2: emit userEntered(Actor::User);
        break;
    case 3: qDebug() << "no user";
    default:
        break;
    }

    ui->lineEdit_2->clear();
    }
    else QMessageBox::warning(this, "Ошибка", "Неверный логин или пароль");
}

void LoginWindow::on_pushButton_2_clicked()
{
    RegWindow rw;
    rw.exec();
}

void LoginWindow::saveCheckboxState()
{
    qDebug() << "Save Checkbox!";
    // Получаем логин из UI
    const auto login = ui->lineEdit->text();
    qDebug() << "Save Checkbox (Login =" << login << ");";


    // Создаем файл и записываем в него состояние чекбокса и логин
    QFile file("checkbox_state.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
        QTextStream out(&file);
        out << ui->checkBox->isChecked() << "\n"; // Записываем состояние чекбокса (0 или 1)
        out << login << "\n"; // Записываем логин
        file.flush();
        file.close();
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось создать файл");
    }
}

void LoginWindow::loadCheckboxState()
{
    QFile file("checkbox_state.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        int state = in.readLine().toInt();
        QString savedLogin = in.readLine();
        file.close();

        // Если в первой строке файла 1, то записываем вторую строку в lineEdit
        if (state == 1) {
            ui->lineEdit->setText(savedLogin);
        } else {
            ui->checkBox->setChecked(state);
        }
    }
}

