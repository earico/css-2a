#ifndef MERCHANDISE_H
#define MERCHANDISE_H
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Merchandise{
	public:
		Merchandise();
		Merchandise(double cost, int quantity, string description);

		double getCost()const{return cost;}
		int getQuantity()const{return quantity;}
		string getDescription()const{return description;}

		void setCost(double cost){this->cost = cost;}
		void setQuantity(int quantity){this->quantity = quantity;}
		void setDescription(string description){this->description = description;}
		
		friend ostream& operator <<(ostream& out, const Merchandise& object);	
	private:
		double cost;
		int quantity;
		string description;
};

#endif // MERCHANDISE_H
