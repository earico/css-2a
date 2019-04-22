#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include "Person.h"

class Truck : public Vehicle {
    public:
        Truck();
        Truck(Person owner, string manufac, double loadCap, double towCap, int numOfCyl);

        double getLoad()const{return loadCap;}
        int getTow()const{return towCap;}
        void setLoad(double loadCap){this->loadCap = loadCap;}
        void setTow(int towCap){this->towCap = towCap;}
        friend ostream& operator <<(ostream& out_stream, const Truck& truck_object);

    private:
        double loadCap, towCap;
        
};

#endif // TRUCK_H