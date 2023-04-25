#include "ManagerWindow.h"
#include "ui_ManagerWindow.h"

ManagerWindow::ManagerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManagerWindow)
{
    ui->setupUi(this);
}

ManagerWindow::~ManagerWindow()
{
    delete ui;
}

void ManagerWindow::on_PushButton_BackTMain_clicked()
{
    MainWindow* mainWindow = new MainWindow(this);
    this->close();
    mainWindow->show();
}
