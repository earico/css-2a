#ifndef EXAM_H
#define EXAM_H
#include <string>

class Exam{
	public:
		//ctors
		Exam();
		Exam(string course, double grade, int questions, int score);
		
		//Accessors and Manipulators
		string getCourse()const {return course;}
		double getGrade()const {return grade;}
		int getQuestions()const {return questions;}
		int getScore()const {return score;}
		
		void setCourse(std::string course){this->course = course;}
		void setGrade(double grade){this->grade = grade;}
		void SetQuestions(int questions){this->questions = questions;}
		void setScore(int score){this->score = score;}

		//Methods
		void displayInfo();
		void calculateGrade();

	private:
		std::string course;
		double grade;
		int questions;
		int score;
};

#endif
