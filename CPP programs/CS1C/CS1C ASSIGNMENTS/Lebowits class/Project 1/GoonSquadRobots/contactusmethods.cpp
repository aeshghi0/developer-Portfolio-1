#include "contactusmethods.h"
#include "ui_contactusmethods.h"

contactUsMethods::contactUsMethods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::contactUsMethods)
{
    ui->setupUi(this);
}

contactUsMethods::~contactUsMethods()
{
    delete ui;
}
