#include "Time.h"
#include <iostream>
#include <cassert>
#include <iostream>

Time::Time(){
	hours = 12;
	minutes = 0;
	seconds = 0;
	aop = 'A';
}

Time::Time(int hours, int minutes, int seconds, char aop){
	hours = this->hours;
	minutes = this->minutes;
	seconds = this->seconds;
	aop = this->aop;
}

void Time::setHour(int hours){
	assert(hours > 0 && hours < 13);
	this->hours = hours;
}

void Time::setMinutes(int minutes){
	assert(minutes >= 0 && minutes < 60);
	this->minutes = minutes;
}

void Time::setSeconds(int seconds){
	assert(seconds >= 0 && seconds < 60);
	this->seconds = seconds;
}

void Time::setAOP(char aop){
	assert(aop == 'A' || aop == 'P');
	this->aop = aop;
}

void Time::displayMilitaryTime(){
	if (hours == 12 && minutes < 10 && seconds < 10){
		hours = 0;
		std::cout << "0" << hours << ":0" << minutes << ":0" << seconds << std::endl;
	}

	if (hours >= 10 && hours < 12 && minutes > 10 && seconds > 10)
		std::cout << hours << ":" << minutes << ":" << seconds << std::endl;

	if (hours < 10 && minutes < 10 && seconds < 10)
		std::cout << "0" << hours << ":" << minutes << ":" << seconds << std::endl;
}

void Time::displayTime(){
	if (hours < 10)
		std::cout << "0";
	std::cout << hours;

	if (minutes < 10)
		std::cout << "0";
	std::cout << minutes;

	if (seconds < 10)
		std::cout << "0";
	std::cout << "seconds";

	std::cout << " " << aop << "M" << std::endl;
}
