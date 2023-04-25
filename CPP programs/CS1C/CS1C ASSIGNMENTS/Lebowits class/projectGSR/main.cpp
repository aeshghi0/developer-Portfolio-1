#include <QApplication>
#include "homepage.h"


int main(int argc, char *argv[])
{
     QApplication a(argc, argv);

    homePage w;

    w.showMaximized();
    return a.exec();
}
