#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
using namespace std;

class Inventory{
	public:
		static const int CAPACITY = 50;
		Inventory();
		void addItem(string item);
		void print() const;
		
	private:
		string items[CAPACITY];
		int used;
};
#endif //INVENTORY_H
