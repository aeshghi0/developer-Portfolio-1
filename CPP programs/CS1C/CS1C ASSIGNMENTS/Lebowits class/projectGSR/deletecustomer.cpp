#include "deletecustomer.h"
#include "customer.h"
#include "listcustomers.h"

#include "ui_deletecustomer.h"

deletecustomer::deletecustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletecustomer)
{
    ui->setupUi(this);
}

deletecustomer::~deletecustomer()
{
    delete ui;
}





void deletecustomer::on_pushButton_clicked()
{
    QString text = ui->lineEdit->text();
    QTextStream * stream = new QTextStream(&text , QIODevice::ReadOnly);
    QString line1 =  stream->readLine();
    //QString line2 =  stream->readLine();

    //qDebug() <<line1;

    customer temp;
    vector <customer> a;
    QFile inFile("/Users/blakedickerson/Desktop/Sprints/customerListInFile");
    QTextStream in(&inFile);
     if(!(inFile.open(QIODevice::ReadOnly))){
         exit(0);
     }
   // if((inFile.open(QIODevice::ReadOnly))){
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

    int before = a.size();
    for(int i = 0; i < a.size(); ++i){
        if(line1 == a.at(i).getName()){
            a.erase(a.begin()+i);
            break;
        }
        if(i +1 == a.size()){
            QMessageBox::warning(this,"ERROR", "Customer was not found");
            break;
        }
   }

    int after = a.size();

    QFile file("/Users/blakedickerson/Desktop/Sprints/customerListInFile");
    file.open(QFile::WriteOnly|QFile::Truncate);

    QFile filefile("/Users/blakedickerson/Desktop/Sprints/customerListInFile");
    if(filefile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
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
         if(after < before){
          QMessageBox::information(this,"Success", "Customer has been deleted!");

          this->close();
         }
}
}
