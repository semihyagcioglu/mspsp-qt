#ifndef GA_H
#define GA_H

#include <string>
#include <vector>
#include "population.h"
#include "project.h"

class GA
{
public:

    GA();
    GA(Project* project);

    // Create the initial population.
    Population CreateInitialPopulation();

private:

    int populationSize;
    double crossoverRate;
    double mutationRate;
    bool isElitesAllowed;

    Project* project;
};

#endif // GA_H
