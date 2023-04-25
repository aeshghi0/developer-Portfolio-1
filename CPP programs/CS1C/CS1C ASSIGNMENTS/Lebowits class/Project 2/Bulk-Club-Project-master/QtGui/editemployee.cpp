#include "editemployee.h"
#include "ui_editemployee.h"

editEmployee::editEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editEmployee)
{
    ui->setupUi(this);


}

editEmployee::~editEmployee()
{
    delete ui;
}

void editEmployee::on_pushButton_clicked()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}

void editEmployee::on_pushButton_2_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}
