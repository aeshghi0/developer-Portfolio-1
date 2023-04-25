#include "pricing.h"
#include "ui_pricing.h"

pricing::pricing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pricing)
{
    ui->setupUi(this);
}

pricing::~pricing()
{
    delete ui;
}
