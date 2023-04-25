#include "deleteMember.h"
#include "ui_deleteMember.h"

deleteMember::deleteMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteMember)
{
    ui->setupUi(this);

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

deleteMember::~deleteMember()
{
    delete ui;
}

void deleteMember::on_pushButton_back_clicked()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}

void deleteMember::on_pushButton_logout_clicked()
{
    LoginWindow* loginPtr = new LoginWindow(this);
    this->close();
    loginPtr->show();
}

void deleteMember::on_pushButton_3_clicked()
{
    QString memberID = ui->lineEdit_id->text();
    int memberId;
    memberId = memberID.toInt();  // convert Qstring to int

    ui->lineEdit_id->clear();

    memberManager::instance().deleteMember(memberId);

    if(memberManager::instance().deleteMember(memberId) == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Member account has been deleted!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Member account deletion has failed!"),QMessageBox::Ok);
    }

    ui->tableWidget->clearContents();

    QSqlQuery query;
    query.prepare("SELECT MemberID AS MemberID, MemberName AS MemberName, MemberStatus AS MemberStatus, MemberExpire AS MemberExpire FROM Member");
    query.exec();

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
