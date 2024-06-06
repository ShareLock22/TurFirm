#ifndef WINDOWNAVIGATOR_H
#define WINDOWNAVIGATOR_H

#include <QObject>
#include <QMainWindow>

#include "loginwindow.h"
#include "mainadminwindow.h"
#include "mainturwindow.h"
#include "mainuserwindow.h"
#include "exitwindow.h"
#include "profile.h"
#include "actor.h"
#include "database.h"


class LoginWindow;
class MainAdminWindow;
class MainTurWindow;
class MainUserWindow;
class ExitWindow;

class Actor;

class WindowNavigator : public QObject
{
    Q_OBJECT
public:
    explicit WindowNavigator(QObject *parent = nullptr);
    void LoginWindowShow();
    virtual ~WindowNavigator();
private:
    DataBase *db;
    LoginWindow* loginWindow;
    QMainWindow* mainWindow;
    MainAdminWindow* adminWindow;
    MainTurWindow* operatorWindow;
    MainUserWindow* userWindow;
    ExitWindow* exitWindow;



private slots:
    void onUserEntered(Actor::Role);
    void onLogout();

};

#endif // WINDOWNAVIGATOR_H
