#include "actor.h"
#include "database.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include "database.h"

Actor::Actor(const QString& number, const QString& login, const QString& password, const QString& mail, const Role role)
    : Number(number), Login(login), Password(password), Mail(mail), role(role) {
}

Actor::Actor(){};




QString Actor::roleToString(Actor::Role role) {
    switch (role) {
    case Actor::Admin:
        return "Admin";
    case Actor::User:
        return "User";
    case Actor::Operator:;
        return "Operator";
    default:
        return "Unknown";
    }
}


QString Actor::dataValidCheck(QString const &name, QString const &number, QString const &login,
                              QString const &password, QString const &rpassword, QString const &mail)
{
    auto db = DataBase::getDB();

    if (name.trimmed().isEmpty())
    {
        return "Имя пустое";

    }

    if (number.isEmpty())
    {
        return "Номер пустой";

    }

    QRegularExpression reNumber("\\d+");
    if (number.length() != 10 || !reNumber.match(number).hasMatch())
    {
        return "Номер состоит из 10 цифр";
    }

    QRegularExpression reMail("^[0-9a-zA-Z]+([0-9a-zA-Z]*[-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z]*[.])[a-zA-Z]{2,6}$");

    if (mail.isEmpty())
    {
        return "Почта пустая";
    }

    if (!reMail.match(mail).hasMatch())
    {
        return "Почта не соответствует формату";
    }
/*
    if (adress.trimmed().isEmpty())
    {
        return "Адрес пустой";
    }

 */   if (login.trimmed().isEmpty())
    {
        return "Логин пустой";
    }

    if(password.isEmpty() == true)
    {
        return "Пароль не может быть пустой";
    }

    if (password != rpassword)
    {
        return "Пароли не совпадают";
    }
    if (!db.uniqueActor(login, number)) {
        return "Такой пользователь уже существует";
    }
    return "Пользователь добавлен";
}

QString Actor::loadLogin() {
    QString secondLine;
    QFile file("checkbox_state.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        in.readLine(); // Пропускаем первую строку
        secondLine = in.readLine(); // Читаем вторую строку
        file.close();
    }

    qDebug() << "Loaded Login: " << secondLine;
    return secondLine;
}

int Actor::setDiscount(int id_client) {
    auto db = DataBase::getDB();
    const int count = db.countToursForClient(id_client);

    if (count >= 5 and count < 10)
        return 3;
    else if (count >= 10 and count < 15)
        return 5;
    else if (count >= 15)
        return 7;
    else if (count == 0)
        return 5;

}
