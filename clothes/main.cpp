#include "Merchandise.h"
#include "Clothes.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Merchandise m1(65.00, 15, "Nice pair of jeans.");
    Clothes c1("W:30 L:36", "Tan", "Levi", m1);

    Merchandise m2(8.00, 30, "The long sleeve shirt I always wear");
    Clothes c2("XL", "Navy Blue", "Las Vegas Thrift Shop Brand", m2);

    cout << c1;
    cout << endl;
    cout << c2;

    return 0;
}