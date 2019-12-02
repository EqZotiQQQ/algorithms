TEMPLATE = app
CONFIG += c++1z

CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        src/binary_search.cpp \
        main.cpp

INCLUDEPATH += \
    headers

HEADERS += \
    headers/binary_search.h
