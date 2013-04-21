#include "activitytest.h"

ActivityTest::ActivityTest()
{
}

void ActivityTest::init()
{
}

void ActivityTest::initTestCase()
{
}


void ActivityTest::UnitTestGetDuration()
{
    int activityId = 1;
    std::string activityName = "develop-integration-tests";
    int duration = 6;

    Activity* activity = new Activity(activityId, activityName, duration);

    QVERIFY(activity->GetDuration() == duration);
}

void ActivityTest::cleanup()
{
}

void ActivityTest::cleanupTestCase()
{
}
