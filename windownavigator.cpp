#include "windownavigator.h"

WindowNavigator::WindowNavigator(QObject *parent)
    : QObject{ parent }
    , loginWindow(new LoginWindow)
    , mainWindow(nullptr)
{
    connect(loginWindow, &LoginWindow::userEntered,
            this, &WindowNavigator::onUserEntered);
    LoginWindowShow();
}

void WindowNavigator::LoginWindowShow()
{
    loginWindow->show();
}


void WindowNavigator::onUserEntered(Actor::Role role)
{
    if (role == Actor::Admin) {
        adminWindow = new MainAdminWindow();
        {
            connect(adminWindow, &MainAdminWindow::logout,
                    this, &WindowNavigator::onLogout);
        }
        mainWindow = adminWindow;
    }

    else if (role == Actor::Operator) {
        operatorWindow = new MainTurWindow;
        {
            connect(operatorWindow, &MainTurWindow::logout,
                    this, &WindowNavigator::onLogout);
        }
        mainWindow = operatorWindow;
    }
    else if (role == Actor::User) {
        userWindow = new MainUserWindow;
        {
            connect(userWindow, &MainUserWindow::logout,
                    this, &WindowNavigator::onLogout);
        }
        mainWindow = userWindow;
    }


    mainWindow->show();
    loginWindow->close();

}

void WindowNavigator::onLogout(){

    mainWindow->deleteLater();
    loginWindow->show();
}

WindowNavigator::~WindowNavigator(){}
