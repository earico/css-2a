#ifndef BYTE_H
#define BYTE_H

class Byte{
    public:
        Byte();
        Byte(unsigned int init_bits[]);

        // Methods
        void rightShift();
        void leftShift();
        double calcDecimal();
        void display();

        // Getters & Setters
        unsigned int getBit(int index)const;
        void setBit(unsigned int value, int index);


    private:
        unsigned int bits[8];
};

#endif // BYTE_H
