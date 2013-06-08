#ifndef SetTINGS_H
#define SetTINGS_H

#include <string>

class Settings
{
public:

    // Types of selection methods.
    enum SELECTION_METHOD
    {
        RANK_SELECTION,
        ROULETTE_WHEEL_SELECTION,
        TOURNAMENT_SELECTION,
        RANDOM_SELECTION,
        ELITIST_SELECTION,
        ROUND_ROBIN_SELECTION
    };

    // Types of replacement methods.
    enum REPLACEMENT_METHOD
    {
        STEADY_STATE,
        PERCENT90_REPLACEMENT
    };

    // Types of cross-over methods.
    enum CROSS_OVER_METHOD
    {
        SINGLE_POINT_CROSS_OVER,
        TWO_POINT_CROSS_OVER,
        N_POINT_CROSS_OVER,
        UNIFORM_CROSS_OVER
    };

    // Types of mutation methods.
    enum MUTATION_METHOD
    {
        /*INSERT_MUTATION,
            SWAP_MUTATION,
            INVERT_MUTATION,
            SCRAMBLE_MUTATION,
            GAUSSIAN_MUTATION,
            BOUNDARY_MUTATION */
        SWAP_TEAM_MEMBER_ASSIGNMENT,
        SWAP_ACTIVITY,
        SWAP_ACTIVITY_AND_TEAM_MEMBER_ASSIGNMENT
    };

    Settings();
    Settings(int MAXIMUM_SCHEDULE_LIMIT, int POPULATION_SIZE);
    Settings::~Settings();
    void SetToDefaultValues();

    /************************************************************************/
    /* Application Settings                                                 */
    /************************************************************************/
    std::string FILE_PATH;
    std::string REPORT_PATH;
    std::string INSTANCE_PATH;
    std::string INSTANCE_TYPE;
    int SCHEDULE_COEFFICIENT;
    int MAXIMUM_SCHEDULE_LIMIT; // The meta-heuristic algorithm will be terminated if this count is reached.
    int MAXIMUM_TIME_LIMIT; // In milliseconds. The meta-heuristic algorithm will be terminated if this time is reached.
    int CONVERGENCE_COUNT; // The number to check whether a fitness plateau is reached by controlling how many times the GA can not produce a better solution.


    /************************************************************************/
    /* Algorithm Settings                                                   */
    /************************************************************************/

    int POPULATION_SIZE;
    double CROSSOVER_PROBABILITY;
    double MUTATION_PROBABILITY;
    bool MUTATE_ONLY_ON_IMPROVEMENT;
    int TOURNAMENT_SIZE;
    double ELITE_RATE;
    bool IS_ELITES_ALLOWED;
    int ELITE_SIZE;
    bool SELECT_ONE_PARENT_FROM_ELITES;
    bool IS_ADAPTIVE;
    bool ALLOW_IMMIGRATION;
    double IMMIGRATION_RATIO;

    Settings::SELECTION_METHOD SELECTION_METHOD;
    Settings::CROSS_OVER_METHOD CROSSOVER_METHOD;
    Settings::MUTATION_METHOD MUTATION_METHOD;
    Settings::REPLACEMENT_METHOD REPLACEMENT_METHOD;

private:

};

#endif // SetTINGS_H
