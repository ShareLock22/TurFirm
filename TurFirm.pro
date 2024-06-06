QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    actor.cpp \
    addadminwindow.cpp \
    addcountry.cpp \
    addhotelwindow.cpp \
    addoperatorwindow.cpp \
    addturwindow.cpp \
    changepasswordwindow.cpp \
    confirmturwindow.cpp \
    country.cpp \
    database.cpp \
    deletewindow.cpp \
    exitwindow.cpp \
    hotelprofilewindow.cpp \
    hotels.cpp \
    loginwindow.cpp \
    main.cpp \
    mainadminwindow.cpp \
    mainturwindow.cpp \
    mainuserwindow.cpp \
    profileturwindow.cpp \
    profilewindow.cpp \
    regwindow.cpp \
    usermainwindow.cpp \
    windownavigator.cpp

HEADERS += \
    actor.h \
    addadminwindow.h \
    addcountry.h \
    addhotelwindow.h \
    addoperatorwindow.h \
    addturwindow.h \
    changepasswordwindow.h \
    confirmturwindow.h \
    country.h \
    database.h \
    deletewindow.h \
    exitwindow.h \
    hotelprofilewindow.h \
    hotels.h \
    loginwindow.h \
    mainadminwindow.h \
    mainturwindow.h \
    mainuserwindow.h \
    profileturwindow.h \
    profilewindow.h \
    regwindow.h \
    usermainwindow.h \
    windownavigator.h

FORMS += \
    addadminwindow.ui \
    addcountry.ui \
    addhotelwindow.ui \
    addoperatorwindow.ui \
    addturwindow.ui \
    changepasswordwindow.ui \
    confirmturwindow.ui \
    deletewindow.ui \
    exitwindow.ui \
    hotelprofilewindow.ui \
    loginwindow.ui \
    mainadminwindow.ui \
    mainturwindow.ui \
    mainuserwindow.ui \
    profileturwindow.ui \
    profilewindow.ui \
    regwindow.ui \
    usermainwindow.ui

TRANSLATIONS += \
    TurFirm_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
