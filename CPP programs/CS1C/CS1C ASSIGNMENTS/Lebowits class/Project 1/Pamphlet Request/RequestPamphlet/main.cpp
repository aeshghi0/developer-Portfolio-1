#include "pamphreqwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pamphReqWindow w;
    w.show();
    return a.exec();
}
