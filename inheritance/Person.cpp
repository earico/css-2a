#include "Person.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

Person::Person(){

}

Person::Person(string the_name){
    this->name = the_name;
}

string Person::get_name() const{
    return name;
}

istream& operator >>(istream& in_stream, Person& person_object){
    in_stream >> person_object.name;
    return in_stream;
}

ostream& operator <<(ostream& out_stream, const Person& person_object){
    out_stream << person_object.name << endl;
    return out_stream;
}