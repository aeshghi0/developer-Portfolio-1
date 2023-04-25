#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class customerList;
}

class customerList : public QDialog
{
    Q_OBJECT

public:
    explicit customerList(QWidget *parent = nullptr);
    ~customerList();

private:
    Ui::customerList *ui;
};

#endif // CUSTOMERLIST_H
