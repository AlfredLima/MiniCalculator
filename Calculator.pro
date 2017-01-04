#-------------------------------------------------
#
# Project created by QtCreator 2017-01-02T16:05:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    calculator.cpp \
    sum.cpp \
    operator.cpp \
    multiplication.cpp \
    division.cpp \
    subtraction.cpp

HEADERS  += mainwindow.h \
    calculator.h \
    sum.h \
    operator.h \
    multiplication.h \
    division.h \
    subtraction.h

FORMS    += mainwindow.ui
