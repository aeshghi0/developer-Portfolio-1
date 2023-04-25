#include "customerreviews.h"
#include "customerleavetestomonial.h"
#include "ui_customerreviews.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>

customerReviews::customerReviews(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerReviews)
{
    ui->setupUi(this);
    QPixmap picture1("/Users/blakedickerson/Desktop/Pictures/the.jpeg");
    int w = ui->labelpic1->width();
    int h = ui->labelpic1->height();
    ui->labelpic1->setPixmap(picture1.scaled(w, h, Qt::KeepAspectRatio));

    vector<customerTestomonial> reeeeee;
    copyFile(reeeeee);
    printToScreen(reeeeee);
}

customerReviews::~customerReviews()
{
    delete ui;
}


void customerReviews::copyFile(vector<customerTestomonial> &a)
{
    customerTestomonial temp;
    QFile inFile("/Users/blakedickerson/Desktop/Sprints/customerReviews");
    QTextStream in(&inFile);
     if(!(inFile.open(QIODevice::ReadOnly))){
         exit(0);
     }
   // if((inFile.open(QIODevice::ReadOnly))){
     while(!in.atEnd()){

        QString testomonialLine = in.readLine();
        QString companyNameLine = in.readLine();

        temp.setCompanyName(companyNameLine);
        temp.setTestomonial(testomonialLine);

        a.push_back(temp);
    }
}

void customerReviews::printToScreen(vector<customerTestomonial> &a){
    for(int i = 0; i < a.size(); ++i){
       // ui->textBrowser->append(a.at(i).getCompanyName());
        ui->textBrowser->append(a.at(i).getTestomonial());
        ui->textBrowser->append(a.at(i).getCompanyName());
        ui->textBrowser->append("\t");
   }
}

void customerReviews::on_pushButton_clicked()
{
    customerLeaveTestomonial newNew;
    newNew.setModal(true);
    newNew.showMaximized();
    newNew.exec();
    this->close();

}
