#include "Clothes.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

Clothes::Clothes(){
    this->size = "";
    this->color = "";
    this->brand = ""; 
}

Clothes::Clothes(string size, string color, string brand, Merchandise merch){
    this->size = size;
    this->color = color;
    this->brand = brand;
    setCost(merch.getCost());
    setQuantity(merch.getQuantity());
    setDescription(merch.getDescription());
}

 ostream& operator <<(ostream& out, const Clothes object){
     out << "Size: " << object.size << endl;
     out << "Color: " << object.color << endl;
     out << "Brand: " << object.brand << endl;
     out << fixed;
     out << setprecision(2);
     out << "Cost: $" << object.getCost() << endl;
     out << "Quantity: " << object.getQuantity() << endl;
     out << "Description: " << object.getDescription() << endl;
 }