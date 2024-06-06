#include "mainwindow.h"
#include "loginwindow.h"
#include "mainadminwindow.h"
#include "mainturwindow.h"
#include "mainuserwindow.h"
#include "windownavigator.h"
#include "database.h"


#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QtSql>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    auto db = DataBase::getDB();




    // ***

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "untitled_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }


    WindowNavigator _;
    return a.exec();
}
