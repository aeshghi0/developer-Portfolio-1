#ifndef HELPWINDOW_H
#define HELPWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class HelpWindow; }
QT_END_NAMESPACE

class HelpWindow : public QMainWindow
{
    Q_OBJECT

public:
    HelpWindow(QWidget *parent = nullptr);
    ~HelpWindow();

private:
    Ui::HelpWindow *ui;
};
#endif // HELPWINDOW_H
