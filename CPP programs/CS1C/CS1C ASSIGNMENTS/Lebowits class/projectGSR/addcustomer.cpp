#include "addcustomer.h"
#include "ui_addcustomer.h"
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <vector>
#include "customer.h"

using namespace std;

addcustomer::addcustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addcustomer)
{
    ui->setupUi(this);
}

addcustomer::~addcustomer()
{
    delete ui;
}

void addcustomer::on_pushButton_clicked()
{
    bool yeet = 1;
        customer temp;
        vector<customer> a;
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

          QString data = ui->textEdit->toPlainText();
          QStringList myVector = data.split(QRegExp("[\n]"),QString::SkipEmptyParts);

          for(int i = 0; i < a.size(); ++i){
              if(myVector.front() == a.at(i).getName()){
                  QMessageBox::warning(this,"ERROR", "Customer is already in file");
                  yeet = 0;
                  break;
              }
              qDebug() << "yes?";
          }

         if(yeet){
             QFile file("/Users/blakedickerson/Desktop/Sprints/customerListInFile");
             if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
             {
                 // We're going to streaming text to the file
                 QTextStream stream(&file);
                     for(int i =0; myVector.size(); ++i){
                     stream <<myVector.front() << "\n";
                     myVector.pop_front();
                     }
                 file.close();
                 qDebug() << "Writing finished";
                   QMessageBox::information(this,"Success", "Customer has been added!");
                   this->close();
             }
          }

  }

