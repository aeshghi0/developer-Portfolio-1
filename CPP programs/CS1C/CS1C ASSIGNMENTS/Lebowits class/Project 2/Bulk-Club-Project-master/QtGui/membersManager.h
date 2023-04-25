#ifndef MEMBERSMANAGER_H
#define MEMBERSMANAGER_H

#include <QDialog>

namespace Ui {
class membersManager;
}

class membersManager : public QDialog
{
    Q_OBJECT

public:
    explicit membersManager(QWidget *parent = 0);
    ~membersManager();

private:
    Ui::membersManager *ui;
};

#endif // MEMBERSMANAGER_H
