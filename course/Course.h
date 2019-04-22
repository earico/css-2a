#ifndef COURSE_H
#define COURSE_H
#include <string>

class Course{
    public:
        // Constructors
        Course();
        Course(std::string section);
        Course(std::string name, std::string section, unsigned int num_students);

        // Setters
        void set_name(std::string name);
        void set_section(std::string section);
        void set_num_students(unsigned int num_students);

        // Getters
        std::string get_name()const {return name;}
        std::string get_section()const {return section;}
        unsigned int get_students()const {return num_students;}

        // Other Methods
        void print()const;
    private:
        std::string name, section;
        unsigned int num_students;
};
#endif // COURSE_H
