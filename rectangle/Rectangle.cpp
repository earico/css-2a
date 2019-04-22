#include "Rectangle.h"
#include <iostream>
#include <cassert>
using namespace std;

Rectangle::Rectangle(){
    //ctor
    length = 1;
    width = 1;
}

Rectangle::Rectangle(double init_width, double init_length){
    assert(init_width > 0);
    assert(init_length > 0);
    width = init_width;
    length = init_length;
}

Rectangle::Rectangle(double init_side){
    assert(init_side > 0);
    width = init_side;
    length = init_side;
}

void Rectangle::print_rectangle(){
    cout << "W: " << width << "   L: " << length << endl;
}
