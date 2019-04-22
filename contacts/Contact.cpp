#include "Contact.h"
#include <string>

Contact::Contact(){
	fn = "";
	addy = "";
	city = "";
	state = "";
	zip = "";
	a_code = "";
	p_numb = "";
}

Contact::Contact(string fn, string addy, string city, string state, string zip, string a_code, string p_numb){
	this->fn = fn;
	this->addy = addy;
	this->city = city;
	this->state = state;
	this->zip = zip;
	this->a_code = a_code;
	this->p_numb = p_numb;
}

void Contact::display()const{
	cout << "Fullname: " << fn << endl;
	cout << "Address: " << addy << endl;
	cout << "City: " << city << endl;
	cout << "State: " << state << endl;
	cout << "Area Code: " << a_code << endl;
	cout << "Phone Number: " << p_numb << endl;
}
