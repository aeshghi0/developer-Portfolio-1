#include "authorisedhomepage.h"
#include "ui_authorisedhomepage.h"
#include "listcustomers.h"
#include "customer.h"
#include "addcustomer.h"
#include "deletecustomer.h"
#include "changecustomer2.h"
//#include "customerlistui.h"

authorisedHomePage::authorisedHomePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::authorisedHomePage)
{
    ui->setupUi(this);
}

authorisedHomePage::~authorisedHomePage()
{
    delete ui;
}

void authorisedHomePage::on_pushButton_11_clicked()
{
    listcustomers customerOne;
    vector<customer> a;
    customerOne.copyFile(a);
    customerOne.printToScreen(a);
    customerOne.setModal(true);
    customerOne.showMaximized();
    customerOne.exec();
//    customerListUi ui;
//    QVector<customer> newCustomer;
//    ui.printFileToScreen(newCustomer);
//    ui.setModal(true);
//    ui.showMaximized();
//    ui.exec();

}


void authorisedHomePage::on_pushButton_3_clicked()
{
    addcustomer add;
    add.setModal(true);
    add.showMaximized();
    add.exec();
}

//void authorisedHomePage::on_pushButton_12_clicked()
//{
////    deletecustomer del;
////    del.setModal(true);
////    del.showMaximized();
////    del.exec();
//}

void authorisedHomePage::on_pushButton_4_clicked()
{
    deletecustomer del;
    del.setModal(true);
    del.showMaximized();
    del.exec();
}

void authorisedHomePage::on_pushButton_5_clicked()
{
    changeCustomer2 a;
    a.setModal(true);
    a.showMaximized();
    a.exec();
}
