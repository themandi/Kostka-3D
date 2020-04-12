QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Przeksztalcenia3D
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    Canvas.cpp \
    Cube.cpp \
    Triangle.cpp

HEADERS  += MainWindow.h \
    Canvas.h \
    Cube.h \
    Triangle.h

FORMS    += MainWindow.ui

RESOURCES += \
    resources.qrc
