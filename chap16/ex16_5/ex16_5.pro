TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()
QMAKE_CXXFLAGS += -std=gnu++0x

HEADERS += \
    print.h

