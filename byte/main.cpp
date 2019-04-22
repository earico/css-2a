#include "Byte.h"
#include <iostream>
using namespace std;

int main(){

    unsigned int a[8] = {0,0,0,0,0,1,0,1};
    Byte b1,
         b2(a);
    cout << "b1: ";
    b1.display();
    cout << endl;

    cout << "b2: ";
    b2.display();
    cout << endl;

    return 0;
}
