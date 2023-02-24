QT       += core gui opengl widgets openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../model/model.c \
    ../../model/model_operations.c \
    ../../model/parser.c \
    main.cpp \
    mainwindow.cpp \
    model_data.cpp \
    settings_widget.cpp \
    viewer.cpp

HEADERS += \
    ../../model/model.h \
    ../../model/model_operations.h \
    ../../model/parser.h \
    mainwindow.h \
    model_data.h \
    settings_widget.h \
    viewer.h

FORMS += \
    mainwindow.ui \
    settings_widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    2.fsh \
    22.vsh

RESOURCES += \
    shaders.qrc
