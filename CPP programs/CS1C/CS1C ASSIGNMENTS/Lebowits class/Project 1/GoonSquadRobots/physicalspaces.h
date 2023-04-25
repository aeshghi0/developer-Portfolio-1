#ifndef PHYSICALSPACES_H
#define PHYSICALSPACES_H

#include <QDialog>

namespace Ui {
class physicalSpaces;
}

class physicalSpaces : public QDialog
{
    Q_OBJECT

public:
    explicit physicalSpaces(QWidget *parent = nullptr);
    ~physicalSpaces();

private slots:
    void on_backToHomeButton_clicked();

private:
    Ui::physicalSpaces *ui;
};

#endif // PHYSICALSPACES_H
