#include "chromosome.h"

Chromosome::Chromosome()
{
}

void Chromosome::SetFitness(double fitness)
{
    this->fitness = fitness;
}

double Chromosome::GetFitness()
{
    return this->fitness;
}
