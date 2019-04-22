/// Eleazar Rico
/// Dr. A
/// April 12th, 2019
/// Coordinate artihmetic program
#include "Coordinate.h"
#include <iostream>
using namespace std;

int main(){
    Coordinate a(5,1);
    Coordinate b(2,3);
    Coordinate c(1,1);

    cout << "###### SUBTRACTION ######\n";
    cout << "a: " << a;
    cout << "b: " << b;
    cout << "a - b: " << a - b;
    cout << "###### ADDITION ######\n";
    cout << "c: " << c;
    cout << "b: " << b;
    cout << "c + b: " << c + b;
    cout << "###### PREFIX INCREMENT ######\n";
    cout << "a: " << a;
    cout << "a++: " << ++a;
    cout << "###### POSTFIX INCREMENT ######\n";
    cout << "b: " << b;
    cout << "b++: " << b++;
    cout << "b(post): " << b;

    return 0;
}
