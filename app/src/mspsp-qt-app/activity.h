#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <string>
#include <vector>
#include <algorithm>

/*
    This class is a representation of an activity in a project.
*/
class Activity
{
public:
    Activity();
    Activity(int id, std::string name, int duration);
    void SetActivitySettings(int id, std::string name, int duration);
    int GetDuration();
    int Id() const { return id; }
    void Id(int val) { id = val; }

private:
    int id;
    std::string name;
    int duration;
    int startingTime;
    int finishingTime;
};

#endif // ACTIVITY_H
