#include "Rectangle.h"
#include <iostream>
using namespace std;

int main(){
    Rectangle a, // default Rectangle
              b(2, 3), // argument cons.
              c(7); //square argument cons.
    a.print_rectangle();
    b.print_rectangle();
    c.print_rectangle();
    return 0;
}
