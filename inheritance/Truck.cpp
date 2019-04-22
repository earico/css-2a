#include "Truck.h"
#include "Vehicle.h"
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Truck::Truck() : Vehicle(), loadCap(0), towCap(0){}

Truck::Truck(Person owner, string manufac, double loadCap, double towCap, int numOfCyl) : Vehicle(manufac, numOfCyl, owner) {
    setLoad(loadCap);
    setTow(towCap);
    setManufac(getManufac());
    setNumOfCyl(numOfCyl);
    setOwner(owner);
}

ostream& operator <<(ostream& out_stream, const Truck& truck_object){
    out_stream << "Truck owner: " << truck_object.getOwner() << endl;
    out_stream << "Truck manufacturer: " << truck_object.getManufac() << endl;
    out_stream << "Truck num of cyl: " << truck_object.getNumOfCyl() << endl;
    out_stream << "Truck load capacity: " << truck_object.loadCap << endl;
    out_stream << "Truck tow capacity: " << truck_object.towCap << endl;


}