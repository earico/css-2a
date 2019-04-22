#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(){
    day = 0;
    month = 0;
    year = 0;
}

void Date::init_date(int init_day, int init_month, int init_year){
    day = init_day;
    month = init_month;
    year = init_year;
}

unsigned int Date::getDay(int getDay)const{
    getDay = day;
    return getDay;
}

unsigned int Date::getMonth(int getMonth)const{
    getMonth = month;
    return getMonth;
}

unsigned int Date::getYear(int getYear)const{
    getYear = year;
    return getYear;
}

void Date::setDay(unsigned int setDay){
    year = setDay;
}

void Date::setMonth(unsigned int setMonth){
    month = setMonth;
}

void Date::setYear(unsigned int setYear){
    year = setYear;
}

void Date::displayDate(){
    cout << day << "/" << month << "/" << year << endl;
}
