#ifndef DATETIME_H
#define DATETIME_H
#include "Time.h"

class DateTime{
	public:
		//ctors
		DateTime();
		DateTime(int month, int day, int year, Time time);

		//getters and setters
		int getMonth()const{return month;}
		int getDay()const{return day;}
		int getYear()const{return year;}
		Time getTime()const{return time;}

		void setMonth(int month);
		void setDay(int day);
		void setYear(int year);
		void setTime(Time time);

		//methods
		void displayDateTime();
	
	private:
		int month, day, year;
		Time time;
};

#endif //DATETIME_H
