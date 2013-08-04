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
    int GetId() const { return id; }
    void SetId(int val) { id = val; }
    int GetDuration();
    bool AreSkillRequirementsSatisfied(); // Check if activity can be performed with the assigned team members.
    void SortAssignedTeamMembersBySkillCount(int level); // Sort by single skill level.
    int GetSkillRequirementsBySkill(int skillId); // Hierarchical skill levels are not considered yet.
    void AssignTeamMember(TeamMember* teamMember); // Assign the team member to activity and sets the earliest available time period of the team member to the finishing time of the activity.
    std::vector<TeamMember *> GetAssignedTeamMembers(); // Returns the assigned team members for the activity.
    TeamMember * GetAssignedTeamMemberAt(std::size_t i);
    void RemoveTeamMemberAssignment(TeamMember* teamMember); // Remove given team member from assigned team members list.
    void AddPredecessor(Activity* predecessor); // Add an activity as a predecessor to the activity. (An activity can not start until all the predecessors of the activity is scheduled.)

private:
    int id;
    std::string name;
    int duration;
    int startingTime;
    int finishingTime;
    std::vector<std::vector<int> > skillRequirements;
    std::vector<TeamMember*> assignedTeamMembers;
    std::vector<Activity*> predecessors; // The activity can not be executed until the predecessor activities are finished.
};

bool CompareBySkillSum(TeamMember* a, TeamMember* b); // Reconsider!

#endif // ACTIVITY_H
