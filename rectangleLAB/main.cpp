/// Eleazar Rico
/// Dr. A
/// 02 - 08 - 19
/// Lab 3 rectangle class calling and setting stuff
#include "rectangle.h"
#include <iostream>
using namespace std;

int main(){

    Rectangle r1(2,3), r2();


    cout << r1.unit_length << endl;
    //cout << r2.calculateUnitRectArea() << endl;
    cout << r1.getArea() << endl;
    cout << r2.length << endl;


    return 0;
}
