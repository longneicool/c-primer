TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    salesdata.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    salesdata.h

