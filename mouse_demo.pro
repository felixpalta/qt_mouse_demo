#-------------------------------------------------
#
# Project created by QtCreator 2016-11-11T12:53:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mouse_demo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS +=    -Wall -Wextra -std=c++11 -pedantic \
                    -Wunreachable-code -Wshadow \
                    -Wold-style-cast -Wnon-virtual-dtor  \
                    -Woverloaded-virtual \
                    -Wenum-compare
