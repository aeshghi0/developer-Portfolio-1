#include "addMember.h"
#include "ui_addMember.h"

addMember::addMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMember)
{
    ui->setupUi(this);
}

addMember::~addMember()
{
    delete ui;
}

void addMember::on_back_button_clicked()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}

void addMember::on_logout_button_clicked()
{
    LoginWindow* loginPtr = new LoginWindow(this);
    this->close();
    loginPtr->show();
}

void addMember::on_button_submit_clicked()
{
    QString name      = ui->lineEdit_name->text();
    QString memStatus = ui->lineEdit_memStatus->text();
    QString expDate   = ui->lineEdit_expDate->text();

    bool n;

    n = memberManager::instance().createMember(members(name, memStatus, expDate));

    if(n == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Member account has been created!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Member account creation has failed!"),QMessageBox::Ok);
    }

    ui->lineEdit_name->clear();
    ui->lineEdit_memStatus->clear();
    ui->lineEdit_expDate->clear();
}
