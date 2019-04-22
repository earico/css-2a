#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
#include <fstream>
using namespace std;

class Coordinate{
	public:
		Coordinate();
		Coordinate(double x, double y);

		double getX()const{return x;}
		double getY()const{return y;}
		void setX(double x){this->x = x;}
		void setY(double y){this->y = y;}
		friend ostream& operator <<(ostream& out, const Coordinate& obj);
		friend istream& operator >>(ostream& in, Coordinate& obj);
		Coordinate& operator ++();
		Coordinate operator ++(int);

	private:
		double x;
		double y;
};

Coordinate operator + (const Coordinate c1, const Coordinate c2);
Coordinate operator - (const Coordinate c1, const Coordinate c2);


#endif // COORDINATE_H
