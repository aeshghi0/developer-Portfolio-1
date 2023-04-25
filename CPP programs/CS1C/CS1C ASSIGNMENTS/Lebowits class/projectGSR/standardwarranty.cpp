#include "standardwarranty.h"
#include "ui_standardwarranty.h"
#include "standardwarrantypurchase.h"

standardwarranty::standardwarranty(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::standardwarranty)
{
    ui->setupUi(this);
    ui->label_2->setText("This warranty comes standard with any purchase of the bomb detecting\n\trobots. "
                         "The standard warranty last for 1 year and is limited.\n\tWe will replace any defects "
                         "that might of come from the\n\t\tfactory but will not replace any misused\n\t\t\t            products.");

}

standardwarranty::~standardwarranty()
{
    delete ui;
}

void standardwarranty::on_pushButton_clicked()
{
    this->close();
}

void standardwarranty::on_pushButton_2_clicked()
{
    standardWarrantyPurchase newPurch;
    newPurch.setModal(true);
    newPurch.showMaximized();
    newPurch.exec();
}
