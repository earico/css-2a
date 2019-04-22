#include <iostream>
#include "Fraction.h"
using namespace std;

int main(){
	Fraction f1(1,2), f2(2,3), f3;

	f3 = f1 / f2; // 3/4

	cout << "f3 = f1 / r2 = 3/4 = ?" << endl;
	// 7 / 6
	cout << "f1(1/2) + f2(2/3) = " << (f1 + f2) << endl;
	cout << "1/2 = " << f1.toDecimal() << endl;
	cout << "2/3 = " << f2.toDecimal() << endl;
	f1 += f2;
	cout << "f1 = " << f1 << endl;
	f1 -= f2;
	cout << "f1 = " << f1 << endl;

	return 0;
}
