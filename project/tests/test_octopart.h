#ifndef TEST_OCTOPART_H
#define TEST_OCTOPART_H

#include <QObject>
#include "autotest.h"


class test_octopart : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void cleanupTestCase();
    void testCategorieQuery();
};

//DECLARE_TEST(test_octopart);

#endif // TEST_OCTOPART_H
