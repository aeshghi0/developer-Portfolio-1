#include "listInventoryWindow.h"
#include "ui_listInventoryWindow.h"

listInventoryWindow::listInventoryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listInventoryWindow)
{
    ui->setupUi(this);
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

//    QSqlQuery salesQuery;
//    salesQuery.prepare("SELECT item, quantity FROM SalesInfo ORDER BY item");
//    salesQuery.exec();

    QSqlQuery inventoryQuery;
    inventoryQuery.prepare("SELECT * FROM Inventory ORDER BY itemName");
    inventoryQuery.exec();

    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setRowCount(inventoryQuery.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Item ID; Item; Price; Quantity; Total Sales; TotalSold").split(";"));
    int i = 0;
    while(inventoryQuery.next()) {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(inventoryQuery.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(inventoryQuery.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(inventoryQuery.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(inventoryQuery.value(3).toString()));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(inventoryQuery.value(4).toString()));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(inventoryQuery.value(5).toString()));
        i++;
    }
}

listInventoryWindow::~listInventoryWindow()
{
    delete ui;
}

void listInventoryWindow::on_pushButton_back_clicked()
{
    menuManager* menuPtr = new menuManager(this);
    this->close();
    menuPtr->show();
}

void listInventoryWindow::on_pushButton_logout_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}
