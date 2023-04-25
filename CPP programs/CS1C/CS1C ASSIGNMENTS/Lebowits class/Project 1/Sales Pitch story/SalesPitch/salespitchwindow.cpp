#include "salespitchwindow.h"
#include "ui_salespitchwindow.h"

SalesPitchWindow::SalesPitchWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SalesPitchWindow)
{
    ui->setupUi(this);
}

SalesPitchWindow::~SalesPitchWindow()
{
    delete ui;
}

