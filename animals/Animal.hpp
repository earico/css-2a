#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Animal{
	public:
		//ctors
		Animal();
		Animal(string gender, string name, int age);
		
		// methods
		virtual void sound()const;
	private:
		string gender, name;
		int age;
		
};
#endif // ANIMAL_H
