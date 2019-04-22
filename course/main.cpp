#include "Course.h"
#include <iostream>
using namespace std;

int main(){
    string name, section;
    unsigned num_students;

    Course my_schedule[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter course name: ";
        getline(cin, name);
        my_schedule[i].set_name(name);

        cout << "\nEnter section #: ";
        cin.ignore();
        cin >> section;
        my_schedule[i].set_section(section);

        cout << "\nEnter # of students: ";
        cin >> num_students;
        my_schedule[i].set_num_students(num_students);
    }

    for (int j = 0; j < 5; j++)
        my_schedule[j].print();

    return 0;
}
