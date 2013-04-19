#ifndef ACTIVITY_H
#define ACTIVITY_H

/*
    This class is a representation of an activity in a project.
*/
class Activity
{
public:
    Activity();
private:
    int id;
    string name;
    double duration;
    int startingTime;
    int finishingTime;
};

#endif // ACTIVITY_H
