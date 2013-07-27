#include "activity.h"

Activity::Activity()
{
}

Activity::Activity(int id, std::string name, int duration, std::vector<std::vector<int> > &skillReqs)
{
    this->SetActivitySettings(id, name, duration, skillReqs);
}

int Activity::GetDuration()
{
    return this->duration;
}

void Activity::SetActivitySettings(int id, std::string name, int duration, std::vector<std::vector<int> > &skillReqs)
{
    this->id = id;
    this->name = name;
    this->duration = duration;
    this->startingTime = 0;
    this->finishingTime = 0;

    for (std::size_t i=0; i< skillReqs.size(); ++i)
    {
        this->skillRequirements.push_back(skillReqs.at(i));
    }
}
