#-------------------------------------------------
#
# Project created by QtCreator 2017-03-19T21:03:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LIBRARY
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    findbookwin.cpp \
    data.cpp \
    personinfo.cpp \
    AddBook2.cpp \
    inforbox.cpp \
    register.cpp \
    recharge.cpp \
    changepassword.cpp \
    bookinfo.cpp \
    log.cpp \
    borrwolist.cpp \
    returnlist.cpp \
    reservewin.cpp

HEADERS  += mainwindow.h \
    login.h \
    findbookwin.h \
    data.h \
    personinfo.h \
    AddBook2.h \
    inforbox.h \
    register.h \
    recharge.h \
    changepassword.h \
    bookinfo.h \
    log.h \
    borrwolist.h \
    returnlist.h \
    reservewin.h

FORMS    += mainwindow.ui \
    login.ui \
    findbookwin.ui \
    dialog.ui \
    borrowbookwin.ui \
    personinfo.ui \
    AddBook2.ui \
    inforbox.ui \
    register.ui \
    recharge.ui \
    changepassword.ui \
    bookinfo.ui \
    log.ui \
    borrwolist.ui \
    returnlist.ui \
    reservewin.ui

DISTFILES += \
    LIBRARY.pro.user

RESOURCES += \
    res.qrc \
    library.qrc
