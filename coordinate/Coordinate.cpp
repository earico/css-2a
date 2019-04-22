#include "Coordinate.h"
#include <iostream>
#include <fstream>
using namespace std;

Coordinate::Coordinate(){
    x = 0;
    y = 0;
}

Coordinate::Coordinate(double x, double y){
    setX(x);
    setY(y);
}

ostream& operator <<(ostream& out, const Coordinate& obj){
    out << "(" << obj.x << ", " << obj.y << ")\n";
    return out;
}

istream& operator >>(istream& in, Coordinate& obj){
    double x, y;
    in >> x;
    in >> y;

    obj.setX(x);
    obj.setY(y);

    return in;
}

Coordinate& Coordinate::operator ++(){
    x++;
    y++;
    return *this;
}

Coordinate Coordinate::operator ++(int){
    Coordinate temp(*this);
    x++;
    y++;
    return temp;
}

Coordinate operator + (const Coordinate c1, const Coordinate c2){
    Coordinate res;

    res.setX(c1.getX() + c2.getX());
    res.setY(c1.getY() + c2.getY());
    return res;
}

Coordinate operator - (const Coordinate c1, const Coordinate c2){
    Coordinate res;

    res.setX(c1.getX() - c2.getX());
    res.setY(c1.getY() - c2.getY());
    return res;
}