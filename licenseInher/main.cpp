#include "HuntingLicense.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string input;
	HuntingLicense h1;
	cout << "Enter Full name\n";
	getline(cin, input);
	h1.setName(input);
	cout << "Enter " << input << "'s date of birth\n";
	getline(cin, input);
	h1.setDOB(input);
	cout << "Enter your state issued id#\n";
	getline(cin, input);
	h1.setIDNum(input);
	cout << "Enter issue date\n";
	getline(cin, input);
	h1.setDateIssued(input);
	cout << "Enter expiration date\n";
	getline(cin, input);
	h1.setDate(input);
	h1.print();
	return 0;

}
