#include "Rectangle.h"
#include <iostream>

using namespace std;

int main(){
    Rectangle r1("Orange", 3, 4), r2("Blue", 2, 4);
    r1.printInfo();
    cout << endl << endl;
    r2.printInfo();
}