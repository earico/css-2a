#include "Inventory.h"
#include <cassert>
#include <iostream>
using namespace std;

void Inventory::addItem(string item){
	assert(used < CAPACITY);
	items[used] = item;
	used++;
}

void Inventory::print()const{
	for(int i =0; i < used; i++)
		cout << (i + 1) << ". " << items[i] << endl;
}
