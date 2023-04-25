#include "bulkclubproject.h"

BulkClubProject::BulkClubProject(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant BulkClubProject::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex BulkClubProject::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex BulkClubProject::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int BulkClubProject::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int BulkClubProject::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant BulkClubProject::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
