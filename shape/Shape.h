#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>

class Shape{
    public:
        Shape(){color = "black";}
        Shape(std::string color){this->color = color;}
        void setColor(std::string color){this->color = color;}
        std::string getColor()const{return color;}
        void printInfo()const {std::cout << "Color: " << color << std::endl;}
    protected:
        std::string color;
};

#endif // SHAPE_H