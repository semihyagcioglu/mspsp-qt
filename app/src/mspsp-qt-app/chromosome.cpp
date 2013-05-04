#include "chromosome.h"

Chromosome::Chromosome()
{
}

void Chromosome::AddGene(Gene *gene)
{
    this->genes.push_back(gene);
}

void Chromosome::SetFitness(double fitness)
{
    this->fitness = fitness;
}

double Chromosome::GetFitness()
{
    return this->fitness;
}
