#ifndef CONTACT_H
#define CONTACT_H
#include <string>

class Contact{
	public:
		Contact();
		Contact(string fn, string addy, string city, string state, string zip, string a_code, string p_numb);
		
		string getFullname()const{return fn;}
		string getAddress()const{return addy;}
		string getCity()const{return city;}
		string getState()const{return state;}
		string getZipcode()const{return zip;}
		string getAreacode()const{return a_code;}
		string getPhoneNumber()const{return p_numb;}

		void setFullname(string fn){this->fn = fn;}
		void setAddress(string addy){this->addy = addy;}
		void setCity(string city){this->city = city;}
		void setState(string state){this->state = state;}
		void setZipcode(string zip){this->zip = zip;}
		void setAreacode(string a_code){this->a_code = a_code;}
		void setPhoneNumber(string p_numb){this->p_numb = p_numb;}

		virtual display()const;
	private:
		string fn, addy, city, state, zip, a_code, p_numb; 
};
#endif CONTACT_H
