#include "productinfo.h"
#include "ui_productinfo.h"

productInfo::productInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::productInfo)
{
    ui->setupUi(this);
    ui->label_2->setText("Goon Squad Robots was founded by four individuals who wanted to make a difference in the world. These individuals wanted to prove"
                         " that the population around the globe\ncould feel safe in public places "
                         "by having fears of bombs off their radar. The Goon Squad Robots are robots that can detect bombs and defuse them. Known for keeping\n"
                         "public peace and ease, these Robots successfully have defused"
                         "every bomb they have come across. Using state of the art technology,"
                         "these robots are able to communicate\nand give directions to people who are involved in a situation where a bonb is present. "
                         "Goon "
                         "Squad Robots are more convential than the bomb squad and help move towards a\nfuture where the innocent loss of lives can be stopped. "
                         " With the company finally launching in 2020, Goon Squad "
                         "Robots can be found in major corporations across the globe,\nproving that they"
                         "are a force to be reckoned with.");
    ui->label_3->setText("Launched in early 2020, the Storm robot unveiled Goon Squad's cutting-edge technology and design. Running of solar power, this"
                         " robot has no need to be charged.\n"
                         "The Storm comes equipped with versatile and quick movements allowing it to get to bombs fast and safely while keeping the public"
                         "safe. Additionally, the Storm has quick\nthinking and comes knowledgable on every type of bomb known to manking so it can safely"
                         "and effectively defuse it without causing a public panic. By being able to defuse\neven the most complicated of bombs in 30 seconds"
                         "or less, our promise to you is that if caught early enough the bomb will get defused safely and effectively.");
    ui->label_4->setText("Our Mission is to protect and serve the innocent people who are trying to live their everyday lives without fear of catastrophe.");


    QPixmap picture1("/Users/blakedickerson/Desktop/Pictures/mission.png.742x400_q85_crop.jpg");
    int w = ui->label_7->width();
    int h = ui->label_7->height();
    ui->label_7->setPixmap(picture1.scaled(w, h, Qt::KeepAspectRatio));
   // ui->label_8->setPixmap(picture1.scaled(w, h, Qt::KeepAspectRatio));



}

productInfo::~productInfo()
{
    delete ui;
}
