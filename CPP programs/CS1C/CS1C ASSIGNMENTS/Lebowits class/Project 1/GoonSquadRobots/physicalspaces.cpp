#include "physicalspaces.h"
#include "ui_physicalspaces.h"

physicalSpaces::physicalSpaces(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::physicalSpaces)
{
    ui->setupUi(this);
}

physicalSpaces::~physicalSpaces()
{
    delete ui;
}

void physicalSpaces::on_backToHomeButton_clicked()
{
    close();
}
