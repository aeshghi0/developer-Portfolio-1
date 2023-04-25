#ifndef CUSTOMERHELP_H
#define CUSTOMERHELP_H

#include <QDialog>

namespace Ui {
class customerHelp;
}

class customerHelp : public QDialog
{
    Q_OBJECT

public:
    explicit customerHelp(QWidget *parent = nullptr);
    ~customerHelp();

private slots:
    void on_backToHomeButton_clicked();

private:
    Ui::customerHelp *ui;
};

#endif // CUSTOMERHELP_H
