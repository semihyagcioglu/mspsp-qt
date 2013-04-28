#ifndef POPULATION_H
#define POPULATION_H

#include <vector>
#include "chromosome.h"

class Population
{
public:
    Population();

    void AddMember(Chromosome* phenotype);
    Chromosome* GetMemberAt(int i);

private:
    std::vector<Chromosome*> members;
};

#endif // POPULATION_H
