#include "LinearEquation.h"
#include <cassert>
#include <iostream>
#include <string>

using namespace std;

int main(){
    LinearEquation a(2, 2),   // 2x + 2

                   b(3, -2),  // 3x - 2

                   c(5, 10.5); // 5x + 10.5

    cout << "a = " << a << endl;

    cout << "b = " << b << endl;

    cout << "c = " << c << endl;

    // Test addition

    LinearEquation result; 

    result = a + b;

    cout << "a + b = " << result << endl; // 5x + 0

    assert(result.evaluate(1) == 5);

    cout << "Evaluate x = 1 test 1 … passed\n";

    // Test Subtraction

    result = b - c;

    cout << "b - c" << result << endl; // -2x + -12.5

    assert(result.evaluate(1) == -14.5);

    cout << "Evaluate x = 1 test 2 … passed\n";

    // Test multiplication

    result = 10 * b;

    cout << "10 * b = " << result << endl; // 30x + -20

    assert(result.evaluate(1) == 10);

    cout << "Evaluate x = 1 test 3 … passed\n";

    result = b * 10;

    cout << "b * 10 = " << result << endl; // 30x + -20

    assert(result.evaluate(1) == 10);

    cout << "Evaluate x = 1 test 4 … passed\n";

    return 0;
}