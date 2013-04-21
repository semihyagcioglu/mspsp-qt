#include "projecttest.h"

ProjectTest::ProjectTest()
{
}

void ProjectTest::init()
{
    //qDebug() << endl <<"init is called before EVERY test function";
}

void ProjectTest::initTestCase()
{
    //qDebug() << endl  << "initTestCase is called at the start of the test case (once per program)";
}

void ProjectTest::UnitTestProject()
{
    int projectId = 1;
    std::string projectName = "mspsp-qt-test";

    Project* project = new Project(projectId, projectName);

    QVERIFY(project->GetUpperBound() == 0); // By definition the upperbound must be equal to 0 when the project instance is created.
}

void ProjectTest::cleanup()
{
    //qDebug() << endl << "cleanup is called AFTER every test function";
}

void ProjectTest::cleanupTestCase()
{
    //qDebug() << endl << "cleanupTestCase is called at the end of the test case (once per program)";
}
