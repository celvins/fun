#-------------------------------------------------
#
# Project created by QtCreator 2016-06-05T12:27:31
#
#-------------------------------------------------

QT       -= gui

TARGET = fun
TEMPLATE = lib

DEFINES += FUN_LIBRARY

SOURCES += fun.cpp

HEADERS += fun.h\
        fun_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
