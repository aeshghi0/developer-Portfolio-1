#include "customerhelp.h"
#include "ui_customerhelp.h"

customerHelp::customerHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerHelp)
{
    ui->setupUi(this);
}

customerHelp::~customerHelp()
{
    delete ui;
}

void customerHelp::on_backToHomeButton_clicked()
{
    close();
}
