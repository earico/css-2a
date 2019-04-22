#include "CheckList.h"
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

CheckList::CheckList(){
    //ctor
    capacity = 10;
    items = new string[capacity];
    used = 0;
}

CheckList::CheckList(){
    assert(new_capacity > 0);
    capacity = new_capacity;
    items = new string[capacity];
    used = 0;
}

void CheckList::addItem(string item){
    assert(used < capacity); // make sure there is room
    items[used] = item;
    used++;
}

string CheckList::getItem(unsigned int index) const{
    assert(index < used);
    return items[index];
}

void CheckList::printList(){
    for(unsigned int i = 0; i < used; i++)
        cout << (i + 1) << ". " << items[i] << endl;
}

CheckList::~CheckList(){ // Destructor
    delete[] items; // relrease dynamic array
}
