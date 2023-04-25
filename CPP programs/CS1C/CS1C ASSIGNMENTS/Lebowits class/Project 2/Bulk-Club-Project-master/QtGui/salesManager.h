#ifndef SALESMANAGER_H
#define SALESMANAGER_H

#include "members.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant> //need for bindValue call.
#include <QDebug>

class salesManager
{
public:
    salesManager();
};

#endif // SALESMANAGER_H
