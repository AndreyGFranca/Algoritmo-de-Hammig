#-------------------------------------------------
#
# Project created by QtCreator 2016-08-31T15:50:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AlgoritmoHamming
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    hamming.cpp \
    hammingform.cpp \
    errorform.cpp \
    paridade.cpp \
    paridadesimples.cpp \
    parform.cpp \
    parsimplesform.cpp

HEADERS  += mainwindow.h \
    hamming.h \
    hammingform.h \
    errorform.h \
    paridade.h \
    paridadesimples.h \
    parform.h \
    parsimplesform.h

FORMS    += mainwindow.ui \
    hammingform.ui \
    errorform.ui \
    parform.ui \
    parsimplesform.ui
