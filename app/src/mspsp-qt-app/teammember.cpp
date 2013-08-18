#include "teammember.h"

TeamMember::TeamMember()
{
}

TeamMember::TeamMember(int id, std::string name, std::vector<std::vector<int> >& skills)
{
    SetTeamMemberSettings(id, name, skills);
}

TeamMember::~TeamMember(void)
{
}

void TeamMember::SetTeamMemberSettings( int id, std::string name, std::vector<std::vector<int> >& skills)
{
    this->skills.clear();
    this->id = id;
    this->name = name;
    this->availableTimePeriod = 0;

    for(std::size_t i = 0; i < skills.size(); ++i)
    {
        this->skills.push_back(skills.at(i));
    }
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
