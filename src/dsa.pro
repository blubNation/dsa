#-------------------------------------------------
#
# Project created by QtCreator 2017-09-16T23:05:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dsa
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    centwidget.cpp \
    createDialog/createnewhero.cpp \
    createDialog/createrace.cpp

HEADERS  += mainwindow.h \
    centwidget.h \
    json.hpp \
    json.hpp.re2c \
    createDialog/createnewhero.h \
    createDialog/createrace.h

FORMS    +=
