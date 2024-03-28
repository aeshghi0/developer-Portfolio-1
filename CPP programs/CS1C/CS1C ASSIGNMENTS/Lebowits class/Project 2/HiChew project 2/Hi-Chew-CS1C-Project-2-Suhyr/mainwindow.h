#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "AdminWindow.h"
#include "LoginManager.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_PushButton_login_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H