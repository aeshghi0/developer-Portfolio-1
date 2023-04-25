#include "expirationSearch.h"
#include "ui_expirationSearch.h"

expirationSearch::expirationSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::expirationSearch)
{
    ui->setupUi(this);
}

expirationSearch::~expirationSearch()
{
    delete ui;
}

void expirationSearch::on_pushButton_clicked()
{
    listMembersWindow* windowPtr = new listMembersWindow(this);
    this->close();
    windowPtr->show();
}

void expirationSearch::on_pushButton_2_clicked()
{
    LoginWindow* loginPtr = new LoginWindow(this);
    this->close();
    loginPtr->show();
}

void expirationSearch::on_comboBox_month_activated(int index)
{
    if(index == 1)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '01%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 2)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '02%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 3)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '03%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 4)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '04%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 5)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '05%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 6)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '06%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 7)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '07%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 8)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '08%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 9)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '09%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 10)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '10%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 11)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '11%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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
    else if(index == 12)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member WHERE MemberExpire LIKE '12%'");
        query.exec();

        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(query.size());
        ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Expiration Date").split(";"));

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

}
