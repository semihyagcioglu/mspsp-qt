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
        TOURNAMENT_SELECTION
    };

    // Types of crossover methods.
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
        SWAP_TEAM_MEMBER_ASSIGNMENT,
        SWAP_ACTIVITY,
        SWAP_ACTIVITY_AND_TEAM_MEMBER_ASSIGNMENT
    };

    // Types of replacement methods.
    enum REPLACEMENT_METHOD
    {
        STEADY_STATE
    };

    Settings();
    Settings(int maximumScheduleLimit, int populationSize);

    int GetMaximumScheduleLimit() const { return this->maximumScheduleLimit; }
    void SetMaximumScheduleLimit(int val) { this->maximumScheduleLimit = val; }

    int GetPopulationSize() const { return this->populationSize; }
    void SetPopulationSize(int val) { this->populationSize = val; }

    std::string GetFilePath() const;
    void SetFilePath(const std::string &value);

    double GetCrossoverRate() const;
    void SetCrossoverRate(double value);

    double GetMutationRate() const;
    void SetMutationRate(double value);

    int GetTournamentSize() const;
    void SetTournamentSize(int value);

    double GetEliteRate() const;
    void SetEliteRate(double value);

    bool GetIsElitesAllowed() const;
    void SetIsElitesAllowed(bool value);

    int GetEliteSize() const;
    void SetEliteSize(int value);

    SELECTION_METHOD GetSelectionMethod() const;
    void SetSelectionMethod(const SELECTION_METHOD &value);

    CROSS_OVER_METHOD GetCrossOverMethod() const;
    void SetCrossOverMethod(const CROSS_OVER_METHOD &value);

    MUTATION_METHOD GetMutationMethod() const;
    void SetMutationMethod(const MUTATION_METHOD &value);

    REPLACEMENT_METHOD GetReplacementMethod() const;
    void SetReplacementMethod(const REPLACEMENT_METHOD &value);

private:

    /* Application Settings */
    int maximumScheduleLimit;
    std::string filePath;

    /* Genetic Algorithm Settings */
    int populationSize;
    double crossoverRate;
    double mutationRate;
    int tournamentSize;
    double eliteRate;
    bool isElitesAllowed;
    int eliteSize;
    SELECTION_METHOD selectionMethod;
    CROSS_OVER_METHOD crossOverMethod;
    MUTATION_METHOD mutationMethod;
    REPLACEMENT_METHOD replacementMethod;
};

#endif // SetTINGS_H
