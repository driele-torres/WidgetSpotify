TARGET = WidgetMpApp
TEMPLATE = app

CONFIG += c++11

QT+= core gui widgets network

include ($$PWD/db/db.pri)
include ($$PWD/network/network.pri)
include ($$PWD/lib/lib.pri)

SOURCES += \
    main.cpp \

#    basewindow.cpp
#HEADERS += \
#    basewindow.h
#FORMS += \
#    basewindow.ui

## Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target
#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
## You can make your code fail to compile if it uses deprecated APIs.
## In order to do so, uncomment the following line.
##DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0