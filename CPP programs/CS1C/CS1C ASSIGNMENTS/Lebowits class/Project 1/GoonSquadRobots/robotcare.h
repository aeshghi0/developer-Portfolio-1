#ifndef ROBOTCARE_H
#define ROBOTCARE_H

#include <QDialog>

namespace Ui {
class robotcare;
}

class robotcare : public QDialog
{
    Q_OBJECT

public:
    explicit robotcare(QWidget *parent = nullptr);
    ~robotcare();

private:
    Ui::robotcare *ui;
};

#endif // ROBOTCARE_H
