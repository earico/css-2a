#ifndef APPLE_H_INCLUDED
#define APPLE_H_INCLUDED
#include "Fruit.h"
#include <string>
#include <iostream>
using namespace std;

class Apple : public Fruit{
	public:
		Apple(){color = "red"; type ="Gala"; flavor = "sweet";}
		void setColor(string c){this->color = c;}
		void setType(string t){this->type = t;}
		void setFlavor(string f){this->flavor = f;}
		string getColor()const{return color;}
		string getType()const{return type;}
		string getFlavor()const{return flavor;}
		void display()const{cout << "Color: " << color << "\nType: " << type << "\nFlavor: " << flavor << endl;}
	private:
		string color, type, flavor;
};
#endif // APPLE_H_INCLUDED
