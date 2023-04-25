#include "loginwindow.h"
#include "ui_loginwindow.h"

void LoginWindow::on_pushButton_login_clicked()
{
    QMessageBox invalidCreds;
    invalidCreds.setText("The username or password entered is incorrect");
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    User temp;

    temp = LoginManager::instance().authenticate(username, password);

    if(temp != NULL_USER)
    {
        if(temp.isAdministrator() == true)
        {
            menuAdministrator* menuAdministratorPtr = new menuAdministrator(this);
            this->close();
            menuAdministratorPtr->show();
        }
        else
        {
            menuManager* menuManagerPtr = new menuManager(this);
            this->close();
            menuManagerPtr->show();
        }
    } else {
        invalidCreds.exec();
    }
}

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    QSqlDatabase myDB;

    if(QSqlDatabase::contains()) {
        myDB = QSqlDatabase::database(QLatin1String(QSqlDatabase::defaultConnection), false);
    }
    else {
        myDB = QSqlDatabase::addDatabase("QSQLITE");
    }
    myDB.setDatabaseName("bulk.db");
    myDB.open();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}
