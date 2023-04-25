#include "warranty.h"
#include "ui_warranty.h"
#include "standardwarranty.h"
#include "robotcare.h"

warranty::warranty(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::warranty)
{
    ui->setupUi(this);
}

warranty::~warranty()
{
    delete ui;
}

void warranty::on_pushButton_clicked()
{
    standardwarranty standard;

    standard.setModal(true);
    standard.showMaximized();
    standard.exec();
}

void warranty::on_pushButton_2_clicked()
{
    robotcare careWarranty;
    careWarranty.setModal(true);
    careWarranty.showMaximized();
    careWarranty.exec();
}
