#ifndef CHECKLIST_H
#define CHECKLIST_H
#include <string>

class CheckList{
    public:
            CheckList(); // Creates list of size 10
            CheckList(unsigned int new_capacity);

            void addItem(std::string item);
            string getItem(unsigned int index) const;
            void printList();

            ~CheckList(); // Destructor
    private:
        std::string *items; // dynamic array
        unsigned int capacity,
                     used;

};

#endif // CHECKLIST_H
