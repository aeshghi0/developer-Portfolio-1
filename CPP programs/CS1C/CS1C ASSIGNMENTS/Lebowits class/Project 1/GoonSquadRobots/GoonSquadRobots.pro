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
    contactusmethods.cpp \
    customerhelp.cpp \
    customerlist.cpp \
    main.cpp \
    homepage.cpp \
    physicalspaces.cpp \
    pricing.cpp \
    robotcare.cpp \
    salespitch.cpp \
    standardwarranty.cpp \
    warranty.cpp

HEADERS += \
    contactusmethods.h \
    customerhelp.h \
    customerlist.h \
    homepage.h \
    physicalspaces.h \
    pricing.h \
    robotcare.h \
    salespitch.h \
    standardwarranty.h \
    warranty.h

FORMS += \
    contactusmethods.ui \
    customerhelp.ui \
    customerlist.ui \
    homepage.ui \
    physicalspaces.ui \
    pricing.ui \
    robotcare.ui \
    salespitch.ui \
    standardwarranty.ui \
    warranty.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    GoonSquadRobots.pro.user
