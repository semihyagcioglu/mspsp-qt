#ifndef PROJECTTEST_H
#define PROJECTTEST_H

#include <QDebug>
#include "autotest.h"
#include "../../../app/src/mspsp-qt-app/project.h"

class ProjectTest: public QObject
{
    Q_OBJECT

public:
    ProjectTest();

private slots:
    void init();
    void initTestCase();
    void UnitTestProject();
    void cleanup();
    void cleanupTestCase();
};

DECLARE_TEST(ProjectTest)


#endif // PROJECTTEST_H
