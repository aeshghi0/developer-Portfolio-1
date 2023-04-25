#ifndef MAINTANENCEPLAN_H
#define MAINTANENCEPLAN_H

#include <QDialog>

namespace Ui {
class maintanencePlan;
}

class maintanencePlan : public QDialog
{
    Q_OBJECT

public:
    explicit maintanencePlan(QWidget *parent = nullptr);
    ~maintanencePlan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::maintanencePlan *ui;
};

#endif // MAINTANENCEPLAN_H
