#include "salespitch.h"
#include "ui_salespitch.h"

salesPitch::salesPitch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salesPitch)
{
    ui->setupUi(this);

    //Read file
    QFile fileName("C:/Users/qcurr/Documents/GoonSquadRobots/salesFromPrior12Months");
    if (!fileName.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "info", fileName.errorString());
    }

    QTextStream in(&fileName);
    ui->textBrowser->setText(in.readAll());
    fileName.close();
}

salesPitch::~salesPitch()
{
    delete ui;
}



