#include "contactusmethods.h"
#include "ui_contactusmethods.h"

contactUsMethods::contactUsMethods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::contactUsMethods)
{
    ui->setupUi(this);

    //Adding picture
    QPixmap picture1("/Users/blakedickerson/Desktop/Pictures/1958308_1.jpg");
    int w = ui->label_pic1->width();
    int h = ui->label_pic1->height();
    ui->label_pic1->setPixmap(picture1.scaled(w, h, Qt::KeepAspectRatio));

    //Adding picture2
    ui->label_pic2->setPixmap(picture1.scaled(w, h, Qt::KeepAspectRatio));

}

contactUsMethods::~contactUsMethods()
{
    delete ui;
}
