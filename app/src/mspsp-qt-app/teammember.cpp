#include "teammember.h"

TeamMember::TeamMember()
{
}

TeamMember::TeamMember(int id, std::string name)
{
    this->SetTeamMemberSettings(id, name);
}

void TeamMember::SetTeamMemberSettings(int id, std::string name)
{
    this->id = id;
    this->name = name;
}

int TeamMember::GetSkillAt( int level, int domain )
{
    return skills.at(level).at(domain);
}

int TeamMember::GetSkillSumForEachLevel(int level)
{
    int sum = 0;

    int skillCount = skills.at(level).size();

    for (int i = 0; i < skillCount ; ++i)
    {
        if (skills.at(level).at(i)==1)
        {
            sum++;
        }
    }

    return sum;
}
