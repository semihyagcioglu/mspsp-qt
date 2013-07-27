#include "project.h"

Project::Project()
{
}

Project::Project(int id, std::string name)
{
    this->SetProjectDetails(id, name);
}

Project::~Project(void)
{
}

void Project::SetProjectDetails(int id, std::string name)
{
    this->id=id;
    this->name = name;
    this->duration = 0;
    this->upperBound = 0;
}

int Project::GetUpperBound()
{
    return this->upperBound;
}

void Project::AddActivity(Activity* activity)
{
    this->activities.push_back(activity);
}

Activity* Project::GetActivityAt(int index)
{
    if(index < this->activities.size())
    {
        return this->activities.at(index);
    }
    else
    {
        return NULL;
    }
}

Activity* Project::GetActivityById(int id)
{
    for(int i = 0; i < this->activities.size(); ++i)
    {
        if(GetActivityAt(i)->GetId() == id)   //id found at index i
        {
            return GetActivityAt(i);
        }
    }

    return NULL;   //id not found
}

void Project::AddTeamMember( TeamMember* teamMember )
{
    this->teamMembers.push_back(teamMember);
}

TeamMember* Project::GetTeamMemberAt( int index )
{
    if(index < this->teamMembers.size())
        return this->teamMembers.at(index);
    else
        return NULL;
}

TeamMember* Project::GetTeamMemberById( int id )
{
    for(int i = 0; i < teamMembers.size(); ++i)
    {
        if(GetTeamMemberAt(i)->Id() == id)   //id found at index i
        {
            return GetTeamMemberAt(i);
        }
    }

    return NULL;   //id not found
}
