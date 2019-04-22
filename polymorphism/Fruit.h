#ifndef FRUIT_H_INCLUDED
#define FRUIT_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Fruit{
	public:
		Fruit(){name = "";}
		Fruit(string name){this->name = name;}
		string getName()const{return name;}
		void setName(string name){this->name = name;}
		void display()const{cout << "name: " << name << endl;}
	private:
		string name;

};
#endif // FRUIT_H_INCLUDED
