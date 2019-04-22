#include "Date.h"
#include <iostream>
using namespace std;

int main(){
    Date aDate.init_date(2, 6, 2019);
    aDate.getDay(2);
    aDate.getMonth(6);
    aDate.getYear(2019);
    aDate.setDay(2);
    aDate.displayDate();

    return 0;
}
