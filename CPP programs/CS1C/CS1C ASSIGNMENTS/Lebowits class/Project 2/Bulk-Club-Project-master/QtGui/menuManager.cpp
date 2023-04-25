#include "menuManager.h"
#include "ui_menuManager.h"

menuManager::menuManager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuManager)
{
    ui->setupUi(this);
}

menuManager::~menuManager()
{
    delete ui;
}

void menuManager::on_pushButton_logout_clicked()
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}

void menuManager::on_pushButton_itemSearch_clicked()
{
    displayItem* displayPtr = new displayItem(this);
    this->close();
    displayPtr->show();
}

void menuManager::on_pushButton_displayMembers_clicked()
{
    listMembersWindow* window = new listMembersWindow(this);
    this->close();
    window->show();
}

void menuManager::on_pushButton_displaySalesReport_clicked()
{
    newSales* displayPtr = new newSales;
    this->close();
    displayPtr->show();
}

void menuManager::on_pushButton_displayPurchases_clicked()
{
    displayPurchases* displayPtr = new displayPurchases(this);
    this->close();
    displayPtr->show();
}

void menuManager::on_pushButton_inventory_clicked()
{
    listInventoryWindow* inventoryPtr = new listInventoryWindow(this);
    this->close();
    inventoryPtr->show();
}
