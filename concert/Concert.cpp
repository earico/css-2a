#include "Concert.h"
#include <iostream>
#include <string>
#include <cassert>
#include <cstdlib>

//ctors
Concert::Concert(){
    general_cost = 0;
    vip_cost = 0;
    artist = "";
    venue = "";

}
Concert::Concert(double init_general_cost, double init_vip_cost, std::string init_artist, std::string init_venue){
    general_cost = init_general_cost;
    vip_cost = init_vip_cost;
    artist = init_artist;
    venue = init_venue;
}

void Concert::set_general_cost(double general_cost){
    assert(general_cost >= 0);
    this-> general_cost = general_cost;
}

void Concert::set_vip_cost(double vip_cost){
    assert(vip_cost >= 0);
    this-> vip_cost = vip_cost;
}

void Concert::set_artist(std::string artist){
    assert(artist != "");
    this-> artist = artist;
}

void Concert::set_venue(std::string venue){
    assert(venue != "");
    this-> venue = venue;
}

//Methods
void Concert::print()const{
    std::cout << "Artist: " << artist << std::endl;
    std::cout << "Venue: " << venue << std::endl;
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout << "Ticket cost - General: $"
              << general_cost << "   VIP: $" << vip_cost << std::endl;
}
