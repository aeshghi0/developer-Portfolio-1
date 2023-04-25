#include "memberWindow.h"
#include "ui_memberWindow.h"

memberWindow::memberWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberWindow)
{
    ui->setupUi(this);
}

memberWindow::~memberWindow()
{
    delete ui;
}
