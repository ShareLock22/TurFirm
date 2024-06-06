#ifndef HOTELS_H
#define HOTELS_H

#include <QString>

class Hotels
{
public:
    Hotels(const QString& name, const QString& adress,
           const QString& country, const int service);
    QString dataValidCheck(const QString& name, const QString& adress,
                           const QString& country, const int service);
    Hotels();
    virtual ~Hotels(){};
    QString Name;
    QString Adress;
    QString Country;
    int Service;
};

#endif // HOTELS_H
