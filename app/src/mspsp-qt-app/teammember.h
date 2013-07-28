#ifndef TEAMMEMBER_H
#define TEAMMEMBER_H

#include <string>
#include <vector>

/*
    This class is a representation of a team member in a project.
*/
class TeamMember
{
public:
    TeamMember();
    TeamMember(int id, std::string name);

    void SetTeamMemberSettings(int id, std::string name);

    int GetSkillAt(int level, int domain);
    int GetSkillSumForEachLevel(int level); // For single skill level.

    int GetId() const { return id; }
    void SetId(int val) { id = val; }

private:
    int id;
    std::string name;
    std::vector<std::vector<int> > skills;
};

#endif // TEAMMEMBER_H
