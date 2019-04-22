///Eleazar Rico
///Dr. A
///Friday, April 5th
///This is a inheritance program that will utilize the multiple files

#include "Person.h"
#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Person p1;
    cout << "Enter your name: ";
    cin >> p1; 
    Truck t1(p1, "Ford", 120.0, 4.0, 4);    
    cout << t1;

    return 0;
}