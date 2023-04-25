#include "robotcare.h"
#include "ui_robotcare.h"
#include "robotcarewarrantypurchase.h"

robotcare::robotcare(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::robotcare)
{
    ui->setupUi(this);
    ui->label_2->setText("$299.99 warranty upgrade package per machine. This upgrade brings\n\ta 2 year full waranty that will cover the robot"
                         "from all\n\tpotential damage and malfunctions. We will cover\n\tthe full cost of the machine and replace it with a\n\t              brand "
                         "new one free of all charges.");
}

robotcare::~robotcare()
{
    delete ui;
}

void robotcare::on_pushButton_clicked()
{
    this->close();
}

void robotcare::on_pushButton_2_clicked()
{
    robotCareWarrantyPurchase newPurch;
    newPurch.setModal(true);
    newPurch.showMaximized();
    newPurch.exec();
}
