#include "pricing.h"
#include "ui_pricing.h"
#include "standardpackagepurchase.h"
#include "premiumpackagepurchase.h"
#include "premiumpluspurchase.h"

pricing::pricing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pricing)
{
    ui->setupUi(this);

    //change color of push buttons
    ui->pushButton->setStyleSheet("background-color: black");
    ui->pushButton_2->setStyleSheet("background-color: black");
    ui->pushButton_3->setStyleSheet("background-color: black");

    //Add picture
    QPixmap picture1("/Users/blakedickerson/Desktop/Pictures/Cool-metal-robot-with-green-illuminated-lines-walking.jpg");
    int w = ui->label_pic1->width();
    int h = ui->label_pic1->height();
    ui->label_pic1->setPixmap(picture1.scaled(w, h, Qt::KeepAspectRatio));
}

pricing::~pricing()
{
    delete ui;
}

void pricing::on_pushButton_clicked()
{
    standardPackagePurchase newPurch;
    newPurch.setModal(true);
    newPurch.showMaximized();
    newPurch.exec();
}

void pricing::on_pushButton_2_clicked()
{
    premiumPackagePurchase newPurch;
    newPurch.setModal(true);
    newPurch.showMaximized();
    newPurch.exec();
}

void pricing::on_pushButton_3_clicked()
{
    premiumPlusPurchase newPurch;
    newPurch.setModal(true);
    newPurch.showMaximized();
    newPurch.exec();
}
