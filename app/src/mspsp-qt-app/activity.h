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
    Activity(int id, std::string name, int duration, std::vector<std::vector<int> >& skillRequirements);
    ~Activity(void);
    void SetActivitySettings(int id, std::string name, int duration, std::vector<std::vector<int> >& skillRequirements);

    int GetDuration();
    int GetId() const { return id; }
    void SetId(int val) { id = val; }

private:
    int id;
    std::string name;
    int duration;
    int startingTime;
    int finishingTime;
    std::vector<std::vector<int> > skillRequirements;
};

#endif // ACTIVITY_H
