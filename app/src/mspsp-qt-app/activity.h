#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <string>
#include <vector>
#include <algorithm>

#include "skill.h"
#include "teammember.h"

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

    std::vector < TeamMember * > GetAssignedTeamMembers();
    bool AreSkillRequirementsSatisfied(); // Check if activity can be performed with the assigned team members.
    void SortAssignedTeamMembersBySkillCount(int level); // Sort by single skill level.

    int GetId() const { return id; }
    void SetId(int val) { id = val; }

private:
    int id;
    std::string name;
    int duration;
    int startingTime;
    int finishingTime;
    std::vector<std::vector<int> > skillRequirements;
    std::vector<TeamMember*> assignedTeamMembers;
};

bool CompareBySkillSum(TeamMember* a, TeamMember* b); // Reconsider!

#endif // ACTIVITY_H
