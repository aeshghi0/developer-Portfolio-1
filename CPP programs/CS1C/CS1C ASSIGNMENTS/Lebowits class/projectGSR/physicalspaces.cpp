#include "physicalspaces.h"
#include "ui_physicalspaces.h"

physicalSpaces::physicalSpaces(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::physicalSpaces)
{
    ui->setupUi(this);

    QPixmap picture1("/Users/blakedickerson/Desktop/Pictures/asfddsfasdfd.jpeg");
    int w = ui->labelpic->width();
    int h = ui->labelpic->height();
    ui->labelpic->setPixmap(picture1.scaled(w, h, Qt::KeepAspectRatio));


    QPixmap picture2("/Users/blakedickerson/Desktop/Pictures/th.jpeg");
    int wi = ui->labelpic2->width();
    int he = ui->labelpic2->height();
    ui->labelpic2->setPixmap(picture2.scaled(wi, he, Qt::KeepAspectRatio));
}

physicalSpaces::~physicalSpaces()
{
    delete ui;
}

void physicalSpaces::on_backToHomeButton_clicked()
{
    close();
}
