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

std::string Utility::GetDateTime()
{
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );

    int yearval=(now->tm_year + 1900);
    int monthval=(now->tm_mon + 1);
    int dayval=(now->tm_mday);
    int hourval=(now->tm_hour);
    int minval=(now->tm_min);
    int secval=(now->tm_sec);

    char c_year[12];
    sprintf_s(c_year, "%d", yearval);
    char c_month[12];
    sprintf_s(c_month, "%d", monthval);
    char c_day[12];
    sprintf_s(c_day, "%d", dayval);
    char c_hour[12];
    sprintf_s(c_hour, "%d", hourval);
    char c_min[12];
    sprintf_s(c_min, "%d", minval);
    char c_sec[12];
    sprintf_s(c_sec, "%d", secval);

    std::string output = "";

    output += c_year;
    output += "-";
    output += c_month;
    output += "-";
    output += c_day;
    output += "_";
    output += c_hour;
    output += "-";
    output += c_min;
    output += "-";
    output += c_sec;

    return output;
}
