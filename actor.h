#ifndef ACTOR_H
#define ACTOR_H

#include <QString>

class Actor
{
public:
    enum Role {Admin, Operator, User};

    Actor(const QString& number, const QString& login,
          const QString& password, const QString& mail, const Role role);
    Actor();

    QString dataValidCheck(QString const &name, QString const &number, QString const &login,
                           QString const &password, QString const &rpassword, QString const &mail);

    QString roleToString(Role role);
    int setDiscount(int id_client);
    QString loadLogin();


    QString Number;
    QString Login;
    QString Password;
    QString Mail;
    Role role;
};

#endif // ACTOR_H
