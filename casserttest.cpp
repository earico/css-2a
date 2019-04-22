#include <cassert>     /* assert */
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string array[] = {"h", "f", "r"};

    string letter = "h]p";

    for(int i = 0; i < 3; i++){
        if(letter == array[i])
            cout << "yes";
    }

  return 0;
}
