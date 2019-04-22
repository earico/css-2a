#include "Merchandise.h"
#include <fstream>
#include <iostream>
#include <string>

Merchandise::Merchandise(){
    this->cost = 0.0;
    this->quantity = 0;
    this->description = "";
}

Merchandise::Merchandise(double cost, int quantity, string description){
    this->cost = cost;
    this->quantity = quantity;
    this->description = description;
}

ostream& operator <<(ostream& out, const Merchandise& object){
    out << object.cost << endl;
    out << object.quantity << endl;
    out << object.description << endl;
}