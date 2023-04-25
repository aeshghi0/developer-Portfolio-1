QT       += core gui sql

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
    AdminWindow.cpp \
    LoginManager.cpp \
    LoginManager.cpp \
    ManagerWindow.cpp \
    ManagerWindow.cpp \
    User.cpp \
    User.cpp \
    dbManager.cpp \
    dbManager.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    AdminWindow.h \
    BulkClubProject.pro.user \
    Constants.h \
    LoginManager.h \
    LoginManager.h \
    ManagerWindow.h \
    ManagerWindow.h \
    User.h \
    User.h \
    bulkclubproject.h \
    constants.h \
    dbManager.h \
    dbManager.h \
    mainwindow.h

FORMS += \
    ../../Hi-Chew-CS1C-Project-2-Suhyr/AdminWindow.ui \
    ../../Hi-Chew-CS1C-Project-2-Suhyr/ManagerWindow.ui \
    ../../Hi-Chew-CS1C-Project-2-Suhyr/mainwindow.ui \
    ManagerWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
