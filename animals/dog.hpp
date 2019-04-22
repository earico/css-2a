#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include <iostream>
#include "Animal.hpp"
using namespace std;

class Dog : public Animal{
	public:
		Dog(){cry = "woof";}
		void sound()const{cout << cry << endl;}
	private:
		string cry;
};
#endif // DOG_H
