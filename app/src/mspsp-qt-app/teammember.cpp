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
