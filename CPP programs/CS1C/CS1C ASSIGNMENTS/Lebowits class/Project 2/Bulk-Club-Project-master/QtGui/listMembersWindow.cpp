#include "listMembersWindow.h"
#include "ui_listMembersWindow.h"

listMembersWindow::listMembersWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listMembersWindow)
{
    ui->setupUi(this);
}

listMembersWindow::~listMembersWindow()
{
    delete ui;
}

void listMembersWindow::on_BackButton_clicked()
{
    menuManager* menuPtr = new menuManager(this);
    this->close();
    menuPtr->show();
}

void listMembersWindow::on_Logout_clicked()
{
    LoginWindow* loginPtr = new LoginWindow(this);
    this->close();
    loginPtr->show();
}

void listMembersWindow::on_allMembersButton_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QSqlQuery query;
    query.prepare("SELECT MemberID AS MemberID, MemberName AS MemberName, MemberStatus AS MemberStatus, MemberExpire AS MemberExpire FROM Member");
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

void listMembersWindow::on_comboBox_activated(int index)
{
    if(index == 0)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member ORDER BY MemberID");
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
    else if(index == 1)
    {
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        QSqlQuery query;
        query.prepare("SELECT * FROM Member ORDER BY MemberStatus");
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

void listMembersWindow::on_searchExpirationButton_clicked()
{
    expirationSearch* menu = new expirationSearch(this);
    this->close();
    menu->show();
}

void listMembersWindow::on_pushButton_2_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QSqlQuery query;
    query.prepare("SELECT * FROM Member WHERE MemberStatus LIKE 'E%'");
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

void listMembersWindow::on_pushButton_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QSqlQuery query;
    query.prepare("SELECT * FROM Member WHERE MemberStatus LIKE 'R%'");
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

void listMembersWindow::on_getMemberPurchasesButton_clicked()
{
    displayPurchases* displayPtr = new displayPurchases(this);
    this->close();
    displayPtr->show();
}

void listMembersWindow::on_getRebatesButton_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QSqlQuery query;
    query.prepare("SELECT * FROM Member WHERE MemberStatus LIKE 'E%' ORDER BY MemberID");
    query.exec();

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Member ID;Member Name;Member Status; Rebate;").split(";"));

    int i=0;
    while(query.next()) {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(query.value(4).toString()));
        i++;
    }
}
