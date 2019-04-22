#ifndef CONCERT_H
#define CONCERT_H
#include <string>

class Concert{
    public:
        //ctors
        Concert();
        Concert(double general_cost, double vip_cost, std::string artist, std::string venue);

        //accessors & manipulators
        double get_general_cost()const{return general_cost;}
        double get_vip_cost()const{return vip_cost;}
        std::string get_artist()const{return artist;}
        std::string get_venue()const{return venue;}

        void set_general_cost(double general_cost);
        void set_vip_cost(double vip_cost);
        void set_artist(std::string artist);
        void set_venue(std::string venue);

        //Methods
        void print()const;

    private:
        double general_cost;
        double vip_cost;
        std::string artist;
        std::string venue;
};

#endif //CONCERT_H
