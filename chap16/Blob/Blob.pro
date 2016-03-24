TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    blobptr.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    blob.h \
    blobptr.h
QMAKE_CXXFLAGS += -std=gnu++0x
