#include "Vehicle.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Vehicle::Vehicle() : manufac(""), numOfCyl(0), owner(""){
}

Vehicle::Vehicle(string manufac, int numOfCyl, Person owner){
    setManufac(manufac);
    setNumOfCyl(numOfCyl);
    setOwner(owner);
}

ostream& operator <<(ostream& out_stream, const Vehicle& vehicle_object){
    out_stream << "Manufacturer: " << vehicle_object.manufac << endl;
    out_stream << "Num of cylinders: " << vehicle_object.numOfCyl << endl;
    out_stream << "Owner: " << vehicle_object.owner << endl;
}