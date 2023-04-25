#include <QtTest>

// add necessary includes here

class BulkClub : public QObject
{
    Q_OBJECT

public:
    BulkClub();
    ~BulkClub();

private slots:
    void test_case1();

};

BulkClub::BulkClub()
{

}

BulkClub::~BulkClub()
{

}

void BulkClub::test_case1()
{

}

QTEST_APPLESS_MAIN(BulkClub)

#include "tst_bulkclub.moc"
