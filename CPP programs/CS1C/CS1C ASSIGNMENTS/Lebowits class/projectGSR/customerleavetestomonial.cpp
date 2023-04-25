#include "customerleavetestomonial.h"
#include "ui_customerleavetestomonial.h"
#include <QMessageBox>
#include <vector>
#include <QTextStream>
#include <QFile>
#include <QDebug>

using namespace std;

customerLeaveTestomonial::customerLeaveTestomonial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerLeaveTestomonial)
{
    ui->setupUi(this);

}

customerLeaveTestomonial::~customerLeaveTestomonial()
{
    delete ui;
}

void customerLeaveTestomonial::on_pushButton_clicked()
{
    QString companyName = ui->textEdit->toPlainText();
    QString testomonial = ui->textEdit_2->toPlainText();
    QStringList myVector = companyName.split(QRegExp("[\n]"),QString::SkipEmptyParts);
    QStringList myVector2 = testomonial.split(QRegExp("[\n]"),QString::SkipEmptyParts);
    vector<QString> myNewVector;
    vector<QString> reeee;
    //copy(myVector.begin(), myVector.end(), back_inserter(myNewVector));



   QFile file("/Users/blakedickerson/Desktop/Sprints/customerReviews");
   if(file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
   {
       // We're going to streaming text to the file
       QTextStream stream(&file);
           for(int i =0; myVector.size(); ++i){
           stream <<'\n' <<myVector.front();
           stream << "\n" << myVector2.front();
           myVector.pop_front();
           }
       file.close();
       qDebug() << "Writing finished";
         QMessageBox::information(this,"Success", "Testimonial has been added!");
         this->close();
   }
}
