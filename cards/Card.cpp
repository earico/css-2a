#include "Card.h"
#include <cassert>
#include <iostream>
#include <string>

Card::Card(){
	color = "";
	value = 0;
	suit = "";
	face = "";
}

Card::Card(std::string color, std::string face, std::string suit, int value){
	std::string cArray[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

	assert(color == "Red" || color == "Black");
	this->color = color;

	assert(value > 0 && value < 12);
	this->value = value;

	assert(suit == "Spades" || suit == "Clubs" || suit == "Hearts" || suit == "Diamonds");
	this->suit = suit;

	assert((face == "2") ||
		  (face == "3") ||
		  (face == "4") ||
		  (face == "5") ||
		  (face == "6") ||
		  (face == "7") ||
		  (face == "8") ||
		  (face == "9") ||
		  (face == "10") ||
		  (face == "J") ||
		  (face == "Q") ||
		  (face == "K") ||
		  (face == "A"));
	this->face = face;

}


void Card::print()const{
	std::cout << color << " " << face << " " << suit << " " << value << std::endl;
}
