#include "activity.h"

Activity::Activity()
{
}

Activity::Activity(int id, std::string name, int duration)
{
    this->SetActivitySettings(id, name, duration);
}

void Activity::SetActivitySettings(int id, std::string name, int duration)
{
    this->id = id;
    this->name = name;
    this->duration = duration;
    this->startingTime = 0;
    this->finishingTime = 0;
}

int Activity::GetDuration()
{
    return this->duration;
}
