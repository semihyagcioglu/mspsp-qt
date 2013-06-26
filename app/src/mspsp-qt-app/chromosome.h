#ifndef CHROMOSOME_H
#define CHROMOSOME_H

#include<vector>
#include "gene.h"

class Chromosome
{
public:
    Chromosome();
    ~Chromosome();

    void AddGene(Gene* gene);
    void SetFitness(double fitness);
    double GetFitness();
    size_t GetGeneCount();
    void SwapGenes(int firstPosition, int secondPosition);

private:
    double fitness;
    std::vector<Gene*> genes;
};

#endif // CHROMOSOME_H
