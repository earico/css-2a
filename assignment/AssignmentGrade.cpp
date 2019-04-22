#include "AssignmentGrade.h"
#include <cassert>
using namespace std;

AssignmentGrade::AssignmentGrade(){
    //ctor
    subject_class = "";
    score = 0;
    max_score = 0;
}

AssignmentGrade::AssignmentGrade(double init_score){
    subject_class = "";
    max_score = 0;
    assert(init_score >= 0);
    score = init_score;
}

AssignmentGrade(string init_course, double init_maxscore, double init_score,){
    assert(init_maxscore >= 0);
    assert(init_score >= 0);
    subject_class = init_course;
    max_score = init_maxscore;
    score = init_score;
}
/*

AssignmentGrade(string init_course,
                double init_maxscore);
// Methods
double calculate_percentage();
double calculate_letter_grade();
void assign_score(double new_score);
void assign_maxscore(double new_maxscore);
void assign_course(string new_course);
