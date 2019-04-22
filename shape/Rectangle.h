#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include <string>

class Rectangle : public Shape{
    public:
        Rectangle();
        Rectangle(std::string color, double length, double width);
        void setLength(double length);
        void setWidth(double width);
        double getLength()const{return length;}
        double getWidth()const{return width;}
        void printInfo()const;
    private:
        double length, width;
};

#endif // RECTANGLE_H