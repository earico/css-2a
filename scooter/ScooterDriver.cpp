#include "Scooter.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

    Scooter a;
    a.init_scooter("Black", "Motorcycle", "Harley Davidson", 1980);

    for (int i = 0; i < 5; i++){
        a.accelerate();
        cout << endl;
    }

    a.print_speed();
    cout << endl;

    a.brake();
    cout << endl;

    a.print_speed();
    cout << endl;

    a.stop();
    cout << endl;

    a.print_speed();
    cout << endl;

    return 0;
}
