#include "utility.h"

Utility::Utility()
{
}

std::vector<std::string> SplitString(const std::string& record, char delimiter)
{
    std::vector<std::string> tokens;

    std::stringstream ss(record);
    std::string item;

    if (record.find(delimiter) != std::string::npos) // First check if the string contains delimiter.
    {
        while (getline(ss, item, delimiter)) // For each delimiter, split the string.
        {
            tokens.push_back(item);
        }
    }

    return tokens;
}
