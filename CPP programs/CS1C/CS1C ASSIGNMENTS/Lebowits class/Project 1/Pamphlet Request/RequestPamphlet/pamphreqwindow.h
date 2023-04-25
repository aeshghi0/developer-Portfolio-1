#ifndef PAMPHREQWINDOW_H
#define PAMPHREQWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class pamphReqWindow; }
QT_END_NAMESPACE

class pamphReqWindow : public QMainWindow
{
    Q_OBJECT

public:
    pamphReqWindow(QWidget *parent = nullptr);
    ~pamphReqWindow();

private:
    Ui::pamphReqWindow *ui;
};
#endif // PAMPHREQWINDOW_H
