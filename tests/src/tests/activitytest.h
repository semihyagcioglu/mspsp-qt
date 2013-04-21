#ifndef ACTIVITYTEST_H
#define ACTIVITYTEST_H

#include <QDebug>
#include "autotest.h"
#include "../../../app/src/mspsp-qt-app/activity.h"

class ActivityTest: public QObject
{
    Q_OBJECT

public:
    ActivityTest();

private slots:
    void init();
    void initTestCase();
    void UnitTestGetDuration();
    void cleanup();
    void cleanupTestCase();
};

DECLARE_TEST(ActivityTest)
#endif // ACTIVITYTEST_H
