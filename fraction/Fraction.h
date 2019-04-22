#ifndef FRACTION_H
#define FRACTION_H
#include <fstream>
using namespace std;

class Fraction{
	public:
		Fraction();
		Fraction(int num, int denom);
		//getters and setters
		
		int getNum()const{return num;}
		int getDenom()const{return num;}
		void setNum(int num){this->num = num;}
		void setDenom(int num);

		//Other methods
		double toDecimal()const{return static_cast<double>(num)/denom;}

		//overloaded operators
		friend ostream& operator << (ostream& out, const Fraction& f);
		friend istream& operator >> (istream& in, Fraction& f);
		Fraction& operator +=(const Fraction& f);
		Fraction& operator -=(const Fraction& f);
		Fraction& operator *=(const Fraction& f);
		Fraction& operator /=(const Fraction& f);
	private:
		int num, denom;
};

Fraction operator + (const Fraction& f1, const Fraction& f2);
Fraction operator - (const Fraction& f1, const Fraction& f2);
Fraction operator * (const Fraction& f1, const Fraction& f2);
Fraction operator / (const Fraction& f1, const Fraction& f2);

#endif //FRACTION_H
