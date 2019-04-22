#include "Slot.h"
#include "VendingMachine.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

Slot::Slot(){
	product_name = " ";
	product_cost = 0.00;
	product_quantity = 0;
}

Slot::Slot(string product_name, double product_cost, int product_quantity){
    product_name = this->product_name;
    assert(product_cost >= 0);
	product_cost = this->product_cost;
    assert(product_quantity >= 0);
	product_quantity = this->product_quantity;
}

void Slot::decreaseQuantity(){
	product_quantity = product_quantity-1;
}

void Slot::resetQuantity(int amount){
	product_quantity = amount;
}

bool Slot::isEmpty(){
	if (product_quantity == 0)
		return true;
	else
		return false;
}
