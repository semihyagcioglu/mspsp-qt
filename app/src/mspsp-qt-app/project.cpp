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
