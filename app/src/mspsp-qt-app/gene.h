#ifndef GENE_H
#define GENE_H

#include <string>

/*
    This class is a representation of a gene. In our model, a gene represents an activity and the assigned team members to the activity in the project.
    A gene consists of binary strings. In this case, to represent a gene we use binary representation, 1 represents a teammember in given index is assigned to the activity, 0 represents otherwise.
*/

class Gene
{
public:
    Gene();

    void SetCode(std::string value);
    std::string& GetCode();

    int GetId() const { return id; }
    void SetId(int val) { id = val; }

private:

    int id; // In our problem, id represents the id of the activity
    std::string code; // Binary representation of the gene.
};

#endif // GENE_H
