#include "settings.h"

Settings::Settings()
{
    SetToDefaultValues();
}

Settings::Settings(int maximumScheduleLimit, int populationSize)
{
    this->MAXIMUM_SCHEDULE_LIMIT = maximumScheduleLimit;
    this->POPULATION_SIZE = populationSize;
}

Settings::~Settings()
{

}

// Set to default values.
void Settings::SetToDefaultValues()
{
    this->FILE_PATH="..\\";
    this->REPORT_PATH = "..\\Reports\\";
    this->INSTANCE_PATH = "..\\Instances\\";
    this->INSTANCE_TYPE ="*.sm";

    this->POPULATION_SIZE = 30;
    this->CROSSOVER_PROBABILITY = 1.00;
    this->MUTATION_PROBABILITY = 0.1;
    this->TOURNAMENT_SIZE = 2;
    this->ELITE_RATE = 0.1;
    this->IS_ELITES_ALLOWED = true;
    this->ELITE_SIZE = this->POPULATION_SIZE * this->ELITE_RATE;
    this->SELECT_ONE_PARENT_FROM_ELITES = true;
    this->MUTATE_ONLY_ON_IMPROVEMENT = true;
    this->IS_ADAPTIVE = true;
    this->SELECTION_METHOD = TOURNAMENT_SELECTION;
    this->CROSSOVER_METHOD = SINGLE_POINT_CROSS_OVER;
    this->MUTATION_METHOD = SWAP_ACTIVITY_AND_TEAM_MEMBER_ASSIGNMENT;
    this->REPLACEMENT_METHOD = PERCENT90_REPLACEMENT;
    this->SCHEDULE_COEFFICIENT = 250;
    this->MAXIMUM_SCHEDULE_LIMIT = this->POPULATION_SIZE * this->SCHEDULE_COEFFICIENT;
    this->MAXIMUM_TIME_LIMIT = 0;
    this->CONVERGENCE_COUNT = 1000;
    this->ALLOW_IMMIGRATION = false;
    this->IMMIGRATION_RATIO = 0.6;
}
