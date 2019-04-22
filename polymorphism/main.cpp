#include "Fruit.h"
#include "Apple.h"
#include <iostream>
using namespace std;

int main(){
	Fruit *f, *f1;
	f = new Fruit("Unspecified");
	f1 = new Apple();

	f->display();
	f1->display();

	delete f;
	delete f1;

	return 0;
}
