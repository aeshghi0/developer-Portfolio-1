#include "maintanenceplan.h"
#include "ui_maintanenceplan.h"
#include "purchasemaintanenceplan.h"

maintanencePlan::maintanencePlan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maintanencePlan)
{
    ui->setupUi(this);

    ui->label_2->setText("As a valued customer, we appreciate you for purchasing our robots. We offer a single maintance plan for all our customers. For only $500 more we will offer a full service\n"
                         "and maintance plan no matter the circumstance. In order to qualify one must call one of our specialists and get the necessary information needed to send the robot to\n"
                         "our headquarters where we will perform a full replacement and clean up of any part that is missing or malfunctioning. This includes any body part, the solar charger, and\n"
                         "any of the wires that are broken or missing. If you are not satisfied with the maintanence that our engineers perform, you can send the robot back in and we will fix it to\n"
                         "your liking free of charge!");
    ui->label_3->setText("Thank you for being apart of our company!");
}

maintanencePlan::~maintanencePlan()
{
    delete ui;
}

void maintanencePlan::on_pushButton_clicked()
{
    purchaseMaintanencePlan newPurch;
    newPurch.setModal(true);
    newPurch.showMaximized();
    newPurch.exec();
}
