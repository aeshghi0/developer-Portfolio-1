#include "salespitchwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SalesPitchWindow w;
    w.show();
    return a.exec();
}
