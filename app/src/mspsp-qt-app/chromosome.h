#ifndef CHROMOSOME_H
#define CHROMOSOME_H

class Chromosome
{
public:
    Chromosome();
    void SetFitness(double fitness);
    double GetFitness();

private:
    double fitness;
};

#endif // CHROMOSOME_H
