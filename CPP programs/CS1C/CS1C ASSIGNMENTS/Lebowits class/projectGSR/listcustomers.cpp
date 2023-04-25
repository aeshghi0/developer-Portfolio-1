#include "listcustomers.h"
#include "ui_listcustomers.h"
#include <QObject>

listcustomers::listcustomers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listcustomers)
{
    ui->setupUi(this);
}

listcustomers::~listcustomers()
{
    delete ui;
}

void createVector(){
    vector<customer> myVector;
    listcustomers attempt;
    attempt.copyFile(myVector);
}

void listcustomers::copyFile(vector<customer> &a){
    customer temp;
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
        QString pamphletLine = in.readLine();
      //  QString totalPurchase = in.readLine();

        temp.setName(nameLine);
        temp.setAddress(addressLine);
        temp.setCity(cityLine);
        temp.setWeb(webLine);
        temp.setInterest(interestLine);
        temp.setKey(keyLine);
        temp.setRecieved(pamphletLine);
      //  temp.setTotalPurchase(totalPurchase);
        a.push_back(temp);

//        name.push_back(nameLine);
//        address.push_back(addressLine);
//        city.push_back(cityLine);
//        web.push_back(webLine);
//        interest.push_back(interestLine);
//        key.push_back(keyLine);


    }

}

void listcustomers::copyFile2(vector<purchaseClass> &a)
{

    purchaseClass temp;
    QFile inFile("/Users/blakedickerson/Desktop/Sprints/customerPurchases");
    QTextStream in(&inFile);
     if(!(inFile.open(QIODevice::ReadOnly))){
         exit(0);
     }
   // if((inFile.open(QIODevice::ReadOnly))){
     while(!in.atEnd()){

        QString nameLine = in.readLine();
        QString purchaseLine = in.readLine();
        QString product = in.readLine();
        temp.setCompanyName(nameLine);
        temp.setbigCost(purchaseLine);
        temp.setProductName(product);
        a.push_back(temp);

}
}

void listcustomers::printToScreen(vector<customer> &a){
    for(int i = 0; i < a.size(); ++i){

        ui->textBrowser->append(a.at(i).getName());
        ui->textBrowser->append(a.at(i).getAddress());
        ui->textBrowser->append(a.at(i).getCity());
        ui->textBrowser->append(a.at(i).getWeb());
        ui->textBrowser->append(a.at(i).getInterest());
        ui->textBrowser->append(a.at(i).getKey());
        ui->textBrowser->append(a.at(i).getRecieved());
        ui->textBrowser->append("\t");
//     ui->textBrowser->append(name.at(i));
//     ui->textBrowser->append(address.at(i));
//     ui->textBrowser->append(city.at(i));
//     ui->textBrowser->append(web.at(i));
//     ui->textBrowser->append(interest.at(i));
//     ui->textBrowser->append(key.at(i));
//     ui->textBrowser->append("\t");

   }
}
void listcustomers::helper(){
  // qDebug() << "did i make it?";
    vector<customer> mynew;
    copyFile(mynew);
    selectionSort(mynew, mynew.size());
    printToScreen(mynew);

}

void listcustomers::keyHelper(){
    //qDebug() << "key customers";
    vector<customer> mynew;
    copyFile(mynew);
    selectionSort(mynew, mynew.size());
    for(int i = 0; i < mynew.size(); ++i){
        if(mynew.at(i).getKey() == "key"){
        ui->textBrowser->append(mynew.at(i).getName());
        ui->textBrowser->append(mynew.at(i).getAddress());
        ui->textBrowser->append(mynew.at(i).getCity());
        ui->textBrowser->append(mynew.at(i).getWeb());
        ui->textBrowser->append(mynew.at(i).getInterest());
        ui->textBrowser->append(mynew.at(i).getKey());
        ui->textBrowser->append("\t");
        }
    }

}

void listcustomers::purchaseHelper()
{
    vector<purchaseClass> reeeeeeeee;
    copyFile2(reeeeeeeee);

    selectionSort(reeeeeeeee, reeeeeeeee.size());
            for(int i = 0; i < reeeeeeeee.size(); ++i)
            {
                    ui->textBrowser->append(reeeeeeeee.at(i).getCompanyName());
                    ui->textBrowser->append(reeeeeeeee.at(i).getbigCost());
                    ui->textBrowser->append(reeeeeeeee.at(i).getProductName());
                    ui->textBrowser->append("\t");
            }
}


void listcustomers::on_pushButton_clicked()
{
    connect(ui->pushButton, SIGNAL(clicked()), this ,SLOT(helper()));

}

void listcustomers::on_pushButton_2_clicked()
{
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(keyHelper()));
}

void listcustomers::on_pushButton_3_clicked()
{
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(purchaseHelper()));

}
