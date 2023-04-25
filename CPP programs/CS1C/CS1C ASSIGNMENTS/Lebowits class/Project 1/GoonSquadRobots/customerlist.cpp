#include "customerlist.h"
#include "ui_customerlist.h"

customerList::customerList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerList)
{
    ui->setupUi(this);

    //Read File
    QFile customerListFile("C:/Users/qcurr/Documents/GoonSquadRobots/customerList");
    if (!customerListFile.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "info", customerListFile.errorString());
    }

    QTextStream in(&customerListFile);
    ui->textBrowser->setText(in.readAll());
    customerListFile.close();
}

customerList::~customerList()
{
    delete ui;
}
