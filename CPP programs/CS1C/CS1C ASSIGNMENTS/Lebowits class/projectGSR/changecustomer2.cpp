#include "changecustomer2.h"
#include "ui_changecustomer2.h"
#include "customer.h"
#include <vector>
using namespace std;

changeCustomer2::changeCustomer2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeCustomer2)
{
    ui->setupUi(this);
}

changeCustomer2::~changeCustomer2()
{
    delete ui;
}

void changeCustomer2::on_pushButton_clicked()
{
bool yeet = 1;

QString text = ui->lineEdit->text();
QTextStream * stream = new QTextStream(&text , QIODevice::ReadOnly);
QString line1 =  stream->readLine();

QString text2 = ui->lineEdit_2->text();
QTextStream * stream2 = new QTextStream(&text2 , QIODevice::ReadOnly);
QString line2 =  stream2->readLine();


QString text3 = ui->lineEdit_3->text();
QTextStream * stream3 = new QTextStream(&text3 , QIODevice::ReadOnly);
QString line3 =  stream3->readLine();

QString text4 = ui->lineEdit_4->text();
QTextStream * stream4 = new QTextStream(&text4 , QIODevice::ReadOnly);
QString line4 =  stream4->readLine();

QString text5 = ui->lineEdit_5->text();
QTextStream * stream5 = new QTextStream(&text5 , QIODevice::ReadOnly);
QString line5 =  stream5->readLine();

QString text6 = ui->lineEdit_6->text();
QTextStream * stream6 = new QTextStream(&text6 , QIODevice::ReadOnly);
QString line6 =  stream6->readLine();

customer temp;
vector <customer> a;
QFile inFile("/Users/blakedickerson/Desktop/Sprints/customerListInFile");
QTextStream in(&inFile);
 if(!(inFile.open(QIODevice::ReadOnly))){
     exit(0);
 }
 while(!in.atEnd()){

    QString nameLine = in.readLine();
    QString addressLine = in.readLine();
    QString cityLine = in.readLine();
    QString webLine = in.readLine();
    QString interestLine = in.readLine();
    QString keyLine = in.readLine();
    QString recievedLine = in.readLine();

    temp.setName(nameLine);
    temp.setAddress(addressLine);
    temp.setCity(cityLine);
    temp.setWeb(webLine);
    temp.setInterest(interestLine);
    temp.setKey(keyLine);
    temp.setRecieved(recievedLine);
    a.push_back(temp);
 }

for(int i = 0; i < a.size(); ++i){
    if(line1 == a.at(i).getName()){
        if(line2 != "Empty"){
            a.at(i).setAddress(line2);
        }
        if(line3 != "Empty"){
            a.at(i).setCity(line3);
        }
        if(line4 != "Empty"){
            a.at(i).setWeb(line4);
        }
        if(line5 != "Empty"){
            a.at(i).setInterest(line5);
        }
        if(line6 != "Empty"){
            a.at(i).setKey(line6);
        }
       // QMessageBox::information(this,"Change Made!", "Customer was found and the changes were made!");
        break;
    }
    if(i +1 == a.size()){
        QMessageBox::warning(this,"ERROR", "Customer was not found");
       // this->close();
        yeet = 0;
        break;
    }
}




QFile file("/Users/blakedickerson/Desktop/Sprints/customerListInFile");
file.open(QFile::WriteOnly|QFile::Truncate);


QFile filefile("/Users/blakedickerson/Desktop/Sprints/customerListInFile");
if(filefile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
{
    // We're going to streaming text to the file
    QTextStream stream(&filefile);
    for(int i= 0 ; i < a.size(); ++i){
        if(i == 0){
            stream << a.at(i).getName() << "\n";
            stream <<  a.at(i).getAddress() << "\n";
            stream <<  a.at(i).getCity() << "\n";
            stream <<  a.at(i).getWeb() << "\n";
            stream <<  a.at(i).getInterest() << "\n";
            stream <<  a.at(i).getKey() << "\n" ;
            stream <<  a.at(i).getRecieved() ;
        }else{
            stream << '\n' << a.at(i).getName() << "\n";
            stream <<  a.at(i).getAddress() << "\n";
            stream <<  a.at(i).getCity() << "\n";
            stream <<  a.at(i).getWeb() << "\n";
            stream <<  a.at(i).getInterest() << "\n";
            stream <<  a.at(i).getKey() << "\n";
            stream <<  a.at(i).getRecieved() ;
        }
    }
    filefile.close();
    qDebug() << "Writing finished";
     if(yeet){
      QMessageBox::information(this,"Change Made!", "Customer was found and the changes were made!");

      this->close();
     }
}
}
