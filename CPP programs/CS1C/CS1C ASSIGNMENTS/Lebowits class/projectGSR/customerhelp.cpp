#include "customerhelp.h"
#include "ui_customerhelp.h"

customerHelp::customerHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerHelp)
{
    ui->setupUi(this);
}

customerHelp::~customerHelp()
{
    delete ui;
}

void customerHelp::on_backToHomeButton_clicked()
{
    close();
}

void customerHelp::on_pushButton_clicked()
{
    //runtime answer
    ui->paymentAnswerLabel->setText("We accept Visa, Amex, and Mastercard as forms of payment.");
   // ui->paymentAnswerLabel->setStyleSheet("background-color: grey");


}

void customerHelp::on_pushButton_2_clicked()
{
    //runtime answer
    ui->salesTaxAnswerLabel_2->setText("Our prices do not include sales tax. The sales tax is included\nin the checkout when you purchase a robot.");
  //  ui->salesTaxAnswerLabel_2->setStyleSheet("background-color: black");

}

void customerHelp::on_pushButton_3_clicked()
{
    //runtime answer
    ui->robotChargableAnswerLabel->setText("Our robots come built running off of solar energy so there\nis no need to charge them ever!");
  //  ui->robotChargableAnswerLabel->setStyleSheet("background-color: black");


}

void customerHelp::on_pushButton_4_clicked()
{
    //runtime answer
    ui->outOfStockAnswerLabel->setText("We are constantly creating and improving our robots. Every\nFriday our inventory gets replenished with more robots!");
   // ui->outOfStockAnswerLabel->setStyleSheet("background-color: black");

}

void customerHelp::on_pushButton_5_clicked()
{
    //runtime answer
    ui->returnRobotAnswerLabel->setText("Our return process is fast and easy. To return the robot, you will\n"
                                        "need to ship the robot (including all original equipment and any\n"
                                        "parts and accessories that came with the robot to us at our\n"
                                        "address , and complete a robot inspection, by the end of the\n"
                                        "seventh (7th) calendar day following the delivery date.");
   // ui->returnRobotAnswerLabel->setStyleSheet("background-color: black");
}

void customerHelp::on_pushButton_6_clicked()
{
    //runtime answer
    ui->refundForReturnAnswerLabel->setText("Our customers will be fully refunded assuming that they follow\n"
                                            "all the necessary return process steps.");
   // ui->refundForReturnAnswerLabel->setStyleSheet("background-color: black");
}

void customerHelp::on_pushButton_7_clicked()
{
    //runtime answer
    ui->customRobotAnswerLabel->setText("We are currently working to give all of our customers an option to\n"
                                        "create their own robot. However, we do not have it ready at this time.");
    //ui->customRobotAnswerLabel->setStyleSheet("background-color: black");
}

void customerHelp::on_pushButton_8_clicked()
{
    //runtime answer
    ui->accessoriesAnswerLabel->setText("We are excited to announce that our robotic accessories will be up\n"
                                        "and running by Fall 2020! Until then our robots come equipped with\n"
                                        "everything necessary for their functionality.");
   // ui->accessoriesAnswerLabel->setStyleSheet("background-color: black");

}

void customerHelp::on_pushButton_9_clicked()
{
    //runtime answer
    ui->outsideUsAnswerLabel->setText("Our robots ship anywhere in the world. After a purchase our U.S.A.\n"
                                      "customers will recieve their robots in 2 days. Our international\n"
                                      "customers will recieve their robots in 3-5 days.");
    //ui->outsideUsAnswerLabel->setStyleSheet("background-color: black");
}

