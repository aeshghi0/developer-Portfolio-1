#include "standardwarranty.h"
#include "ui_standardwarranty.h"

standardwarranty::standardwarranty(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::standardwarranty)
{
    ui->setupUi(this);
}

standardwarranty::~standardwarranty()
{
    delete ui;
}
