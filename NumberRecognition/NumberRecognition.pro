#-------------------------------------------------
#
# Project created by QtCreator 2014-12-14T08:58:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NumberRecognition
TEMPLATE = app

LIBS +=  -lopencv_core \
         -lopencv_objdetect \
         -lopencv_highgui

SOURCES += main.cpp\
        mainwindow.cpp \
    processing.cpp

HEADERS  += mainwindow.h \
    processing.h

FORMS    += mainwindow.ui
