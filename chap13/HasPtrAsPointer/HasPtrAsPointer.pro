TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    hasptraspointer.cpp

HEADERS += \
    hasptraspointer.h

QMAKE_CXXFLAGS += -std=gnu++0x

