#include "login.h"
#include "ui_login.h"

using namespace std;

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    vector<pair< QString, pair<QString, QString>>> uandp;
    pair<QString, QString> filler;
    QString temp;
    QFile inFile("/Users/blakedickerson/Desktop/Sprints/blake");
    QTextStream in(&inFile);
     if(!(inFile.open(QIODevice::ReadOnly))){
         exit(0);
     }
   // if((inFile.open(QIODevice::ReadOnly))){
     while(!in.atEnd()){
        QString line = in.readLine();
        QString anotherLine = in.readLine();
        QString tempLine = in.readLine();
        filler.first = line;
        filler.second = anotherLine;
        temp = tempLine;
        uandp.push_back(make_pair(temp,filler));
    }
    qDebug() << uandp.at(0).first;
    QString username = ui-> lineEdit -> text();
    QString password = ui-> lineEdit_2 -> text();

    unsigned long i = 0;
    for(i;i < uandp.size(); ++i){
        if(username == uandp.at(i).second.first && password == uandp.at(i).second.second){
            if(uandp.at(i). first == "1"){
            QMessageBox::information(this,"Login", "username and password is authorized");
            hide();
            authorisedHomePage newHome;
            newHome.setModal(true);
            newHome.showMaximized();
            newHome.exec();
            break;
            }else{
                QMessageBox::information(this,"Login", "username and password is correct");
                break;
            }
    } else if(i == uandp.size()){
            uandp.resize(uandp.size() + 1);
        }
    }
    if(i == uandp.size()) QMessageBox::warning(this,"Login", "username and password is incorrect");



//        newHome = new authorisedHomePage(this);
//        newHome -> show();

}
