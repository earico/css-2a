#include "VendingMachine.h"
#include "Slot.h"
#include <iostream>
#include <string>
using namespace std;

VendingMachine::VendingMachine(){
	money = 50;
	name = "Alisal Vending Machine";

	slots[0][0] = Slot("Doritos", 1.00, 20);
	slots[0][1] = Slot("Cheetos", 1.00, 20);
	slots[0][2] = Slot("Lays", 1.00, 20);
	slots[1][0] = Slot("Sun Chips", 1.00, 20);
	slots[1][1] = Slot("Gummies", 1.50, 20);
	slots[1][2] = Slot("Chocolate Chip Cookies", 1.50, 20);
	slots[2][0] = Slot("Brownie", 2.00, 20);
	slots[2][1] = Slot("Oatmeal Cookie", 1.50, 20);
	slots[2][2] = Slot("Gum", 0.50, 20);
}

void VendingMachine::purchase(){
	int row, col;
	cout << "\nEnter the row and column of the item you wish to purchase: ";
	cin >> row;
	cin >> col;
	cout << "Cost: " << slots[row][col].getProCost() << endl;
}

void VendingMachine::viewCost(int row, int col){
	cout << slots[row][col].getProCost() << endl;
}

void VendingMachine::displayContents(){
	cout << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << slots[i][j].getProName() << " - "  << slots[i][j].getProCost() << " ";
		}
		cout << endl;
	}
}
