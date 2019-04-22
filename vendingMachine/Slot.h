#ifndef SLOT_HPP
#define SLOT_HPP
#include "VendingMachine.h"
#include <string>
#include <iostream>
using namespace std;

class Slot{
	public:
		//ctors
		Slot();
		Slot(string product_name, double product_cost, int product_quantity);

		//accessors & mutators
		string getProName()const{return product_name;}
		double getProCost()const{return product_cost;}
		int getProQuantity()const{return product_quantity;}

		void setProName(string product_name){this->product_name = product_name;}
		void setProCost(double product_cost){this->product_cost = product_cost;}
		void setProQuantity(int product_quantity){this->product_quantity = product_quantity;}

		//methods
		void decreaseQuantity();
		void resetQuantity(int product_quantity);
		bool isEmpty();
	private:
		string product_name;
		double product_cost;
		int product_quantity;
};

#endif //SLOT_HPP
