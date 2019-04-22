#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){

    double *darray;
    darray = new double[5];
    cout << darray << endl;
    darray[0] = 1;
    darray[1] = 2;

    cout < darray[1] << endl;

    return 0;
}
