#include "Car.h"
#include "Scooter.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

    Car a;
    a.init_car("Blue", "Low Rider", "Crysler", 1990);
    Scooter b;
    b.init_scooter("Black", "Motorcycle", "Harley Davidson", 1980);

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

    ///
    for (int i = 0; i < 5; i++){
        b.accelerate();
        cout << endl;
    }

    b.print_speed();
    cout << endl;

    b.brake();
    cout << endl;

    b.print_speed();
    cout << endl;

    b.stop();
    cout << endl;

    b.print_speed();
    cout << endl;

    return 0;
}
