#include "memberTable.h"

MemberTable::MemberTable(const QString &tableName, QWidget *parent) :
    QWidget(parent)
{
    model = new QSqlTableModel(this);
        model->setTable(tableName);
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);
        model->select();

        model->setHeaderData(0, Qt::Horizontal, tr("Member ID"));
        model->setHeaderData(1, Qt::Horizontal, tr("Member Name"));
        model->setHeaderData(2, Qt::Horizontal, tr("Member Status"));
        model->setHeaderData(3, Qt::Horizontal, tr("Expiration Date"));

        QTableView *view = new QTableView;
        view->setModel(model);
        view->setFixedWidth(600);
        view->setFixedHeight(700);
        view->resizeColumnsToContents();

        submitButton = new QPushButton(tr("Submit"));
        submitButton->setDefault(true);
        revertButton = new QPushButton(tr("&Revert"));
        quitButton = new QPushButton(tr("Quit"));
        backButton = new QPushButton(tr("Back"));

        buttonBox = new QDialogButtonBox(Qt::Vertical);
        buttonBox->addButton(submitButton, QDialogButtonBox::ActionRole);
        buttonBox->addButton(revertButton, QDialogButtonBox::ActionRole);
        buttonBox->addButton(backButton, QDialogButtonBox::ActionRole);
        buttonBox->addButton(quitButton, QDialogButtonBox::RejectRole);

        connect(submitButton, &QPushButton::clicked, this, &MemberTable::submit);
        connect(revertButton, &QPushButton::clicked,  model, &QSqlTableModel::revertAll);
        connect(backButton, &QPushButton::clicked, this, &MemberTable::back);
        connect(quitButton, &QPushButton::clicked, this, &MemberTable::close);

        QHBoxLayout *mainLayout = new QHBoxLayout;
        mainLayout->addWidget(view);
        mainLayout->addWidget(buttonBox);
        setLayout(mainLayout);

        setWindowTitle(tr("Member's"));
}

MemberTable::~MemberTable() {
    delete widg;
}

void MemberTable::submit()
{
    model->database().transaction();
    if (model->submitAll()) {
        model->database().commit();
    } else {
        model->database().rollback();
        QMessageBox::warning(this, tr("Member's"),
                             tr("The database reported an error: %1")
                             .arg(model->lastError().text()));
    }
}

void MemberTable::back()
{
    menuAdministrator* newMenuPtr = new menuAdministrator(this);
    this->close();
    newMenuPtr->show();
}
