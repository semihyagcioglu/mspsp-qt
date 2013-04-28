#-------------------------------------------------
#
# Project created by QtCreator 2013-04-16T22:37:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mspsp-qt-app
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    project.cpp \
    activity.cpp \
    teammember.cpp \
    settings.cpp \
    skill.cpp \
    ga.cpp \
    population.cpp \
    chromosome.cpp

HEADERS  += widget.h \
    project.h \
    activity.h \
    teammember.h \
    settings.h \
    skill.h \
    ga.h \
    population.h \
    chromosome.h

FORMS    += widget.ui
