#include "addSalesInfo.h"
#include "ui_addSalesInfo.h"

addSalesInfo::addSalesInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addSalesInfo)
{
    ui->setupUi(this);
}

addSalesInfo::~addSalesInfo()
{
    delete ui;
}

void addSalesInfo::on_logout_button_clicked()
{
    LoginWindow* loginPtr = new LoginWindow(this);
    this->close();
    loginPtr->show();
}

void addSalesInfo::on_back_button_clicked()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}

void addSalesInfo::on_button_submit_clicked()
{
    QString date     = ui->lineEdit_itemDate->text();
    QString memID    = ui->lineEdit_membID->text();
    QString name     = ui->lineEdit_itemName->text();
    QString cost     = ui->lineEdit_itemCost->text();
    QString itemQuan = ui->lineEdit_itemQuantity->text();

    int memID1;
    memID1 = memID.toInt();

    double cost1;
    cost1 = cost.toDouble();

    int itemQuan1;
    itemQuan1 = itemQuan.toInt();

    bool n;

    n = salesInfoManager::instance().createSalesInfo(salesInfo(date, memID1, name, cost1, itemQuan1));

    if (n == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Sale has been created!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Creation of Sale has failed!"),QMessageBox::Ok);
    }

    ui->lineEdit_itemDate->clear();
    ui->lineEdit_membID->clear();
    ui->lineEdit_itemName->clear();
    ui->lineEdit_itemCost->clear();
    ui->lineEdit_itemQuantity->clear();
}
