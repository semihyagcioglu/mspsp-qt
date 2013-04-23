#include "project.h"

Project::Project()
{
}

Project::Project(int id, std::string name)
{
    this->SetProjectSettings(id, name);
}

void Project::SetProjectSettings(int id, std::string name)
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
        if(GetActivityAt(i)->Id() == id)   //id found at index i
        {
            return GetActivityAt(i);
        }
    }

    return NULL;   //id not found
}
