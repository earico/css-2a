#include "Byte.h"
#include <cmath>
#include <iostream>
#include <cassert>
using namespace std;

Byte::Byte(){
    //ctor
    for (int i = 0; i < 8; i++)
        bits[i] = 0;
}

Byte::Byte(unsigned int init_bits[]){
    int sz = sizeof(init_bits)/sizeof(init_bits[0]);
    assert(sz == 8);

    for (int i = 0; i < 8; i++){
        assert(init_bits[i] == 0 || init_bits[i] == 1);
        bits[i] = init_bits[i];
    }
}

void Byte::rightShift(){
    for (int i = 6; i >= 0; i--)
        bits[i + 1] = bits[i];
    bits[0] = 0;
}

void Byte::leftShift(){
    for (int i = 1; i < 8; i++)
        bits[i - 1] = bits[i];
    bits[7] = 0;
}

double Byte::calcDecimal(){
    double total = 0;
    for (int i = 0; i < 8; i++){
        total += (bits[i] * pow(2, 7-i));
    }
    return total;
}

void Byte::display(){
    for (int i =0; i < 8; i++)
        cout << bits[i];
}

unsigned int Byte::getBit(int index)const{
    assert(index >= 0 && index < 8);
    return bits[index];
}

void Byte::setBit(unsigned int value, int index){
    assert(value == 1 || value == 0);
    assert(index >= 0 && index < 8);
    bits[index] = value;
}
