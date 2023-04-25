#include "menuAdministrator.h"
#include "ui_menuAdministrator.h"

menuAdministrator::menuAdministrator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuAdministrator)
{
    ui->setupUi(this);
}

menuAdministrator::~menuAdministrator()
{
    delete ui;
}

void menuAdministrator::on_pushButton_2_clicked()
{
    addEmployee* addEmployeePtr = new addEmployee(this);
    this->close();
    addEmployeePtr->show();
}

void menuAdministrator::on_pushButton_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}

void menuAdministrator::on_pushButton_3_clicked()
{
    deleteEmployee* deleteEmployeePtr = new deleteEmployee(this);
    this->close();
    deleteEmployeePtr->show();
}

void menuAdministrator::on_pushButton_4_clicked()
{
    EmployeeTable *table = new EmployeeTable(LOGIN_TABLE);
    this->close();
    table->show();
}

void menuAdministrator::on_pushButton_7_clicked()
{
    addMember* addMemberPtr = new addMember(this);
    this->close();
    addMemberPtr->show();
}

void menuAdministrator::on_pushButton_8_clicked()
{
    deleteMember* deleteMemberPtr = new deleteMember(this);
    this->close();
    deleteMemberPtr->show();
}

void menuAdministrator::on_pushButton_11_clicked()
{
    MemberTable *table = new MemberTable(MEMBER_TABLE);
    this->close();
    table->show();
}

void menuAdministrator::on_pushButton_5_clicked()
{
   addItem* window = new addItem(this);
    this->close();
    window->show();
}

void menuAdministrator::on_pushButton_6_clicked()
{
    deleteItem* window = new deleteItem(this);
    this->close();
    window->show();
}

void menuAdministrator::on_pushButton_10_clicked()
{
    inventoryTable *table = new inventoryTable(INVENTORY_TABLE);
    this->close();
    table->show();
}

void menuAdministrator::on_pushButton_9_clicked()
{
    addSalesInfo *menu = new addSalesInfo(this);
    this->close();
    menu->show();
}
