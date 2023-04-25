#include "homepage.h"
#include "ui_homepage.h"
#include "contactusmethods.h"
#include "pricing.h"
#include "warranty.h"
#include "customerhelp.h"
#include "productinfo.h"
#include "customerreviews.h"

#include "physicalspaces.h"
#include "login.h"
#include "pamph.h"
#include "maintanenceplan.h"
//#include "salespitch.h"

homePage::homePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::homePage)
{
    ui->setupUi(this);

    ui->label_2->setText("We are the new innovation. We have changed the way\npeople feel about their own public safety through the\nuse of smart and"
                         "technologically advanced robots. With\ndifferent purchasing, warranty, and maintanence\nplans we have a robot ready for anyone"
                         " and everyone.");
    ui->label_8->setText("We are the new innovation. We have changed the way\npeople feel about their own public safety through the\nuse of smart and"
                         "technologically advanced robots. With\ndifferent purchasing, warranty, and maintanence\nplans we have a robot ready for anyone"
                         " and everyone.");

    //Add picture
    QPixmap picture1("/Users/blakedickerson/Desktop/Pictures/1958308_1.jpg");
    int w = ui->label_pic1->width();
    int h = ui->label_pic1->height();
    ui->label_pic1->setPixmap(picture1.scaled(w, h, Qt::KeepAspectRatio));

    ui->label_pic1_2->setPixmap(picture1.scaled(w, h, Qt::KeepAspectRatio));

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

//void homePage::on_pushButton_3_clicked()
//{
//    customerList newCustomerList;
//    newCustomerList.setModal(true);
//    newCustomerList.showMaximized();
//    newCustomerList.exec();
//}

//void homePage::on_pushButton_4_clicked()
//{
//    salesPitch newSalesPitch;
//    newSalesPitch.setModal(true);
//    newSalesPitch.showMaximized();
//    newSalesPitch.exec();
//}



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

void homePage::on_pushButton_11_clicked()
{
    login log;
    log.setModal(true);
    log.showMaximized();
    log.exec();
}


void homePage::on_pushButton_12_clicked()
{
    pamph pamph;
    pamph.setModal(true);
    pamph.showMaximized();
    pamph.exec();

}

void homePage::on_pushButton_6_clicked()
{
    productInfo newProduct;
    newProduct.setModal(true);
    newProduct.showMaximized();
    newProduct.exec();
}

void homePage::on_pushButton_10_clicked()
{
    customerReviews newCust;
    newCust.setModal(true);
    newCust.showMaximized();
    newCust.exec();
}

void homePage::on_pushButton_8_clicked()
{
    maintanencePlan newMain;
    newMain.setModal(true);
    newMain.showMaximized();
    newMain.exec();
}
