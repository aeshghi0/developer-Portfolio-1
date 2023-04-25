#include "newsales.h"
#include "ui_newsales.h"
#include <QDate>


newSales::newSales(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newSales)
{
    ui->setupUi(this);
    ui->label_3->hide();
    ui->label_exec->hide();
    ui->label_reg->hide();

}

QString newSales::nameOfCustomer(int id){
    QSqlQuery query;
    query.prepare("SELECT * FROM Member");
    query.exec();
    QString returnName;

    query.first();
    query.setForwardOnly(true);

    if(id == query.value(0)){
        returnName = query.value(1).toString();
    }
    else{
        while(query.next()){
            if(id == query.value(0)){
                returnName = query.value(1).toString();
            }
        }
    }
    return returnName;


}
QString newSales::memberStatus(int id){
    QSqlQuery query;
    query.prepare("SELECT * FROM Member");
    query.exec();
    QString returnStatus;

    query.first();
    query.setForwardOnly(true);
    if(id == query.value(0)){
        returnStatus = query.value(2).toString();
    }
    else{
        while(query.next()){
            if(id == query.value(0)){
                returnStatus = query.value(2).toString();
            }
        }
    }
    return returnStatus;
}

newSales::~newSales()
{
    delete ui;
}


void newSales::on_pushButton_back_clicked()
{
    menuManager* menuPtr = new menuManager(this);
    this->close();
    menuPtr->show();
}


void newSales::on_pushButton_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    int tempId, eMem, rMem;

    double total = 0.00;

    QDate date;
    QString tempName, tempStatus;
    QSqlQuery query;

    date = ui->dateEdit_chooseDate->date();

    query.prepare("SELECT * FROM SalesInfo WHERE date = :date");
    query.bindValue(":date", date.toString("MM/dd/yyyy"));
    query.exec();

    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Date;Id;Item;Cost;Quantity;Member;Member Status").split(";"));

    tempId = 0;
    eMem = 0;
    rMem = 0;

    int i = 0;
    while (query.next()) {
        //date = QDate::fromString(query.value(0).toString(),"mm/dd/yyyy");
        tempId = query.value(0).toInt();
        tempStatus = memberStatus(tempId);

        if(ui->comboBox->currentText() == tempStatus || ui->comboBox->currentText() == "N/A"){
            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(1).toString()));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(0).toString()));

            ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(query.value(4).toString()));
            tempName = nameOfCustomer(tempId);


            if(tempStatus == "Executive"){
                ++eMem;
            }
            else{
                ++rMem;
            }

            ui->tableWidget->setItem(i,5,new QTableWidgetItem(tempName));
            ui->tableWidget->setItem(i,6,new QTableWidgetItem(tempStatus));

            total += (query.value(3).toDouble() * query.value(4).toInt());
        }


    }

    QString str = QString::number(total, 'f', 2);
    QString e = QString::number(eMem);
    QString r = QString::number(rMem);
    total = str.toDouble();
    if(str == "0.00") {
        ui->label_3->setText("$0.00");
    } else {
        ui->label_3->setText("$" + str);
    }
    ui->label_exec->setText(e);
    ui->label_reg->setText(r);
    ui->label_3->repaint();
    ui->label_3->show();
    ui->label_exec->repaint();
    ui->label_exec->show();
    ui->label_reg->repaint();
    ui->label_reg->show();

}

