#ifndef SHEEP_HPP
#define SHEEP_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
using namespace std;

class Sheep : public Animal{
	public:
		Sheep(){cry = "baaa";}
		void sound()const{cout << cry << endl;}
	private:
		string cry;
};
#endif // SHEEP_H
