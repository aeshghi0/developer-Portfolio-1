#include "inventorymanager.h"
#include "addItem.h"
#include "loginwindow.h"
#include "ui_addItem.h"
#include <iomanip>

addItem::addItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addItem)
{
    ui->setupUi(this);
}

addItem::~addItem()
{
    delete ui;
}

void addItem::on_back_button_clicked()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}

void addItem::on_logout_button_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}

void addItem::on_submit_button_clicked()
{
    QString itName  = ui->lineEdit_iName->text();
    QString iPrice = ui->lineEdit_iPrice->text();
    QString iQuan  = ui->lineEdit_iQuan->text();

    double itPrice;
    itPrice = iPrice.toDouble();  // convert Qstring to double

    int itQuan;
    itQuan = iQuan.toInt();      // convert Qstring to int

    bool n;

    n = inventoryManager::instance().createInventory(inventory(itName, itPrice, itQuan));

    if (n == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Item has been created!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Creation of item has failed!"),QMessageBox::Ok);
    }

    ui->lineEdit_iName->clear();
    ui->lineEdit_iPrice->clear();
    ui->lineEdit_iQuan->clear();
}
