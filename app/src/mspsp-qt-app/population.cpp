#include "population.h"

Population::Population()
{
    this->members.clear();
}

void Population::AddMember(Chromosome *phenotype)
{
    this->members.push_back(phenotype);
}

Chromosome *Population::GetMemberAt(int i)
{
    return this->members.at(i);
}

void Population::RemoveAllMembers()
{
    members.clear();
}
