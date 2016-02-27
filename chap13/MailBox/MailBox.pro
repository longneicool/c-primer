TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    folder.cpp \
    message.cpp

HEADERS += \
    message.h \
    folder.h

QMAKE_CXXFLAGS += -std=gnu++0x

