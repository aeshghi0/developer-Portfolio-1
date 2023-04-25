#ifndef MEMBERWINDOW_H
#define MEMBERWINDOW_H

#include <QDialog>
#include "members.h"
#include "menuAdministrator.h"
#include "menuManager.h"
#include "dbmanager.h"
#include "loginmanager.h"

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>

namespace Ui {
class memberWindow;
}

class memberWindow : public QDialog
{
    Q_OBJECT

public:
    explicit memberWindow(QWidget *parent = 0);
    ~memberWindow();

private:
    Ui::memberWindow *ui;
};

#endif // MEMBERWINDOW_H
