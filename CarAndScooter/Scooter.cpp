#include "Scooter.h"
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

Scooter::Scooter(){
    make = " ";
    model = " ";
    year = 0;
    color = " ";
    speed = 0;
}

void Scooter::init_scooter(string init_color, string init_make, string init_model, int init_year){
    color = init_color;
    make = init_make;
    model = init_model;
    year = init_year;
    speed = 0;
}


void Scooter::brake(){
    assert(speed >= 3);
    speed = speed - 3;
}

void Scooter::accelerate(){
    speed = speed + 1;
}

void Scooter::stop(){
    speed = 0;
}

void Scooter::print_speed(){
    cout << "Scooter Make: " << make << endl;
    cout << "Scooter Model: " << model << endl;
    cout << "Scooter Year: " << year << endl;
    cout << "Scooter Color: " << color << endl;
    cout << "Current Speed: " << speed << endl;

}
