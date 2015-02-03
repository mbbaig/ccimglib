#-------------------------------------------------
#
# Project created by QtCreator 2015-02-02T21:03:27
#
#-------------------------------------------------

TARGET = ccimglib
TEMPLATE = lib

DEFINES += CCIMGLIB_LIBRARY

SOURCES += ccimglib.cpp

HEADERS += ccimglib.h\
        ccimglib_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
