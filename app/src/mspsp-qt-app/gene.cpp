#include "gene.h"

Gene::Gene()
{
}

void Gene::SetCode(std::string value)
{
    this->code = value;
}

std::string& Gene::GetCode()
{
    return this->code;
}
