#include "homepage.h"
#include "ui_homepage.h"
#include "contactusmethods.h"
#include "pricing.h"
#include "warranty.h"
#include "customerhelp.h"
#include "customerlist.h"
#include "physicalspaces.h"
#include "salespitch.h"

homePage::homePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::homePage)
{
    ui->setupUi(this);
}

homePage::~homePage()
{
    delete ui;
}


void homePage::on_pushButton_clicked()
{

    //open new window for the contact method
    contactUsMethods contactMethod;
    contactMethod.setModal(true);
    contactMethod.showMaximized();
    contactMethod.exec();
}
void homePage::on_pushButton_2_clicked()
{
    customerHelp newCustomerHelp;
    newCustomerHelp.setModal(true);
    newCustomerHelp.showMaximized();
    newCustomerHelp.exec();
}

void homePage::on_pushButton_3_clicked()
{
    customerList newCustomerList;
    newCustomerList.setModal(true);
    newCustomerList.showMaximized();
    newCustomerList.exec();
}

void homePage::on_pushButton_4_clicked()
{
    salesPitch newSalesPitch;
    newSalesPitch.setModal(true);
    newSalesPitch.showMaximized();
    newSalesPitch.exec();
}



void homePage::on_pushButton_5_clicked()
{
    physicalSpaces newPhyscialSpaces;
    newPhyscialSpaces.setModal(true);
    newPhyscialSpaces.showMaximized();
    newPhyscialSpaces.exec();
}


void homePage::on_pushButton_7_clicked()
{
    //opens new window for the pricing options
    pricing price;              // creates an object of type pricing
    price.setModal(true);       // .setModal(true) makes it so the other screens cannot be clicked
    price.showMaximized();      // .showMaximized makes it so it takes up the entire screen
    price.exec();
}

void homePage::on_pushButton_9_clicked()
{
    //opening a new window for the warranty page
    warranty warrantyPage;
    warrantyPage.setModal(true);
    warrantyPage.showMaximized();
    warrantyPage.exec();
}
