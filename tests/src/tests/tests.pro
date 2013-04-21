#-------------------------------------------------
#
# Project created by QtCreator 2013-04-21T11:47:19
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = Tests
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    main.cpp \
    ../../../app/src/mspsp-qt-app/project.cpp \
    projecttest.cpp \
    ../../../app/src/mspsp-qt-app/activity.cpp \
    activitytest.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../../../app/src/mspsp-qt-app/project.h \
    projecttest.h \
    ../../../app/src/mspsp-qt-app/activity.h \
    activitytest.h \
    autotest.h


