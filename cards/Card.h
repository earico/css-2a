#ifndef CARD_H
#define CARD_H
#include <string>

class Card{
	public:
		//ctors
		Card();
		Card(std::string color, std::string face, std::string suit, int value);
		
		//accessors and manips.
		void setColor(std::string color){this->color = color;}
		void setValue(int value){this->value = value;}
		void setFace(std::string face){this->face = face;}
		void setSuit(std::string suit){this->suit = suit;}

		std::string getColor()const{return color;}
		int getValue()const{return value;}
		std::string getFace()const{return face;}
		std::string getSuit()const{return suit;}

		//method
		void print()const;
	private:
		std::string color;
		int value;
		std::string face;
		std::string suit;
};
#endif
