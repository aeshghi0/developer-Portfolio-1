#include "deleteItem.h"
#include "ui_deleteItem.h"

deleteItem::deleteItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteItem)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("SELECT itemID AS itemID, itemName AS itemName, itemPrice AS itemPrice, itemQuantity AS itemQuantity FROM Inventory");
    query.exec();

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Item ID;Item Name;Item Price;Item Quantity").split(";"));

    int i=0;
    while(query.next()) {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
        i++;
    }
}

deleteItem::~deleteItem()
{
    delete ui;
}

void deleteItem::on_pushButton_back_clicked()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}

void deleteItem::on_pushButton_logout_clicked()
{
    LoginWindow* loginPtr = new LoginWindow(this);
    this->close();
    loginPtr->show();
}

void deleteItem::on_pushButton_3_clicked()
{
    QString itemID = ui->lineEdit_id->text();
    int itemId;
    itemId = itemID.toInt();  // convert Qstring to int

    ui->lineEdit_id->clear();

    inventoryManager::instance().deleteInventory(itemId);

    if(inventoryManager::instance().deleteInventory(itemId) == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Item has been deleted!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Item deletion has failed!"),QMessageBox::Ok);
    }

    ui->tableWidget->clearContents();

    QSqlQuery query;
    query.prepare("SELECT itemID AS itemID, itemName AS itemName, itemPrice AS itemPrice, itemQuantity AS itemQuantity FROM Inventory");
    query.exec();

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Item ID;Item Name;Item Price;Item Quantity").split(";"));

    int i=0;
    while(query.next()) {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
        i++;
    }
    ui->tableWidget->removeRow(i);
}
