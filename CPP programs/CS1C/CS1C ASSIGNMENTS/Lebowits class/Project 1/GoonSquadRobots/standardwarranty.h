#ifndef STANDARDWARRANTY_H
#define STANDARDWARRANTY_H

#include <QDialog>

namespace Ui {
class standardwarranty;
}

class standardwarranty : public QDialog
{
    Q_OBJECT

public:
    explicit standardwarranty(QWidget *parent = nullptr);
    ~standardwarranty();

private:
    Ui::standardwarranty *ui;
};

#endif // STANDARDWARRANTY_H
