#include "database.h"

#include <QApplication>
#include <QtSql>
#include <QString>
#include <QDebug>
#include <QDir>

DataBase::DataBase() {
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("TurFirm.sqlite");

    if(!database.open()){
        qDebug() << "Не удалось открыть базу данных" << database.lastError().text();
        // TODO: throw exception;

        throw std::runtime_error("DB open failed");
    }

    CreateTables();
}

DataBase& DataBase::getDB(){
    static DataBase db;
    return db;
}

void DataBase::CreateTables() {
    createActors();
    inflateActors();


    createHotels();
    inflateHotels();

    createTurs();
    //...

    createCountries();
    inflateCountries();

}
// Значения по умолчанию

void DataBase::inflateActors(){
    QSqlQuery query(database);
    query.prepare("SELECT COUNT(*) FROM Actors;");
    if (!query.exec()) {
        qDebug() << "Не удается создать таблицу Actors";
        qDebug() << query.lastError().text();
        return;
    }

    if (query.next()) {
        const auto count = query.value(0).toInt();
        if (count == 0) {
            QSqlQuery insertQuery(database);
            insertQuery.prepare("INSERT INTO Actors (Name, Number, Login, Password, Mail, Role, Is_Actual) VALUES "
                                "('Admin', '11', 'Admin', 'Admin', 'mail', :role1, 1), "
                                "('Operator', '22', 'Operator', 'Operator','mail2', :role2, 1), "
                                "('User', '33', 'User', 'User', 'mail3', :role3, 1);");

            insertQuery.bindValue(":role1", Actor::Admin);
            insertQuery.bindValue(":role2", Actor::Operator);
            insertQuery.bindValue(":role3", Actor::User);

            if (!insertQuery.exec()) {
                qDebug() << "Не удаётся создать пользователей по умолчанию";
                qDebug() << insertQuery.lastError().text();
            }
        }
    } else {
        qDebug() << "Ошибка при получении количества актеров";
        qDebug() << query.lastError().text();
    }
}

void DataBase::inflateCountries(){
    QSqlQuery query(database);
    query.prepare("SELECT COUNT(*) FROM Countries;");
    if (!query.exec()) {
        qDebug() << "Не удается создать страны по умолчанию";
        qDebug() << query.lastError().text();
        return;
    }

    if (query.next()) {
        const auto count = query.value(0).toInt();
        if (count == 0) {
            QSqlQuery insertQuery(database);
            insertQuery.prepare("INSERT INTO Countries (Name, Is_Actual) VALUES"
                                "('None', 1), "
                                "('Россия', 1), "
                                "('Казахстан', 1), "
                                "('Беларусь', 1), "
                                "('Грузия', 1), "
                                "('Турция', 1);");
            if (!insertQuery.exec()) {
                qDebug() << "Не удаётся создать страны по умолчанию";
                qDebug() << insertQuery.lastError().text();
            }
        }
    } else {
        qDebug() << "Ошибка при получении количества стран";
        qDebug() << query.lastError().text();
    }
}

void DataBase::inflateHotels() {
    QSqlQuery query(database);
    query.prepare("SELECT COUNT(*) FROM Hotels;");
    if (!query.exec()) {
        qDebug() << "Не удается создать таблицу Hotels2";
        qDebug() << query.lastError().text();
        return;
    }

    if (query.next()) {
        const auto existingHotelsCount = query.value(0).toInt();
        if (existingHotelsCount == 0) {
            QSqlDatabase::database().transaction();
            QSqlQuery insertQuery(database);
            insertQuery.prepare("INSERT INTO Hotels (Name, Adress, ID_Country, Services, Is_Actual) VALUES "
                                "('None', 'None', 1, 0, 1); ");
            if (!insertQuery.exec()) {
                qCritical() << "Failed to insert the default hotel:" << insertQuery.lastError().text();
                QSqlDatabase::database().rollback();
                return;
            }
            QSqlDatabase::database().commit();
        }
    } else {
        qCritical() << "Error getting the number of hotels:" << query.lastError().text();
    }
}

//Создание таблиц

void DataBase::createActors()

{
        QSqlQuery query(database);
        query.prepare( "CREATE TABLE if not exists Actors ("
                            "ID INTEGER PRIMARY KEY NOT NULL UNIQUE, "
                            "Name TEXT NOT NULL, "
                            "Number TEXT NOT NULL UNIQUE, "
                            "Login TEXT NOT NULL UNIQUE, "
                            "Password TEXT NOT NULL, "
                            "Mail TEXT NOT NULL, "
                            "Role INTEGER NOT NULL,"
                            "Is_Actual INTEGER CHECK (Is_Actual IN (0, 1))); ");

        if(!query.exec()){
            qDebug() << "Не удаётся создать таблицу Actors";
            qDebug() << query.lastError();

            throw std::runtime_error("DB open failed");
        }

}

void DataBase::createHotels()
{
    QSqlQuery query(database);
    query.prepare("CREATE TABLE IF NOT EXISTS Hotels ("
                    "ID INTEGER PRIMARY KEY NOT NULL UNIQUE, "
                    "Name TEXT NOT NULL, "
                    "Adress TEXT NOT NULL UNIQUE, "
                    "ID_Country INTEGER NOT NULL, "
                    "Services INTEGER NOT NULL, "
                    "Is_Actual INTEGER CHECK (Is_Actual IN (0, 1)), "
                    "FOREIGN KEY (ID_Country) REFERENCES Countries(ID)); ");
    if(!query.exec()){
        qDebug() << "Не удаётся создать таблицу Hotels111";
        qDebug() << query.lastError();

        throw std::runtime_error("Не удалось создать таблицу отелей");
    }
}

void DataBase::createCountries(){
    QSqlQuery query(database);
    query.prepare("CREATE TABLE IF NOT EXISTS Countries ("
                    "ID INTEGER PRIMARY KEY NOT NULL UNIQUE, "
                    "Name TEXT NOT NULL UNIQUE, "
                    "Is_Actual INTEGER CHECK (Is_Actual IN (0, 1))); ");
    if(!query.exec()){
        qDebug() << "Не удаётся создать таблицу Countries";
        qDebug() << query.lastError();

        throw std::runtime_error("Не удалось создать таблицу стран");
    }
}

void DataBase::createTurs() {
    QSqlQuery query(database);
    query.prepare("CREATE TABLE IF NOT EXISTS Turs ("
                  "ID INTEGER PRIMARY KEY NOT NULL UNIQUE, "
                  "Duration TEXT NOT NULL, "
                  "ID_Hotel INTEGER NOT NULL,"
                  "ID_Country INTEGER NOT NULL, "
                  "Datee TEXT NOT NULL, "
                  "Climate TEXT NOT NULL,"
                  "ID_Client INTEGER NOT NULL, "
                  "ID_Operator INTEGER NOT NULL, "
                  "Price INTEGER NOT NULL, "
                  "Discount INTEGER, "
                  "Is_Actual INTEGER CHECK (Is_Actual IN (0, 1)), "
                  "FOREIGN KEY (ID_Hotel) REFERENCES Hotels(ID),"
                  "FOREIGN KEY (ID_Country) REFERENCES Countries(ID), "
                  "FOREIGN KEY (ID_Client) REFERENCES Actors(ID), "
                  "FOREIGN KEY (ID_Operator) REFERENCES Actors(ID));");

    if (!query.exec()) {
        qDebug() << "Не удаётся создать таблицу Turs";
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось создать таблицу отелей");
    }

}

//Заполнение таблиц

void DataBase::addActors(QString const &name, QString const &number,
                         QString const &login, QString const &password, QString const &mail, const int role){

        QSqlQuery query(database);
        query.prepare("INSERT INTO Actors (Name, Number, Login, Password, Mail, Role, Is_Actual) VALUES "
                            "(:name, :number, :login, :password, :mail, :role, 1); ");

        query.bindValue(":name", name);
        query.bindValue(":number", number);
        query.bindValue(":login", login);
        query.bindValue(":password", password);
        query.bindValue(":mail", mail);
        query.bindValue(":role", role);

        if(!query.exec()){
            qDebug() << "Не удаётся добавить пользователя";
            qDebug() << query.lastError();


    }
}


void DataBase::addHotel(QString const &name, QString const &adress, const int id_country, const int services) {

        QSqlQuery query(database);
        query.prepare("INSERT INTO Hotels (Name, Adress, ID_Country, Services, Is_Actual) VALUES "
                      "(:name, :adress, :id_country, :services, 1); ");
        query.bindValue(":name", name);
        query.bindValue(":adress", adress);
        query.bindValue(":id_country", id_country);
        query.bindValue(":services", services);

        if(!query.exec()){
            qDebug() << "Не удаётся добавить отель";
            qDebug() << query.lastError();
        }


}

void DataBase::addCountry(QString const &name){
    QSqlQuery query(database);
    query.prepare("INSERT INTO Countries (Name, Is_Actual) VALUES "
                  "(:name, 1);");

    query.bindValue(":name", name);

    if(!query.exec()){
        qDebug() << "Не удаётся добавить страну";
        qDebug() << query.lastError();
        return;
    }
}

void DataBase::addTur(const QString& duration, const int id_hotel, const int id_country,
                      const QString& date, const QString& climate, const int id_operator, const int id_client, const int price, const int discount) {
    QSqlQuery query(database);
    query.prepare("INSERT INTO Turs (Duration, ID_Hotel, ID_Country, Datee, Climate, ID_Client, ID_Operator, Price, Discount, Is_Actual) VALUES "
                  "(:duration, :id_hotel, :id_country, :datee, :climate, :id_client, :id_operator, :price, :discount, 1); ");
    query.bindValue(":duration", duration);
    query.bindValue(":id_hotel", id_hotel);
    query.bindValue(":id_country", id_country);
    query.bindValue(":climate", climate);
    query.bindValue(":datee", date);
    query.bindValue(":id_client", id_client);
    query.bindValue(":id_operator", id_operator);
    query.bindValue(":price", price);
    query.bindValue(":discount", discount);

    if (!query.exec()) {
        qDebug() << "Не удаётся добавить тур";
        qDebug() << query.lastError();
        return;
    }
}

//Методы таблиц

QString DataBase::AuthCheck(QString const &login, QString const &password){

    QSqlQuery query(database);
    if (!query.prepare("SELECT Role FROM Actors "
                       "WHERE Login = :l AND Password = :p;")) {
                return "None0";
    }

    query.bindValue(":l", login);
    query.bindValue(":p", password);

    if(!query.exec()){
        qWarning() << "Запрос не выполнен: " << query.lastError();
        database.close();
        return "None1";
    }


    if(query.first()){
        QString role = query.value(0).toString();
        return role;
    }
    return "None2";
}

bool DataBase::accIsActual(const QString& login) {
    QSqlQuery query(database);
    query.prepare("SELECT Is_Actual FROM Actors WHERE Login = :login");
    query.bindValue(":login", login);

    if (query.exec()) {
        if (query.next()) {
            int isActual = query.value(0).toInt();
            return isActual == 1;
        }
    } else {
        qDebug() << "Error executing query:" << query.lastError().text();
    }

    return false;
}

void DataBase::populateComboBox(QComboBox *comboBox) {
    QSqlQuery query(database);
    query.prepare("SELECT Name FROM Countries ORDER BY Name; ");

    if (!query.exec()) {
        qDebug() << "Ошибка при выполнении запроса к базе данных";
        qDebug() << query.lastError().text();
        return;
    }

    comboBox->clear(); // Очистить список в QComboBox

    while (query.next()) {
        QString name = query.value(0).toString();
        comboBox->addItem(name); // Добавить значение в QComboBox
    }
}

void DataBase::populateComboBoxHotels(QComboBox *comboBox) {
    QSqlQuery query(database);
    query.prepare("SELECT Name FROM Hotels ORDER BY Name; ");

    if (!query.exec()) {
        qDebug() << "Ошибка при выполнении запроса к базе данных";
        qDebug() << query.lastError().text();
        return;
    }

    comboBox->clear(); // Очистить список в QComboBox

    while (query.next()) {
        QString name = query.value(0).toString();
        comboBox->addItem(name); // Добавить значение в QComboBox
    }
}

//модели

QSqlQueryModel* DataBase::modelCountry(const int is_actual){
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    if (is_actual != 2) {
    query.prepare("SELECT Name FROM Countries WHERE Is_Actual = :is_actual ORDER BY Name; ");
    query.bindValue(":is_actual", is_actual);
    if (!query.exec()) {
        // Обработка ошибки выполнения запроса
        qDebug() << "Ошибка модели стран:" << query.lastError().text();
        return nullptr;
    }
    model->setQuery(query);
    }

    else {
        query.prepare("SELECT Name FROM Countries ORDER BY Name; ");
        if (!query.exec()) {
            // Обработка ошибки выполнения запроса
            qDebug() << "Ошибка модели стран:" << query.lastError().text();
            return nullptr;
        }
        model->setQuery(query);
    }

    return model;
}

QSqlQueryModel* DataBase::modelActor(const int is_actual) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    if (is_actual != 2) {
        query.prepare("SELECT * FROM Actors WHERE Is_Actual = :is_actual ORDER BY Name, Role; ");
        query.bindValue(":is_actual", is_actual);
        if (!query.exec()) {
            // Обработка ошибки выполнения запроса
            qDebug() << "Ошибка модели пользователей:" << query.lastError().text();
            return nullptr;
        }
    }
    else {
        query.prepare("SELECT * FROM Actors ORDER BY Name, Role; ");
        if (!query.exec()) {
            // Обработка ошибки выполнения запроса
            qDebug() << "Ошибка модели пользователей:" << query.lastError().text();
            return nullptr;
    }
    model->setQuery(query);
    return model;
    }
}

QSqlQueryModel* DataBase::modelHotel(int is_actual) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    if (is_actual != 2) {
        query.prepare("SELECT Name FROM Hotels WHERE Is_Actual = :is_actual ORDER BY Name; ");
        query.bindValue(":is_actual", is_actual);
        if (!query.exec()) {
            // Обработка ошибки выполнения запроса
            qDebug() << "Ошибка модели отелей:" << query.lastError().text();
            return nullptr;
        }
    }
    else {
        query.prepare("SELECT Name FROM Hotels ORDER BY Name; ");
        if (!query.exec()) {
            // Обработка ошибки выполнения запроса
            qDebug() << "Ошибка модели отелей:" << query.lastError().text();
            return nullptr;
        }
    }

    model->setQuery(query);
    return model;
}

QSqlQueryModel* DataBase::modelTur(const int id_operator, const int flag) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    if (flag == 2) {
        query.prepare("SELECT Countries.Name "
                      "FROM Turs "
                      "JOIN Countries ON Turs.ID_Country = Countries.ID "
                      "WHERE Turs.ID_Operator = :id_operator;");
        query.bindValue(":id_operator", id_operator);

        if (query.exec() || query.first()) {
            model->setQuery(query);
        } else {
            qDebug() << "Error executing query:" << query.lastError().text();
        }
    }
    if (flag == 1) {
        query.prepare("SELECT Countries.Name "
                        "FROM Turs "
                        "JOIN Countries ON Turs.ID_Country = Countries.ID "
                        "WHERE Turs.ID_Operator = :id_operator AND Turs.ID_Client != 3;");
        query.bindValue(":id_operator", id_operator);
        if (query.exec() || query.first()) {
            model->setQuery(query);
        } else {
            qDebug() << "Error executing query:" << query.lastError().text();
        }
    }
    if (flag == 0) {        query.prepare("SELECT Countries.Name "
                      "FROM Turs "
                      "JOIN Countries ON Turs.ID_Country = Countries.ID "
                      "WHERE Turs.ID_Operator = :id_operator AND Turs.ID_Client == 3;");
        query.bindValue(":id_operator", id_operator);
        if (query.exec() || query.first()) {
            model->setQuery(query);
        } else {
            qDebug() << "Error executing query:" << query.lastError().text();
        }
    }

    return model;
}

QSqlQueryModel* DataBase::modelRoleView(const int role) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM Actors WHERE Role = :role ORDER BY Name;");
    query.bindValue(":role", role);
    if(!query.exec() || !query.first()) {
        qDebug() << "Ошибка создания модели роли";
    }
    model->setQuery(query);
    return model;
}

QSqlQueryModel* DataBase::modelUnconfirmedTurs() {
    QSqlQueryModel* model = new QSqlQueryModel;
    QSqlQuery query;
    query.prepare("SELECT Countries.Name "
                  "FROM Turs "
                  "JOIN Countries ON Turs.ID_Country = Countries.ID "
                  "WHERE ID_Client = 3 AND Is_Actual = 1; ");

    if (!query.exec() || !query.first()) {
        qDebug() << "Ошибка создания модели туров для клиентов";
    }
    model->setQuery(query);
    return model;
}

QSqlQueryModel* DataBase::modelAllTurs(int is_actual) {
    QSqlQueryModel* model = new QSqlQueryModel;
    QSqlQuery query;
    if (is_actual != 2) {
        query.prepare("SELECT Countries.Name "
                      "FROM Turs "
                      "JOIN Countries ON Turs.ID_Country = Countries.ID "
                      "WHERE Turs.Is_Actual = :is_actual; ");
        query.bindValue(":is_actual", is_actual);
    if (!query.exec()) {
        qDebug() << "Ошибка создания модели туров для клиентов 1";
        }
    }
    else {
        query.prepare("SELECT Countries.Name "
                      "FROM Turs "
                      "JOIN Countries ON Turs.ID_Country = Countries.ID; ");
        if (!query.exec()) {
            qDebug() << "Ошибка создания модели туров для клиентов 2";
        }
    }
    model->setQuery(query);
    return model;
}

QSqlQueryModel* DataBase::modelConfirmedTurs(const int id_client) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
        query.prepare("SELECT Countries.Name "
                      "FROM Turs "
                      "JOIN Countries ON Turs.ID_Country = Countries.ID "
                      "WHERE Turs.ID_Client = :id_client;");
        query.bindValue(":id_client", id_client);

        if (query.exec() || query.first()) {
            model->setQuery(query);
        }
        else
        {
            qDebug() << "Error executing query:" << query.lastError().text();
        }
    return model;
}

//проверка уникальности

bool DataBase::uniqueHotel(const QString& name, const QString& adress) {

    QSqlQuery queryName(database);
    queryName.prepare("SELECT COUNT(*) FROM Hotels WHERE Name = :name");
    queryName.bindValue(":name", name);
    if (!queryName.exec() || !queryName.next() || queryName.value(0).toInt() > 0) {
        return false;
    }

    QSqlQuery queryAdress(database);
    queryAdress.prepare("SELECT COUNT(*) FROM Hotels WHERE Adress = :adress");
    queryAdress.bindValue(":adress", adress);
    if (!queryAdress.exec() || !queryAdress.next() || queryAdress.value(0).toInt() > 0) {
        return false;
    }
    return true;
}

bool DataBase::uniqueActor(const QString& login, const QString& number) {
    // Проверяем уникальность логина
    QSqlQuery queryLogin(database);
    queryLogin.prepare("SELECT COUNT(*) FROM Actors WHERE Login = :login AND Is_Actual = 1");
    queryLogin.bindValue(":login", login);
    if (!queryLogin.exec() || !queryLogin.next()) {
        return false;
    }

    if (queryLogin.value(0).toInt() > 0) {
        // Если есть запись с таким логином и Is_Actual = 1, возвращаем false
        return false;
    }

    // Если есть запись с таким логином и Is_Actual = 0, обновляем Is_Actual на 1
    queryLogin.prepare("UPDATE Actors SET Is_Actual = 1 WHERE Login = :login AND Is_Actual = 0");
    queryLogin.bindValue(":login", login);
    if (!queryLogin.exec()) {
        // Если обновление не удалось, возвращаем false
        return false;
    }

    // Проверяем уникальность номера телефона
    QSqlQuery queryNumber(database);
    queryNumber.prepare("SELECT COUNT(*) FROM Actors WHERE Number = :number AND Is_Actual = 1");
    queryNumber.bindValue(":number", number);
    if (!queryNumber.exec() || !queryNumber.next()) {
        return false;
    }

    if (queryNumber.value(0).toInt() > 0) {
        // Если есть запись с таким номером телефона и Is_Actual = 1, возвращаем false
        return false;
    }

    // Если обновление прошло успешно, возвращаем false, так как запись уже существует
    return true;
}

bool DataBase::uniqueCountry(const QString& name) {
    QSqlQuery query(database);
    query.prepare("SELECT COUNT(*) FROM Countries WHERE Name = :name AND Is_Actual = 1");
    query.bindValue(":name", name);

    if (!query.exec() || !query.next()) {
        return false;
    }

    if (query.value(0).toInt() > 0) {
        // Если есть запись с таким именем и Is_Actual = 1, возвращаем false
        return false;
    }

    // Если есть запись с таким именем и Is_Actual = 0, обновляем Is_Actual на 1
    else {
        query.prepare("UPDATE Countries SET Is_Actual = 1 WHERE Name = :name AND Is_Actual = 0");
        query.bindValue(":name", name);

        if (!query.exec()) {
            return false;
        }
        return false;
    }

    // Если нет записей с таким именем или они есть, но Is_Actual = 0, возвращаем true
    return true;
}

//удаление
void DataBase::delObj(const int id_obj, const QString& table, const int is_actual) {
    QSqlQuery queryDelete(database);
    if (is_actual == 1) {
    queryDelete.prepare(QString("UPDATE %1 "
                                "SET Is_Actual = 0 "
                                "WHERE ID = :id_obj;").arg(table));
    queryDelete.bindValue(":id_obj", id_obj);
        if (!queryDelete.exec()) {
            qDebug() << "Ошибка при удалении объекта";
            qDebug() << queryDelete.lastError().text();
            return;
        }
    }
    if (is_actual == 0) {
        queryDelete.prepare(QString("UPDATE %1 "
                                    "SET Is_Actual = 1 "
                                    "WHERE ID = :id_obj;").arg(table));
        queryDelete.bindValue(":id_obj", id_obj);
        if (!queryDelete.exec()) {
            qDebug() << "Ошибка при восстанолвения объекта";
            qDebug() << queryDelete.lastError().text();
            return;
        }
    }
}

void DataBase::reHotel(const int id_hotel, const QString& name, const QString& adress, const int id_country, const int services) {
    QSqlQuery queryRenew(database);
    queryRenew.prepare("UPDATE Hotels "
                        "SET Name = :name, Adress = :adress, ID_Country = :id_country, Services = :services "
                        "WHERE ID = :id_hotel;");
    queryRenew.bindValue(":name", name);
    queryRenew.bindValue(":adress", adress);
    queryRenew.bindValue(":id_country", id_country);
    queryRenew.bindValue(":services", services);
    queryRenew.bindValue(":id_hotel", id_hotel);
    if(!queryRenew.exec()) {
        qDebug() << "Не удается обновить данные отеля";
        qDebug() << queryRenew.lastError().text();
        return;
    }
}

void DataBase::reTur(const int id_tur, const QString& duration, const QString& datee,
                     const int id_hotel, const QString& climate) {

    QSqlQuery query(database);
    query.prepare("UPDATE Turs "
                    "SET Duration = :duration, Datee = :datee, ID_Hotel = :id_hotel, Climate = :climate "
                    "WHERE ID = :id_tur;");
    query.bindValue(":duration", duration);
    query.bindValue(":datee", datee);
    query.bindValue(":id_hotel", id_hotel);
    query.bindValue(":climate", climate);
    query.bindValue(":id_tur", id_tur);
    if(!query.exec()) {
        qDebug() << "Не удается обновить данные тура";
        qDebug() << query.lastError().text();
        return;
    }
}
//существование пользователя

bool DataBase::isActor(const QString& login, const QString& password)
{
    bool flag = false;
    QSqlQuery queryLogin(database);
    queryLogin.prepare("SELECT COUNT(*) FROM Actors WHERE Login = :login");
    queryLogin.bindValue(":login", login);
    if (!queryLogin.exec() || !queryLogin.next() || queryLogin.value(0).toInt() == 1) {
        flag = true;
    }
    else flag = false;

    QSqlQuery queryPassword(database);
    queryPassword.prepare("SELECT COUNT(*) FROM Actors WHERE Password = :password");
    queryPassword.bindValue(":password", password);
    if (!queryPassword.exec() || !queryPassword.next() || queryPassword.value(0).toInt() == 1) {
        flag = true;
    }
    else flag = false;

    return flag;
}

int DataBase::setID(const QString& login) {
    QSqlQuery query(database);
    query.prepare("SELECT ID FROM Actors WHERE Login = :login");
    query.bindValue(":login", login);
    if (!query.exec()) {
        qDebug() << "Ошибка получения пользователя";
        qDebug() << query.lastError().text();
        return 0;
    }
    if(query.first()){
        int id = query.value(0).toInt();
        return id;
    }
    return 0;
}

int DataBase::setHotel(const QString& name) {
    QSqlQuery query(database);
    query.prepare("SELECT ID FROM Hotels WHERE Name = :name");
    query.bindValue(":name", name);
    if (!query.exec()) {
        qDebug() << "Ошибка получения отеля";
        qDebug() << query.lastError().text();
        return 0;
    }
    if (query.first()) {
        int id = query.value(0).toInt();
        return id;
    }
    return 0;
}

int DataBase::setCountry(const QString& name) {
    QSqlQuery query(database);
    query.prepare("SELECT ID FROM Countries WHERE Name = :name");
    query.bindValue(":name", name);
    if (!query.exec()) {
        qDebug() << "Ошибка получения страны";
        qDebug() << query.lastError().text();
        return 0;
    }
    if (query.first()) {
        int id = query.value(0).toInt();
        return id;
    }
    return 0;

}

int DataBase::setTur(const int id_country) {
    QSqlQuery query(database);
    query.prepare("SELECT ID FROM Turs WHERE ID_Country = :id_country");
    query.bindValue(":id_country", id_country);
    if (!query.exec()) {
        qDebug() << "Ошибка получения тура";
        qDebug() << query.lastError().text();
        return 0;
    }
    if (query.first()) {
        int id = query.value(0).toInt();
        return id;
    }
    return 0;
}


void DataBase::confirmTur(const int id_client, const int id_tur) {
    QSqlQuery query(database);
    query.prepare("UPDATE Turs "
                  "SET ID_Client = :id_client "
                  "WHERE ID = :id_tur;");
    query.bindValue(":id_client", id_client);
    query.bindValue(":id_tur", id_tur);
    if (!query.exec()) {
        qDebug() << "Ошибка оформления путевки";
        qDebug() << query.lastError().text();
        return;
    }
}

int DataBase::countToursForClient(int id_client) {
    int tourCount = 0;

    QSqlQuery query(database);
    query.prepare("SELECT COUNT(*) FROM Tours WHERE ID_Client = :id_client");
    query.bindValue(":id_client", id_client);

    if (!query.exec()) {
        qDebug() << "Failed to execute query on Tours table:" << query.lastError().text();
        return tourCount;
    }

    if (query.next()) {
        tourCount = query.value(0).toInt();
    }

    return tourCount;
}

//проверка связей
bool DataBase::checkHotel(const int id_hotel, const int id_country) {
    QSqlQuery query(database);
    query.prepare("SELECT ID_Country FROM Hotels WHERE ID = :id_hotel");
    query.bindValue(":id_hotel", id_hotel);
    if (!query.exec()) {
        qDebug() << "Ошибка получения тура";
        qDebug() << query.lastError().text();
    }
    if (query.first()) {
        auto str_country = query.value(0).toInt();
            if (str_country == id_country) {
            return true;
        }
    }
    return false;
}

//вектор

std::vector<HotelLines> DataBase::getHotelInfo(const int id_hotel) {
    std::vector<HotelLines> hotelInfo;

    QSqlQuery query(database);
    query.prepare("SELECT Hotels.Name, Hotels.Adress, Countries.Name, Hotels.Services "
                  "FROM Hotels "
                  "JOIN Countries ON Hotels.ID_Country = Countries.ID "
                  "WHERE Hotels.ID = :id_hotel; ");
    query.bindValue(":id_hotel", id_hotel);

    if (!query.exec()) {
        qDebug() << "Не удалось выполнить запрос к таблице Hotels:" << query.lastError().text();
        return hotelInfo;
    }

    while (query.next()) {
        QString name = query.value("Name").toString();
        QString address = query.value("Adress").toString();
        QString countryName = query.value("Countries.Name").toString();
        int service = query.value("Services").toInt();
        hotelInfo.emplace_back(name, address, countryName, service);
    }

    return hotelInfo;
}

std::vector<TourLines> DataBase::getTourInfo(const int id_tur) {
    std::vector<TourLines> tourInfo;

    QSqlQuery query(database);
    query.prepare("SELECT Turs.Duration, Turs.Climate, Turs.Datee, "
                  "Hotels.Name AS HotelName, Countries.Name AS CountryName, "
                  "Actors.Name AS OperatorName, Clients.Name AS ClientName, "
                  "Turs.Price, Turs.Discount "
                  "FROM Turs "
                  "JOIN Hotels ON Turs.ID_Hotel = Hotels.ID "
                  "JOIN Countries ON Turs.ID_Country = Countries.ID "
                  "JOIN Actors ON Turs.ID_Operator = Actors.ID "
                  "JOIN Actors AS Clients ON Turs.ID_Client = Clients.ID "
                  "WHERE Turs.ID = :id_tur");
    query.bindValue(":id_tur", id_tur);

    if (!query.exec()) {
        qDebug() << "Не удалось выполнить запрос к таблице Turs:" << query.lastError().text();
        return tourInfo;
    }

    while (query.next()) {
        QString duration = query.value("Duration").toString();
        QString climate = query.value("Climate").toString();
        QString date = query.value("Datee").toString();
        QString hotelName = query.value("HotelName").toString();
        QString countryName = query.value("CountryName").toString();
        QString operatorName = query.value("OperatorName").toString();
        QString clientName = query.value("ClientName").toString();
        int price = query.value("Price").toInt();
        int discount = query.value("Discount").toInt();
        tourInfo.emplace_back(duration, climate, date, hotelName, countryName, operatorName, clientName, price, discount);
    }

    return tourInfo;
}

std::vector<ActorsLines> DataBase::getActorInfo(const int id_actor) {
    std::vector<ActorsLines> actorInfo;

    QSqlQuery query(database);
    query.prepare("SELECT Name, Number, Login, Mail, Password "
                  "FROM Actors "
                  "WHERE ID = :id_actor");
    query.bindValue(":id_actor", id_actor);

    if (!query.exec()) {
        qDebug() << "Failed to execute query on Actors table:" << query.lastError().text();
        return actorInfo;
    }

    while (query.next()) {
        QString name = query.value("Name").toString();
        QString number = query.value("Number").toString();
        QString login = query.value("Login").toString();
        QString mail = query.value("Mail").toString();
        QString password = query.value("Password").toString();
        actorInfo.emplace_back(name, number, login, mail, password);
    }

    return actorInfo;
}

QString DataBase::setNameObject(const QString& table, const int id_obj) {
    QSqlQuery querySelect(database);
    querySelect.prepare(QString("SELECT Name "
                                "FROM %1 "
                                "WHERE ID = :id_obj;").arg(table));
    querySelect.bindValue(":id_obj", id_obj);

    if (!querySelect.exec()) {
        qDebug() << "Ошибка при выборке имени объекта";
        qDebug() << querySelect.lastError().text();
        return QString();
    }

    if (querySelect.next()) {
        return querySelect.value(0).toString();
    } else {
        qDebug() << "Не найден объект с ID" << id_obj;
        return QString();
    }
}

void DataBase::updatePassword(const int id_user, const QString& password) {
    QSqlQuery queryUpdate(database);
    queryUpdate.prepare(QString("UPDATE Actors "
                                "SET Password = :password "
                                "WHERE ID = :id_user;"));
    queryUpdate.bindValue(":password", password);
    queryUpdate.bindValue(":id_user", id_user);

    if (!queryUpdate.exec()) {
        qDebug() << "Ошибка при обновлении пароля";
        qDebug() << queryUpdate.lastError().text();
    } else {
        qDebug() << "Пароль успешно обновлен для пользователя с ID" << id_user;
    }
}

int DataBase::getIsActual(const int id_obj, const QString& table) {
    int isActual = 0;
    QSqlQuery query(database);
    query.prepare(QString("SELECT Is_Actual FROM %1 WHERE ID = :id_obj;").arg(table));
    query.bindValue(":id_obj", id_obj);
    if (query.exec()) {
        if (query.next()) {
            isActual = query.value(0).toInt();
        } else {
            qDebug() << "Объект не найден в таблице" << table;
        }
    } else {
        qDebug() << "Ошибка при выборке данных из таблицы" << table;
        qDebug() << query.lastError().text();
    }
    return isActual;
}

