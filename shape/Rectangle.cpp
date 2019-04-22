#include "Rectangle.h"
#include <string>
#include <cassert>
#include <iostream>

Rectangle::Rectangle(){
    //ctor
    length = 1;
    width = 1;
}

Rectangle::Rectangle(std::string color, double length, double width):Shape(color){
    setLength(length);
    setWidth(width);
}

void Rectangle::setLength(double length){
    assert(length > 0);
    this->length = length;
}

void Rectangle::setWidth(double width){
    assert(width > 0);
    this->length = length;
}

void Rectangle::printInfo()const{
    std::cout << "Color: " << color << std::endl;
    std::cout << "L: " << length << "\tW: " << width << std::endl;
}