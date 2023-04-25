#ifndef PRICING_H
#define PRICING_H

#include <QDialog>

namespace Ui {
class pricing;
}

class pricing : public QDialog
{
    Q_OBJECT

public:
    explicit pricing(QWidget *parent = nullptr);
    ~pricing();

private:
    Ui::pricing *ui;
};

#endif // PRICING_H
