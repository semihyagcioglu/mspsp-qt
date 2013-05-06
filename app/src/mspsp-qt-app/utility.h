#ifndef UTILITY_H
#define UTILITY_H

#include <vector>
#include <sstream>

/*
    This class defines a set of methods that perform common and often re-used functions.
*/

class Utility
{
public:
    Utility();
    std::vector<std::string> SplitString(const std::string& record, char delimiter);

};

#endif // UTILITY_H
