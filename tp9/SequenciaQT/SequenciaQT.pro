QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    juego.cpp \
        secuencia.cpp \
        secuenciaimpar.cpp \
        secuenciapar.cpp \
        nuevaSecuencia.cpp \
        secuenciaLoca.cpp \
        secuenciamultiplos.cpp \
        secuenciadoble.cpp \
        posparposimpar.cpp \
        pariguala1.cpp \
        decrementoen3.cpp \
        multiplode3.cpp \
        secuenciaespejo.cpp \
        secuenciatres.cpp

HEADERS += \
    mainwindow.h \
    juego.h \
    nuevasecuencia.h \
    secuencia.h \
    secuenciaimpar.h \
    secuencialoca.h \
    secuenciapar.h \
    nuevaSecuencia.h \
    secuenciaLoca.h \
    secuenciamultiplos.h \
    secuenciadoble.h \
    posparposimpar.h \
    pariguala1.h \
    decrementoen3.h \
    multiplode3.h \
    secuenciaespejo.h \
    secuenciatres.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
