#ifndef WARRANTY_H
#define WARRANTY_H

#include <QDialog>

namespace Ui {
class warranty;
}

class warranty : public QDialog
{
    Q_OBJECT

public:
    explicit warranty(QWidget *parent = nullptr);
    ~warranty();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::warranty *ui;
};

#endif // WARRANTY_H
