#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car{
    public:
        Car();
        void brake();
        void accelerate();
        void stop();
        void print_speed();
        void init_car(string init_color, string init_make, string init_model, int init_year);

    private:
        string make;
        string model;
        int year;
        string color;
        int speed;

};

#endif // CAR_H
