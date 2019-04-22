#ifndef VENDINGMACHINE_HPP
#define VENDINGMACHINE_HPP
#include "Slot.h"
#include <string>
#include <iostream>

using namespace std;

class VendingMachine{
	public:
		//ctors
		VendingMachine();

		//accessors & mutators
		double getMoney()const{return money;}
		double getCustomerPayment()const{return customer_payment;}
		string getName()const{return name;}

		void setMoney(double money){this->money = money;}
		void setCustomerPayment(double customer_payment){this->customer_payment = customer_payment;}
		void setName(string name){this->name = name;}

		void displayContents();
		void viewCost(int row, int col);
		void purchase();
	private:
		double money;
		double customer_payment;
		Slot slots[3][3];
		string name;
};

#endif //VENDINGMACHINE_H
