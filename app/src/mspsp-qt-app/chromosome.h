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
    Gene* GetGeneAt(int i);
    void SetFitness(int fitness);
    int GetFitness();
    size_t GetGeneCount();
    void SwapGenes(int firstPosition, int secondPosition);
    int GetPositionOfGene(Gene* gene);
    std::vector<Gene*> GetGenes() const { return genes; }
    void SetGenes(std::vector<Gene*> val) { genes = val; }

private:
    int fitness;
    std::vector<Gene*> genes;
};

#endif // CHROMOSOME_H
