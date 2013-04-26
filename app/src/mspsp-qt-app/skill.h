#ifndef SKILL_H
#define SKILL_H

#include <string>
#include <vector>
#include "teammember.h"

/*
    This class is a representation of a skill in a project.
*/
class Skill
{
public:
    Skill();
    Skill(int id, std::string name, std::string description, int level);
    ~Skill();

    // Add a team member to the list who has this skill;
    void AddSkilledTeamMember(TeamMember* teamMember);
    // Get the team members who has this skill.
    std::vector<TeamMember*> GetSkilledTeamMembers();

    int GetId() const { return this->id; }
    void SetId(int val) { this->id = val; }

private:
    int id;
    std::string name;
    std::string description;
    int level;
    std::vector<TeamMember*> skilledTeamMembers;
};

#endif // SKILL_H
