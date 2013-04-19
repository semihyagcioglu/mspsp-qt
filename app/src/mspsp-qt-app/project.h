#ifndef PROJECT_H
#define PROJECT_H

/*
    This class is a representation of a project.
*/
class Project
{
public:
    Project();
private :
    int id;
    string name;
    double duration;
    double upperBound;
};

#endif // PROJECT_H
