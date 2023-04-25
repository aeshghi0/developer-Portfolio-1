#include "addemployee.h"
#include "ui_addemployee.h"

addEmployee::addEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addEmployee)
{
    ui->setupUi(this);
}

addEmployee::~addEmployee()
{
    delete ui;
}

void addEmployee::on_back_button_clicked()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}

void addEmployee::on_logout_button_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}

void addEmployee::on_button_submit_clicked()
{
    QString userName = ui->lineEdit_username->text();
    QString passWord = ui->lineEdit_password->text();
    bool adminStat;
    bool n;

    if(ui->adminyes->isChecked())
    {
        adminStat = true;
    } else {
        adminStat = false;
    }

    n = LoginManager::instance().createUserAccount(User(userName, passWord, adminStat));

    if (n == true)
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("User account has been created!"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,QObject::tr("System Message"),tr("Creation of user account has failed!"),QMessageBox::Ok);
    }

    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
    ui->adminyes->setChecked(false);
}
