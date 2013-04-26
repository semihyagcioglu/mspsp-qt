#include "skill.h"

Skill::Skill()
{
}

Skill::Skill(int id, std::string name, std::string description, int level)
{
    this->id = id;
    this->name = name;
    this->description = description;
    this->level = level;
}

Skill::~Skill()
{

}

std::vector<TeamMember*> Skill::GetSkilledTeamMembers()
{
    return this->skilledTeamMembers;
}

void Skill::AddSkilledTeamMember(TeamMember* teamMember)
{
    this->skilledTeamMembers.push_back(teamMember);
}
