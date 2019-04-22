#include "Fraction.h"
#include <cassert>
using namespace std;

Fraction::Fraction(){
	//ctor
	num = 0;
	denom = 1;
}

Fraction::Fraction(int num, int denom){
	setNum(num);
	setDenom(denom);
}

void Fraction::setDenom(int denom){
	assert(denom != 0);
	this->denom = denom;
}

ostream& operator << (ostream& out, const Fraction& f){
	out << f.num << "/" << f.denom;
	return out;
}

istream& operator >> (istream& in, Fraction& f){
	int d;
	in >> f.num;
	in >> d;
	f.setDenom(d); // check for division by zero
	return in;
}

Fraction& Fraction::operator+=(const Fraction& f){
	this->num = (f.num * f.denom) + (f.num * this->denom);
	this->denom *= f.denom;
	return *this;
}

Fraction& Fraction::operator-=(const Fraction& f){
	this->num = (f.num * f.denom) - (f.num * this->denom);
	this->denom *= f.denom;
	return *this;
}

Fraction& Fraction::operator*=(const Fraction& f){
	this-> num *= f.num;
	this-> denom *= f.denom;
	return *this;
}

Fraction& Fraction::operator/=(const Fraction& f){
	assert(f.num != 0);
	this->num *= f.denom;
	this->denom *= f.num;
	return *this;
}

Fraction operator + (const Fraction& f1, const Fraction& f2){
	Fraction res(f1);
	res *= f2;
	return res;
}

Fraction operator / (const Fraction& f1, const Fraction& f2){
	Fraction res(f1);
	res /= f2; // res = res / f2
	return res;
}






















