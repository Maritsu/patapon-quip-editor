######################################################################
# Automatically generated by qmake (3.1) Sun Nov 5 17:41:15 2023
######################################################################

TEMPLATE = app
TARGET = pqe
INCLUDEPATH += .
INCLUDEPATH += libP3Hash

# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Qt modules
QT += gui widgets

# Configuration
CONFIG += debug qt c++20

# Input
SOURCES += src/main.cpp
SOURCES += src/ui.cpp src/files.cpp
HEADERS += src/ui.hpp src/files.hpp
HEADERS += src/constants.hpp

# Forms
FORMS += src/ui/mainwidget.ui

# Output
DESTDIR = build
