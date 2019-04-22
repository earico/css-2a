#ifndef CLOTHES_H
#define CLOTHES_H
#include "Merchandise.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Clothes : public Merchandise{
    public:
        Clothes();
        Clothes(string size, string color, string brand, Merchandise merch);

        string getSize()const{return size;}
        string getColor()const{return color;}
        string getBrand()const{return brand;}

        void setSize(string size){this->size = size;}
        void setColor(string color){this->color = color;}
        void setBrand(string brand){this->brand = brand;}

        friend ostream& operator <<(ostream& out, const Clothes object);

    private:
        string size;
        string color;
        string brand;
};

#endif // CLOTHES_H