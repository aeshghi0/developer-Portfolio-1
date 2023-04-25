#ifndef SALESPITCHWINDOW_H
#define SALESPITCHWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SalesPitchWindow; }
QT_END_NAMESPACE

class SalesPitchWindow : public QMainWindow
{
    Q_OBJECT

public:
    SalesPitchWindow(QWidget *parent = nullptr);
    ~SalesPitchWindow();

private:
    Ui::SalesPitchWindow *ui;
};
#endif // SALESPITCHWINDOW_H
