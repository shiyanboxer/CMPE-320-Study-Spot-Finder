QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++14

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    address.cpp \
    findlocationmatches.cpp \
    initialize.cpp \
    location.cpp \
    login.cpp \
    loginPage.cpp \
    main.cpp \
    project.cpp \
    signup.cpp \
    user.cpp

HEADERS += \
    address.h \
    findlocationmatches.h \
    initialize.h \
    location.h \
    login.h \
    loginPage.h \
    signup.h \
    user.h

FORMS += \
    findlocationmatches.ui \
    loginPage.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
