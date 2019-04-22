#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

    Car a.init_car("Blue", "Low Rider", "Crysler", 1990);

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
