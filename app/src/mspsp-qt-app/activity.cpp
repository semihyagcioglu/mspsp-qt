#include "activity.h"

Activity::Activity()
{
}

Activity::Activity(int id, std::string name, int duration, std::vector<std::vector<int> > &skillReqs)
{
    this->SetActivitySettings(id, name, duration, skillReqs);
}

void Activity::SetActivitySettings(int id, std::string name, int duration, std::vector<std::vector<int> > &skillReqs)
{
    this->id = id;
    this->name = name;
    this->duration = duration;
    this->startingTime = 0;
    this->finishingTime = 0;

    for (std::size_t i=0; i< skillReqs.size(); ++i)
    {
        this->skillRequirements.push_back(skillReqs.at(i));
    }
}

int Activity::GetDuration()
{
    return this->duration;
}

bool Activity::AreSkillRequirementsSatisfied()
{
    std::vector<TeamMember*> assignedTeamMembersTmp = GetAssignedTeamMembers();

    for(std::size_t i = 0; i < skillRequirements.size(); ++i) // For each skill level.
    {
        // Sort sums of skill of assigned team members first.
        SortAssignedTeamMembersBySkillCount(i);

        for(std::size_t j = 0; j < skillRequirements.at(i).size(); ++j) // for each skill.
        {
            int sum = 0;

            for (std::size_t k = 0; k < assignedTeamMembersTmp.size(); ++k)
            {
                TeamMember* teamMember = assignedTeamMembersTmp.at(k);
                int hasSkill = teamMember->GetSkillAt(i,j);

                if(hasSkill == 1)
                {
                    sum++;
                    assignedTeamMembersTmp.erase(assignedTeamMembersTmp.begin()+k); //
                    k = 0;
                }

                if (sum == skillRequirements.at(i).at(j))
                {
                    break;
                }
            }

            if (sum < skillRequirements.at(i).at(j))
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }

    return false; // FIX: For now assume that every team member in the project have every skill activities require.
}

void Activity::SortAssignedTeamMembersBySkillCount(int level) // FIX: Skill level is yet to be considered.
{
    std::sort(assignedTeamMembers.begin(), assignedTeamMembers.end(), CompareBySkillSum);
}

int Activity::GetSkillRequirementsBySkill( int skillId )
{
    int skillIndex = skillId; // FIX: Reconsider this!

    int sum = 0;

    for(std::size_t i = 0; i < skillRequirements.size(); ++i) // For each skill level
    {
        if(skillRequirements.at(i).at(skillIndex) == 1)
        {
            ++sum;
        }
    }

    return sum;
}

void Activity::AssignTeamMember( TeamMember* teamMember )
{
    if(std::find(this->assignedTeamMembers.begin(), this->assignedTeamMembers.end(), teamMember) == this->assignedTeamMembers.end())
    {
        /* Selected team member is not in the assigned team member list for the activity.*/
        this->assignedTeamMembers.push_back(teamMember);
    }
}

std::vector<TeamMember*> Activity::GetAssignedTeamMembers()
{
    return this->assignedTeamMembers;
}

TeamMember * Activity::GetAssignedTeamMemberAt(std::size_t i )
{
    if(i < this->assignedTeamMembers.size())
    {
        return this->assignedTeamMembers.at(i);
    }
    else
    {
        return NULL;
    }
}

void Activity::RemoveTeamMemberAssignment( TeamMember* teamMember )
{
    for(std::size_t i = 0; i < this->assignedTeamMembers.size(); ++i)
    {
        if(GetAssignedTeamMemberAt(i)->GetId() == teamMember->GetId())   //id found at index i
        {
            this->assignedTeamMembers.erase(assignedTeamMembers.begin()+i);
            break;
        }
    }
}

void Activity::AddPredecessor( Activity* predecessor )
{
    this->predecessors.push_back(predecessor);
}

bool CompareBySkillSum(TeamMember* a, TeamMember* b)
{
    return a->GetSkillSumForEachLevel(0) < b->GetSkillSumForEachLevel(0);
}
