#include <iostream>
using namespace std;

struct Student{
	string name = "";
 	int age = 0;
	int ID = 0;
};
int main(){
	Student s;

	s.name = "Eleazar Rico";
	s.age = 19;
	s.ID = 999205;

	cout << "\nName: " << s.name << endl;
	cout << "Age: " << s.age << endl;
	cout << "ID: " << s.ID << endl;

	return 0;
}
