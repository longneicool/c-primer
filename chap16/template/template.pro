TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    salesdata.cpp

QMAKE_CXXFLAGS += -std=gnu++0x

HEADERS += \
    compare.h \
    salesdata.h
