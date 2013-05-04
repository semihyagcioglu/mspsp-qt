#ifndef CHROMOSOME_H
#define CHROMOSOME_H

#include<vector>
#include "gene.h"

class Chromosome
{
public:
    Chromosome();
    void AddGene(Gene* gene);
    void SetFitness(double fitness);
    double GetFitness();

private:
    double fitness;
    std::vector<Gene*> genes;
};

#endif // CHROMOSOME_H
