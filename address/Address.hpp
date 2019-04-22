#ifndef ADDRESS_HPP
#define ADDRESS_HPP
#include <string>
using namespace std;

class Addres{
    public:
        Address();
        Address(string name, string addressLine1, string addressLine2,
                string city, string state, int zipcode);

        // Getters
        string getName()const {return name;}
        string getAddressLine1()const {return addressLine1;}
        string getAddressLine2()const {return addressLine2;}
        string getCity()const {return city;}
        string getState()const {return state;}
        int getZipcode()const {return zipcode;}

        // Setters
        void setName(string name);
        void setAddressLine1(string addressLine1);
        void setAddressLine2(string addressLine2){this->addressLine2};
        void setCity(string city);
        void setState(string state);
        void setZipcode(int zipcode);

    private:
        string name;
        string addressLine1;
        string addressLine2;
        string city;
        string state;
        int zipcode;
};

#endif
