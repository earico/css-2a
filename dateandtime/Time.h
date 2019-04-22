#ifndef TIME_H
#define TIME_H

class Time{
	public:
		Time();
		Time(int hours, int minutes, int seconds, char aop);

		//getters and setters
		int getHour()const{return hours;}
		int getMinutes()const{return minutes;}
		int getSeconds()const{return seconds;}
		char getAOP()const{return aop;}

		void setHour(int hours);
		void setMinutes(int minutes);
		void setSeconds(int seconds);
		void setAOP(char aop);

		//methods
		void displayMilitaryTime();
		void displayTime();

	private:
		 int hours, minutes, seconds;
		 char aop;

};

#endif //TIME_H
