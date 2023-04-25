#ifndef CONTACTUSMETHODS_H
#define CONTACTUSMETHODS_H

#include <QDialog>

namespace Ui {
class contactUsMethods;
}

class contactUsMethods : public QDialog
{
    Q_OBJECT

public:
    explicit contactUsMethods(QWidget *parent = nullptr);
    ~contactUsMethods();

private:
    Ui::contactUsMethods *ui;
};

#endif // CONTACTUSMETHODS_H
