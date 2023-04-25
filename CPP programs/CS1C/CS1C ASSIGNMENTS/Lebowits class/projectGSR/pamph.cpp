#include "pamph.h"
#include "ui_pamph.h"

pamph::pamph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pamph)
{
    ui->setupUi(this);
}

pamph::~pamph()
{
    delete ui;
}

void pamph::on_pushButton_3_clicked()
{
    bool yeet = 1;
    QString text = ui->lineEdit_2->text();
    QTextStream * stream = new QTextStream(&text , QIODevice::ReadOnly);
    QString line1 =  stream->readLine();

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
            a.at(i).setRecieved("Recieved");
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
          QMessageBox::information(this,"Success", "Customer has been sent a pamphlet!");

          this->close();
         }
    }
}

void pamph::on_pushButton_clicked()
{
     QMessageBox::information(this,"Success", "an Email was sent to you or your company!");
}
