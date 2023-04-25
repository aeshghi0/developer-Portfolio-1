#include "menu.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    int w, h;
    ui->setupUi(this);
    /*******************************************************************
     * Used for the main menu picture, which is located in the img
     *******************************************************************/
    QPixmap pix(":/img/img/unknown.png");
    w = ui->label_picture->width();
    h = ui->label_picture->height();
    ui->label_picture->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_combobox_selection_currentTextChanged(const QString &arg1) //Used for checking when an option is changed
{
    if(arg1 == "Sales Information")
    {
        newSales *newSalesPtr = new newSales(this);
        this->close();
        newSalesPtr->show();
    } else if(arg1 == "Employee Management")
    {
        EmployeeManager *EmployeeManagerPtr = new EmployeeManager(this);
        this->close();
        EmployeeManagerPtr->show();
    }
}

void Menu::on_pushButton_clicked() // Correctly returns to login screen but if the user enters incorrect username/password or enters nothing and presses login button . . . shows invalidCreds message and closes
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}
