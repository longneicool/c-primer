TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    strvec.cpp

HEADERS += \
    strvec.h

QMAKE_CXXFLAGS += -std=gnu++0x
