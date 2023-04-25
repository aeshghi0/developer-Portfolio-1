#-------------------------------------------------
#
# Project created by QtCreator 2018-02-15T18:43:17
#
#-------------------------------------------------

QT       += core gui widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bulkproject
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


SOURCES += \
        main.cpp \
    dbmanager.cpp \
    user.cpp \
    loginmanager.cpp \
    loginwindow.cpp \
    employeetable.cpp \
    deleteemployee.cpp \
    editemployee.cpp \
    addemployee.cpp \
    menuAdministrator.cpp \
    menuManager.cpp \
    members.cpp \
    memberManager.cpp \
    addMember.cpp \
    deleteMember.cpp \
    memberTable.cpp \
    listMembersWindow.cpp \
    expirationSearch.cpp \
    inventory.cpp \
    inventoryManager.cpp \
    addItem.cpp \
    deleteItem.cpp \
    inventoryTable.cpp \
    displayPurchases.cpp \
    listInventoryWindow.cpp \
    displayItem.cpp \
    addSalesInfo.cpp \
    salesInfo.cpp \
    salesInfoManager.cpp \
    newsales.cpp

HEADERS += \
    dbmanager.h \
    constants.h \
    loginmanager.h \
    user.h \
    loginwindow.h \
    employeetable.h \
    deleteemployee.h \
    editemployee.h \
    addemployee.h \
    menuAdministrator.h \
    menuManager.h \
    members.h \
    memberManager.h \
    addMember.h \
    deleteMember.h \
    memberTable.h \
    listMembersWindow.h \
    expirationSearch.h \
    inventory.h \
    inventoryManager.h \
    addItem.h \
    deleteItem.h \
    inventoryTable.h \
    displayPurchases.h \
    listInventoryWindow.h \
    displayItem.h \
    addSalesInfo.h \
    salesInfo.h \
    salesInfoManager.h \
    newsales.h

FORMS += \
    loginwindow.ui \
    deleteemployee.ui \
    editemployee.ui \
    addemployee.ui \
    menuAdministrator.ui \
    menuManager.ui \
    addMember.ui \
    deleteMember.ui \
    listMembersWindow.ui \
    expirationSearch.ui \
    addItem.ui \
    deleteItem.ui \
    displayPurchases.ui \
    listInventoryWindow.ui \
    displayItem.ui \
    addSalesInfo.ui \
    newsales.ui

RESOURCES +=
