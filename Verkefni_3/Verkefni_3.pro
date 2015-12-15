#-------------------------------------------------
#
# Project created by QtCreator 2015-12-10T20:48:55
#
#-------------------------------------------------

QT       += core gui webkitwidgets

QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Verkefni_3

CONFIG += console
CONFIG -= app_bundle
CONFIG += C++11

TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        models/scientist.cpp \
        repositories/scientistrepository.cpp \
        services/scientistservice.cpp \
        ui/consoleui.cpp \
        utilities/utils.cpp \
        models/computer.cpp \
        services/computerservice.cpp \
        repositories/computerrepository.cpp \
        repositories/linkrepository.cpp \
        services/linkservice.cpp \
        programwindow.cpp \
        add_computer.cpp \
        add_scientist.cpp \
    add_link.cpp \
    edit_scientist.cpp \
    edit_computer.cpp

HEADERS  += mainwindow.h \
        models/scientist.h \
        repositories/scientistrepository.h \
        utilities/utils.h \
        utilities/constants.h \
        services/scientistservice.h \
        ui/consoleui.h \
        models/computer.h \
        services/computerservice.h \
        repositories/computerrepository.h \
        repositories/linkrepository.h \
        services/linkservice.h \
        programwindow.h \
        add_computer.h \
        add_scientist.h \
    add_link.h \
    edit_scientist.h \
    edit_computer.h

FORMS    += mainwindow.ui \
    programwindow.ui \
    add_computer.ui \
    add_scientist.ui \
    add_link.ui \
    edit_scientist.ui \
    edit_computer.ui


INCLUDEPATH += models \
    repositories \
    services \
    ui

RESOURCES += \
    Resource/resource.qrc
