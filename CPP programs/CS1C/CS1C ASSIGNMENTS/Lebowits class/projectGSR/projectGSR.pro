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
    addcustomer.cpp \
    authorisedhomepage.cpp \
    changeCustomer.cpp \
    changecustomer2.cpp \
    contactusmethods.cpp \
    customer.cpp \
    customerhelp.cpp \
    customerleavetestomonial.cpp \
    customerreviews.cpp \
    customertestomonial.cpp \
    deletecustomer.cpp \
    listcustomers.cpp \
    login.cpp \
    main.cpp \
    homepage.cpp \
    maintanenceplan.cpp \
    pamph.cpp \
    pamphreqwindow.cpp \
    physicalspaces.cpp \
    premiumpackagepurchase.cpp \
    premiumpluspurchase.cpp \
    pricing.cpp \
    productinfo.cpp \
    purchaseclass.cpp \
    purchasemaintanenceplan.cpp \
    robotcare.cpp \
    robotcarewarrantypurchase.cpp \
    salespitch.cpp \
    standardpackagepurchase.cpp \
    standardwarranty.cpp \
    standardwarrantypurchase.cpp \
    warranty.cpp

HEADERS += \
    addcustomer.h \
    authorisedhomepage.h \
    changecustomer.h \
    changecustomer2.h \
    contactusmethods.h \
    customer.h \
    customerhelp.h \
    customerleavetestomonial.h \
    customerreviews.h \
    customertestomonial.h \
    deletecustomer.h \
    homepage.h \
    listcustomers.h \
    login.h \
    maintanenceplan.h \
    pamph.h \
    pamphreqwindow.h \
    physicalspaces.h \
    premiumpackagepurchase.h \
    premiumpluspurchase.h \
    pricing.h \
    productinfo.h \
    purchaseclass.h \
    purchasemaintanenceplan.h \
    robotcare.h \
    robotcarewarrantypurchase.h \
    salespitch.h \
    standardpackagepurchase.h \
    standardwarranty.h \
    standardwarrantypurchase.h \
    warranty.h

FORMS += \
    addcustomer.ui \
    authorisedhomepage.ui \
    changecustomer.ui \
    changecustomer2.ui \
    contactusmethods.ui \
    customerhelp.ui \
    customerleavetestomonial.ui \
    customerreviews.ui \
    deletecustomer.ui \
    homepage.ui \
    listcustomers.ui \
    login.ui \
    maintanenceplan.ui \
    pamph.ui \
    pamphreqwindow.ui \
    physicalspaces.ui \
    premiumpackagepurchase.ui \
    premiumpluspurchase.ui \
    pricing.ui \
    productinfo.ui \
    purchasemaintanenceplan.ui \
    robotcare.ui \
    robotcarewarrantypurchase.ui \
    salespitch.ui \
    standardpackagepurchase.ui \
    standardwarranty.ui \
    standardwarrantypurchase.ui \
    warranty.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    GoonSquadRobots.pro \
    sprint2.pro

DISTFILES += \
    GoonSquadRobots.pro.user \
    customerList \
    customerListInFile \
    customerListOutFile \
    giphy.gif \
    login.txt \
    projectGSR.pro.user \
    salesFromPrior12Months \
    sprint2.pro.user
