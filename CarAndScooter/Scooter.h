#ifndef SCOOTER_H
#define SCOOTER_H
#include <string>
using namespace std;

class Scooter{
    public:
        Scooter();
        void brake();
        void accelerate();
        void stop();
        void print_speed();
        void init_scooter(string init_color, string init_make, string init_model, int init_year);

    private:
        string make;
        string model;
        int year;
        string color;
        int speed;

};

#endif // SCOOTER_H
