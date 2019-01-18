#-------------------------------------------------
#
# Project created by QtCreator 2018-12-20T19:04:46
#
#-------------------------------------------------

QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sysmic
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    field.cpp \
    robot.cpp \
    ball.cpp\
    pb/messages_robocup_ssl_wrapper.pb.cc \
    pb/messages_robocup_ssl_detection.pb.cc \
    pb/messages_robocup_ssl_geometry.pb.cc \
    pb/grSim_Commands.pb.cc \
    pb/grSim_Packet.pb.cc \
    pb/grSim_Replacement.pb.cc \
    net/robocup_ssl_client.cpp \
    net/netraw.cpp \
    net/grSim_client.cpp

HEADERS += \
        mainwindow.h \
    field.h \
    robot.h \
    ball.h\
    pb/messages_robocup_ssl_wrapper.pb.h \
    pb/messages_robocup_ssl_detection.pb.h \
    pb/messages_robocup_ssl_geometry.pb.h \
    pb/grSim_Commands.pb.h \
    pb/grSim_Packet.pb.h \
    pb/grSim_Replacement.pb.h \
    net/robocup_ssl_client.h \
    net/netraw.h \
    util/timer.h \
    util/util.h \
    net/grSim_client.h

FORMS += \
        mainwindow.ui \
    field.ui

INCLUDEPATH += include
LIBS += -lpthread \
    -L/usr/local/lib -lprotobuf -lz

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

