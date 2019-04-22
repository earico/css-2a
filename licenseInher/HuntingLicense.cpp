#include "HuntingLicense.h"
#include "License.h"
#include <iostream>

HuntingLicense::HuntingLicense(){
	//ctor
}

void HuntingLicense::print()const{
	std::cout << "******Hunting License******\n";
	std::cout << "Name: " << name << std::endl;
	std::cout << "DOB: " << dob << std::endl;
	std::cout << "State ID# " << id_num << std::endl;
	std::cout << "Date Issued: " << date_issued << "/t";
	std::cout << "Exp. Date: " << date << std::endl;
	std::cout << "*************************************\n";
}
