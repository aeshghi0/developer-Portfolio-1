#include "membersManager.h"
#include "ui_membersManager.h"

membersManager::membersManager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::membersManager)
{
    ui->setupUi(this);
}

membersManager::~membersManager()
{
    delete ui;
}
