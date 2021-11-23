TARGET = WidgetMpApp
TEMPLATE = app

CONFIG += c++11

QT+= core gui widgets network

include ($$PWD/db/db.pri)
include ($$PWD/network/network.pri)
include ($$PWD/lib/lib.pri)

INCLUDEPATH += $$PWD/

SOURCES += \
    main.cpp \
    playlists_window.cpp

HEADERS += \
    playlists_window.h

FORMS += \
    playlists_window.ui
