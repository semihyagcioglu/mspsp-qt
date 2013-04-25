#include "settings.h"

Settings::Settings()
{
}

Settings::Settings(int maximumScheduleLimit, int populationSize)
{
    this->SetMaximumScheduleLimit(maximumScheduleLimit);
    this->SetPopulationSize(populationSize);
}
