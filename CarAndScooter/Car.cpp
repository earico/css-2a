#include "Car.h"
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

Car::Car(){
    make = " ";
    model = " ";
    year = 0;
    color = " ";
    speed = 0;
}

void Car::init_car(string init_color, string init_make, string init_model, int init_year){
    color = init_color;
    make = init_make;
    model = init_model;
    year = init_year;
    speed = 0;
}


void Car::brake(){
    assert(speed >= 2);
    speed = speed - 2;
}

void Car::accelerate(){
    speed = speed + 2;
}

void Car::stop(){
    speed = 0;
}

void Car::print_speed(){
    cout << "Car Make: " << make << endl;
    cout << "Car Model: " << model << endl;
    cout << "Car Year: " << year << endl;
    cout << "Car Color: " << color << endl;
    cout << "Current Speed: " << speed << endl;

}
