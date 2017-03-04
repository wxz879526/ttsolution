#-------------------------------------------------
#
# Project created by QtCreator 2017-03-04T18:56:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TTClient
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    formlogin.cpp

HEADERS  += mainwindow.h \
    formlogin.h

FORMS    += mainwindow.ui \
    formlogin.ui

RESOURCES += \
    res.qrc
