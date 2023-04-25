#include "displayItem.h"
#include "ui_displayItem.h"

displayItem::displayItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::displayItem)
{
    ui->setupUi(this);
}

displayItem::~displayItem()
{
    delete ui;
}

void displayItem::on_pushButton_clicked()
{
    menuManager* menuPtr = new menuManager(this);
    this->close();
    menuPtr->show();
}

void displayItem::on_pushButton_2_clicked()
{
    LoginWindow* loginPtr = new LoginWindow(this);
    this->close();
    loginPtr->show();
}


void displayItem::on_pushButton_3_clicked()
{
    double total = 0;

    QString itemName = ui->lineEdit_itemName->text();

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QSqlQuery query;
    query.prepare("SELECT * FROM Inventory WHERE itemName = :itemName");
    query.bindValue(":itemName", itemName);
    query.exec();

    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Item ID; Item Name ; Price; Quantity; Total Sales; Total Sold").split(";"));

    int i=0;
    while(query.next()) {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(query.value(5).toString()));
        i++;

        total = total + (query.value(4).toDouble() * query.value(5).toDouble());
    }
    QString str = QString::number(total, 'f', 2);
    total = str.toDouble();
    qDebug() << str;
}
