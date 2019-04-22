#include "Static.h"
#include <iostream>

int main(){
	Enemy e1(2, 50), e2(1, 20);
	std::cout << "Amount of enemies: " << Enemy::num_enemies << std::endl; 
	//number of enemies should be 2

	Enemy e3(100, 100);
	std::cout << "Amonut of enemies: " << Enemy::num_enemies << std::endl;
	///number of enemies should be 3
	

	return 0;
}
