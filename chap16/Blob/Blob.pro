TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    blob.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    blob.h
QMAKE_CXXFLAGS += -std=gnu++0x
