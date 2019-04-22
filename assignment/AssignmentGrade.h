#ifndef ASSIGNMENTGRADE_H
#define ASSIGNMENTGRADE_H

#include <string>
using namespace std;
class AssignmentGrade{
    public:
        AssignmentGrade();
        AssignmentGrade(double init_score);
        AssignmentGrade(string init_course,
                        double init_maxscore,
                        double init_score,);
        AssignmentGrade(string init_course,
                        double init_maxscore);
        // Methods
        double calculate_percentage();
        double calculate_letter_grade();
        void assign_score(double new_score);
        void assign_maxscore(double new_maxscore);
        void assign_course(string new_course);
    private:
        string subject_class;
        double score, max_score;
};

#endif // ASSIGNMENTGRADE_H
