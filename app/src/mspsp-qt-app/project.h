#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <vector>
#include <algorithm>

/*
    This class is a representation of a project.
*/
class Project
{
public:
    Project();
    Project(int id, std::string name);
    void SetProjectSettings(int id, std::string name);
    int GetUpperBound(); // Get the sum of the durations of all activities in the project.
private :
    int id;
    std::string name;
    int duration;
    int upperBound;
};

#endif // PROJECT_H
