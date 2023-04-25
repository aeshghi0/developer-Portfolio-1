#include "deleteemployee.h"
#include "ui_deleteemployee.h"

deleteEmployee::deleteEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteEmployee)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.prepare("SELECT UserID AS ID, Username AS Username, Password AS Password, isAdministrator AS Administrator FROM LoginInfo");
    query.exec();

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("ID;Username;Password; Administrator Status").split(";"));

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

deleteEmployee::~deleteEmployee()
{
    delete ui;
}

void deleteEmployee::on_pushButton_clicked()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}


void deleteEmployee::on_pushButton_2_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}

void deleteEmployee::on_pushButton_3_clicked()
{
    QString userID = ui->lineEdit_id->text();
    int userId;
    userId = userID.toInt();  // convert Qstring to int

    ui->lineEdit_id->clear();

    LoginManager::instance().deleteUserAccount(userId);

    if ( LoginManager::instance().deleteUserAccount(userId) == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("User account has been deleted!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("User account has failed!"),QMessageBox::Ok);
    }

    ui->tableWidget->clearContents();

    QSqlQuery query;
    query.prepare("SELECT UserID AS ID, Username AS Username, Password AS Password, isAdministrator AS Administrator FROM LoginInfo");
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
