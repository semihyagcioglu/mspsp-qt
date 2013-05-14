#include <QApplication>
#include "widget.h"
#include "project.h"

int main(int argc, char *argv[])
{
    // At this point the application is doing nothing, this is just a starting point for the upcoming commits.
    QApplication a(argc, argv);
    Widget w;
    w.show();
    
    return a.exec();
}
