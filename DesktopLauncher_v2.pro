QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    consolewidget.cpp \
    main.cpp \
    mainwindow.cpp \
    optionsform.cpp \
    settingdialog.cpp

HEADERS += \
    consolewidget.h \
    jsonfile.h \
    mainwindow.h \
    optionsform.h \
    settingdialog.h \
    vlink.h

FORMS += \
    mainwindow.ui \
    optionsform.ui \
    settingdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    image/backgroundImage.png \
    styles/dark.css \

RESOURCES += \
    res.qrc
