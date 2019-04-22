#ifndef VEHICLE_H
#define VEHICLE_H
#include "Person.h"
#include <string>
using namespace std;

class Vehicle{
	public:
		Vehicle();
		Vehicle(string manufac, int numOfCyl, Person owner);
		string getManufac()const{return manufac;}
		int getNumOfCyl()const{return numOfCyl;}
		Person getOwner()const{return owner;}

		void setManufac(string manufac){this->manufac = manufac;}
		void setNumOfCyl(int numOfCyl){this->numOfCyl = numOfCyl;}
		void setOwner(Person owner){this->owner = owner;}
		friend ostream& operator <<(ostream& out_stream, const Vehicle& vehicle_object);
	private:
		string manufac;
		int numOfCyl;
		Person owner;

};

#endif // VEHICLE_H
