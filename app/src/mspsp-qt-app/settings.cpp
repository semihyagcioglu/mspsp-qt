#include "settings.h"

Settings::Settings()
{
}

Settings::Settings(int maximumScheduleLimit, int populationSize)
{
    this->SetMaximumScheduleLimit(maximumScheduleLimit);
    this->SetPopulationSize(populationSize);
}

std::string Settings::GetFilePath() const
{
    return filePath;
}

void Settings::SetFilePath(const std::string &value)
{
    filePath = value;
}

Settings::REPLACEMENT_METHOD Settings::GetReplacementMethod() const
{
    return replacementMethod;
}

void Settings::SetReplacementMethod(const REPLACEMENT_METHOD &value)
{
    replacementMethod = value;
}

Settings::MUTATION_METHOD Settings::GetMutationMethod() const
{
    return mutationMethod;
}

void Settings::SetMutationMethod(const MUTATION_METHOD &value)
{
    mutationMethod = value;
}

Settings::CROSS_OVER_METHOD Settings::GetCrossOverMethod() const
{
    return crossOverMethod;
}

void Settings::SetCrossOverMethod(const CROSS_OVER_METHOD &value)
{
    crossOverMethod = value;
}

Settings::SELECTION_METHOD Settings::GetSelectionMethod() const
{
    return selectionMethod;
}

void Settings::SetSelectionMethod(const SELECTION_METHOD &value)
{
    selectionMethod = value;
}

int Settings::GetEliteSize() const
{
    return eliteSize;
}

void Settings::SetEliteSize(int value)
{
    eliteSize = value;
}

bool Settings::GetIsElitesAllowed() const
{
    return isElitesAllowed;
}

void Settings::SetIsElitesAllowed(bool value)
{
    isElitesAllowed = value;
}

double Settings::GetEliteRate() const
{
    return eliteRate;
}

void Settings::SetEliteRate(double value)
{
    eliteRate = value;
}

int Settings::GetTournamentSize() const
{
    return tournamentSize;
}

void Settings::SetTournamentSize(int value)
{
    tournamentSize = value;
}

double Settings::GetMutationRate() const
{
    return mutationRate;
}

void Settings::SetMutationRate(double value)
{
    mutationRate = value;
}
double Settings::GetCrossoverRate() const
{
    return crossoverRate;
}

void Settings::SetCrossoverRate(double value)
{
    crossoverRate = value;
}
