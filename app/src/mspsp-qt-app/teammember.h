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
    int Id() const { return id; }
    void Id(int val) { id = val; }

private:
    int id;
    std::string name;
};

#endif // TEAMMEMBER_H
