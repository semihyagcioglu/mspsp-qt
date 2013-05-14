#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <vector>
#include <algorithm>
#include "activity.h"
#include "settings.h"
#include "teammember.h"

/*
    This class is a representation of a project.
*/
class Project
{
public:
    Project();
    Project(int id, std::string name);
    ~Project(void);
    void SetProjectDetails(int id, std::string name);
    int GetUpperBound(); // Get the sum of the durations of all activities in the project.
    void AddActivity(Activity* activity);
    Activity* GetActivityAt(int index);
    Activity* GetActivityById(int id);
    void AddTeamMember(TeamMember* teamMember);
    TeamMember* GetTeamMemberAt(int index);
    TeamMember* GetTeamMemberById(int id);

private :
    int id;
    std::string name;
    int duration;
    int upperBound; // Completion time of the project in the worst case.

    std::vector<Activity*> activities; // List of activities in the project.
    std::vector<TeamMember*> teamMembers; // List of team members available in the project.
    Settings* settings;
};

#endif // PROJECT_H
