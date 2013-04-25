#ifndef SETTINGS_H
#define SETTINGS_H

class Settings
{
public:
    Settings();
    Settings(int maximumScheduleLimit, int populationSize);

    int GetMaximumScheduleLimit() const { return this->maximumScheduleLimit; }
    void SetMaximumScheduleLimit(int val) { this->maximumScheduleLimit = val; }

    int GetPopulationSize() const { return this->populationSize; }
    void SetPopulationSize(int val) { this->populationSize = val; }

private:

    /* Application Settings */
    int maximumScheduleLimit;

    /* Genetic Algorithm Settings */
    int populationSize;

};

#endif // SETTINGS_H
