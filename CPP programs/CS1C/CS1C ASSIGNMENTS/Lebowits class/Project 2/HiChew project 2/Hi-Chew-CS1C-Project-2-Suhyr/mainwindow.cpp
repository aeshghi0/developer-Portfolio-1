#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase myDB;

    if(QSqlDatabase::contains()) {
        myDB = QSqlDatabase::database(QLatin1String(QSqlDatabase::defaultConnection), false);
    }
    else {
        myDB = QSqlDatabase::addDatabase("QSQLITE");
    }
    myDB.setDatabaseName("HiChew.db");
    myDB.open();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PushButton_login_clicked()
{
    User temp;
    QString username = ui->LineEdit_Username->text();
    QString password = ui->LineEdit_Password->text();
    temp = LoginManager::instance().authenticate(username, password);
    if(temp != NULL_USER)
    {
        if(temp.isAdministrator() == true)
        {
            QMessageBox::information(this, "Login", "Welcome to the Administrator Page");
            ui->LineEdit_Username->clear();
            ui->LineEdit_Password->clear();
            AdminWindow* adminWindow = new AdminWindow(this);
            this->close();
            adminWindow->show();
        }
        else
        {
            QMessageBox::information(this, "Login", "Welcome to the Manager Page");
            ui->LineEdit_Username->clear();
            ui->LineEdit_Password->clear();
          //  menuManager* menuManagerPtr = new menuManager(this);
            this->close();
         //   menuManagerPtr->show();
        }
    } else {
        QMessageBox::warning(this, "Login", "Username and password is not correct");
        ui->LineEdit_Username->clear();
        ui->LineEdit_Password->clear();
    }
}
