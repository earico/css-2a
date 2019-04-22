#include "Animal.hpp"
#include <string>
#include <iostream>
#include <fstream>

Animal::Animal(){
	gender = "";
	name = "";
	age = 0;
}

Animal::Animal(string gender, string name, int age){
	this->gender = gender;
	this->name = name;
	this->age = age;
};

void Animal::sound()const{
	cout << "Animal sound unavailable." << endl;
}
