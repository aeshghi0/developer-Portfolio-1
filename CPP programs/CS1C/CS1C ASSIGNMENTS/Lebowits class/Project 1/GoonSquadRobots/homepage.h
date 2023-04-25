#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class homePage; }
QT_END_NAMESPACE

class homePage : public QMainWindow
{
    Q_OBJECT

public:
    homePage(QWidget *parent = nullptr);
    ~homePage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::homePage *ui;
};
#endif // HOMEPAGE_H
