#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QtSql>
#include <QList>
#include <QVariant>
#include <actor.h>


using TourLines = std::tuple<QString,
    QString, QString, QString, QString, QString, QString, int, int>;

using HotelLines = std::tuple<QString, QString, QString, int>;

using ActorsLines = std::tuple<QString, QString, QString, QString, QString>;

class DataBase
{
public:
    static DataBase& getDB();
    QString AuthCheck(QString const &login, QString const &password);
    void populateComboBox(QComboBox *comboBox);
    void populateComboBoxHotels(QComboBox *comboBox);

    void addActors(QString const &name, QString const &number,
                   QString const &login, QString const &password, QString const &mail, const int role);
    void addHotel(QString const &name, QString const &adress,
                  int const country, const int services);
    void addCountry(QString const &name);
    void addTur(const QString& duration, const int id_hotel, const int id_country,
                          const QString& date, const QString& climate, const int id_operator,
                          const int id_client, const int price, const int discount);

    QSqlQueryModel* modelCountry(int is_actual);
    QSqlQueryModel* modelActor(int is_actual);
    QSqlQueryModel* modelHotel(int is_actual);
    QSqlQueryModel* modelUnconfirmedTurs();
    QSqlQueryModel* modelTur(const int id_operator, const int flag);
    QSqlQueryModel* modelRoleView(const int role);
    QSqlQueryModel* modelAllTurs(int is_actual);
    QSqlQueryModel* modelConfirmedTurs(const int id_client);

    bool uniqueHotel(const QString& name, const QString& adress);
    bool uniqueActor(const QString& name, const QString& number);
    bool uniqueCountry(const QString& name);


    void delObj(const int id_obj, const QString& table, const int is_actual);
    void reHotel(const int id_hotel, const QString& name,
                           const QString& adress, const int id_country, const int services);
    void reTur(const int id_tur, const QString& duration, const QString& datee,
               const int id_hotel, const QString& climate);

    bool isActor(const QString& login, const QString& password);

    int setID(const QString& login);
    int setHotel(const QString& name);
    int setCountry(const QString& name);
    int setTur(const int id_country);
    int getIsActual(const int id_obj, const QString& table);
    QString setNameObject(const QString& table, const int id_obj);
    void updatePassword(const int id_user, const QString& password);

    void confirmTur(const int id_client, const int id_tur);
    int countToursForClient(int id_client);

    bool checkHotel(const int id_hotel, const int id_country);
    bool accIsActual(const QString& login);

    std::vector<HotelLines> getHotelInfo(const int id_hotel);
    std::vector<TourLines> getTourInfo(const int id_tur);
    std::vector<ActorsLines> getActorInfo(const int id_actor);


private:
    DataBase();
    QSqlDatabase database;
    void CreateTables();

    void createActors();
    void inflateActors();
    void inflateHotels();

    void createHotels();
    void createTurs();

    void createCountries();
    void inflateCountries();
};

#endif // DATABASE_H
