#include "chromosome.h"

Chromosome::Chromosome()
{
}

Chromosome::~Chromosome()
{
    for (int i=0; i < GetGeneCount(); ++i)
    {
        delete genes[i];
        genes[i] = NULL;
    }
}

size_t Chromosome::GetGeneCount()
{
    return genes.size();
}

void Chromosome::AddGene(Gene* gene)
{
    Gene* _gene = new Gene(gene);

    genes.push_back(_gene);
}


void Chromosome::SetFitness(double fitness)
{
    this->fitness = fitness;
}

double Chromosome::GetFitness()
{
    return this->fitness;
}

void Chromosome::SwapGenes( int firstPosition, int secondPosition )
{
    std::swap(genes[firstPosition], genes[secondPosition]);
}
