#include "gene.h"

Gene::Gene()
{
}

void Gene::SetCode(std::string value)
{
    this->code = value;
}

Gene::Gene( Gene* _gene )
{
    this->SetCode(_gene->GetCode());
    this->SetId(_gene->GetId());
}

std::string& Gene::GetCode()
{
    return this->code;
}
