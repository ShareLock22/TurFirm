#include "hotels.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>
#include "database.h"

Hotels::Hotels(const QString& name, const QString& adress,
               const QString& country, const int service) {
    this -> Name = name;
    this -> Adress = adress;
    this -> Country = country;
    this -> Service = service;
}

Hotels::Hotels() {}


QString Hotels::dataValidCheck(const QString& name, const QString& adress,
                               const QString& country, const int service) {
    auto db = DataBase::getDB();

    if (name.trimmed().isEmpty()) {

        return "Имя пустое";
    }

    if (adress.trimmed().isEmpty()) {
        return "Адрес пустой";
    }

    QRegularExpression reAdress("^[0-9a-zA-Zа-яА-Я.,\\s-]+$");
    if (!reAdress.match(adress).hasMatch()) {
        return "Адрес не соответсвует формату";
    }

    if (country == "None") {
        return "Выберите страну";
    }

    if (service == 0) {
        return "Оцените качество услуг";
    }

    if (!db.uniqueHotel(name, adress)) {
        return "Такой отель уже существует";
    }
    return "Отель добавлен";
}

