#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include <iostream>
#include "Animal.hpp"
using namespace std;

class Cat : public Animal{
	public:
		Cat(){cry = "meow";}
		void sound()const{cout << cry << endl;}
	private:
		string cry;		
};
#endif // CAT_H
