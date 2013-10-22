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

Gene* Chromosome::GetGeneAt(int i)
{
    return genes[i];
}

void Chromosome::SetFitness(int fitness)
{
    this->fitness = fitness;
}

int Chromosome::GetFitness()
{
    return this->fitness;
}

void Chromosome::SwapGenes( int firstPosition, int secondPosition )
{
    std::swap(genes[firstPosition], genes[secondPosition]);
}

int Chromosome::GetPositionOfGene( Gene* gene )
{
    std::vector <Gene*>::iterator i = this->genes.begin ();
    int position = -1;

    while (i != this->genes.end ()){
        //cout << *i << endl;
        ++ i;
    }

    i = find (this->genes.begin (),this->genes.end (), gene);

    if (i != this->genes.end ())
    {
        position = distance(this->genes.begin (), i);
        //cout << "Value "<< *i;
        //cout << " found in the vector at position: " << nPosition << endl;
    }

    return position;
}
