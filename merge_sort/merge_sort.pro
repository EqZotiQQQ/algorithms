TEMPLATE = app
CONFIG += c++1z

CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        src/merge_sort.cpp \
        main.cpp

INCLUDEPATH += \
        headers

HEADERS += \
        headers/merge_sort.h
