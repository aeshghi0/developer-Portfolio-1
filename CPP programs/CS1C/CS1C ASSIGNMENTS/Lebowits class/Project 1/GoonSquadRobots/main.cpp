#include "homepage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    homePage w;
    w.showMaximized();
    //w.show();
    return a.exec();
}
