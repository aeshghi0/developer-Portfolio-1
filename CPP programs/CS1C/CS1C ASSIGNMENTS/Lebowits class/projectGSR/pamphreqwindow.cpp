#include "pamphreqwindow.h"
#include "ui_pamphreqwindow.h"

pamphReqWindow::pamphReqWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pamphReqWindow)
{
    ui->setupUi(this);
}

pamphReqWindow::~pamphReqWindow()
{
    delete ui;
}

