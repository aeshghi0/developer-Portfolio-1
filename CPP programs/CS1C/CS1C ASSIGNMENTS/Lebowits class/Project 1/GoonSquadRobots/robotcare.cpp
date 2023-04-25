#include "robotcare.h"
#include "ui_robotcare.h"

robotcare::robotcare(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::robotcare)
{
    ui->setupUi(this);
}

robotcare::~robotcare()
{
    delete ui;
}
