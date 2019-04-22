#include "Course.h"
#include <cassert>
#include <cctype>
#include <iostream>

Course::Course(){
    name = "";
    section = "000000";
    num_students = 0;
}

Course::Course(std::string section){
    name = "";
    num_students = 0;
    set_section(section);
}

Course::Course(std::string name, std::string section, unsigned int num_students){
        set_name(name);
        set_section(section);
        set_num_students(num_students);
}

void Course::set_name(std::string name){
    assert(name != "");
    this->name = name;
}

void Course::set_section(std::string section){
    for(unsigned i = 0; i < section.length(); i++)
        assert(isdigit(section[i]));
    this->section = section;
}

void Course::set_num_students(unsigned int num_students){
    assert(std::string::npos != num_students);
    this->num_students = num_students;
}
/*
std::string Course::get_name()const {return name;}
std::string Course::get_section()const {return section;}
unsigned int Course::get_students()const {return num_students;}
*/
void Course::print()const{
    std::cout << "Course Name: " << get_name() << std::endl;
    std::cout << "\tSection Number: " << get_section() << std::endl;
    std::cout << "\t# of students: " << get_students() << std::endl;
}
