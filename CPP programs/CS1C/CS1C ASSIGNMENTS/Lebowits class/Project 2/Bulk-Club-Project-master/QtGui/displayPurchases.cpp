#include "displayPurchases.h"
#include "ui_displayPurchases.h"
#include <iomanip>

displayPurchases::displayPurchases(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::displayPurchases)
{
    ui->setupUi(this);
    ui->label_4->hide();
}

displayPurchases::~displayPurchases()
{
    delete ui;
}

void displayPurchases::on_pushButton_clicked()
{
    menuManager* menuPtr = new menuManager(this);
    this->close();
    menuPtr->show();
}


void displayPurchases::on_pushButton_2_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}

void displayPurchases::on_pushButton_3_clicked()
{
    double total = 0;
    double salesTax = 0;
    double rebate = 0;

    QString id = ui->lineEdit_id->text();
    int ID = id.toInt();

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QSqlQuery query;
    query.prepare("SELECT p.* FROM SalesInfo p JOIN Member u ON u.memberID = p.id WHERE u.memberID = :ID");
    query.bindValue(":ID", ID);
    query.exec();

    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Date ;Item Name; Price; Quantity").split(";"));

    int i=0;
    while(query.next()) {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(4).toString()));
        i++;

        rebate = rebate + (0.04 * (query.value(3).toDouble() * query.value(4).toDouble()));

        salesTax = 0.0775 * (query.value(3).toDouble() * query.value(4).toDouble());
        total = total + salesTax + (query.value(3).toDouble() * query.value(4).toDouble());
    }
    QString str = QString::number(total, 'f', 2);
    QString tmp = QString::number(rebate, 'f', 2);
    total = str.toDouble();
    rebate = tmp.toDouble();

    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE Member SET MemberTotal = :total WHERE MemberID = :ID");
    updateQuery.bindValue(":total", total);
    updateQuery.bindValue(":ID", ID);
    updateQuery.exec();

    QSqlQuery updateRebate;
    updateRebate.prepare("UPDATE Member SET MemberRebate = :rebate WHERE MemberID = :ID AND MemberStatus = 'Executive'");
    updateRebate.bindValue(":rebate", rebate);
    updateRebate.bindValue(":ID", ID);
    updateRebate.exec();

    if(str == "0.00") {
        ui->label_4->setText("$0.00");
    } else {
        ui->label_4->setText("$" + str);
    }
       ui->label_4->repaint();
       ui->label_4->show();

    QSqlQuery notif;
    notif.prepare("SELECT * FROM Member WHERE MemberID = :ID");
    notif.bindValue(":ID", ID);
    notif.exec();

    notif.first();
    notif.setForwardOnly(true);

    qDebug() << " * NOTIF " << notif.value(2).toString();
    if(notif.value(2).toString() == "Regular" && rebate > 55.00)
    {
         QMessageBox::information(this,QObject::tr("System Message"),tr("Member should change their status to Executive!"),QMessageBox::Ok);
    }
    else if(notif.value(2).toString() == "Executive" && rebate <= 55.00)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Member should change their status to Regular!"),QMessageBox::Ok);
    }
}
