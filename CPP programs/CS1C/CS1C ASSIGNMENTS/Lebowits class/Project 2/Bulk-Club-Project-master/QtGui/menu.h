#ifndef MENU_H
#define MENU_H

#include "salesInfo.h"
#include "newsales.h"
#include "employeetable.h"
#include "employeemanager.h"
#include "loginwindow.h"
#include "ui_menu.h"
#include <QWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QComboBox>
#include <QPixmap>
#include <QDialog>

namespace Ui {

class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();

private slots:
    void on_combobox_selection_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
