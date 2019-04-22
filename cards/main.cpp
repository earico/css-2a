#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

int main(){
	Card cardDeck[] = {Card("Black", "A", "Clubs", 1),
	     		   Card("Red", "5", "Diamonds", 4),
	     		   Card("Red", "3", "Hearts", 3),
			   Card("Black", "Q", "Spades", 10),
			   Card("Red", "K", "Diamonds", 10),
			   Card("Black", "8", "Clubs", 8),
			   Card("Red", "2", "Hearts", 2),
			   Card("Black", "J", "Spades", 10),
			   Card("Black", "5", "Clubs", 5),
			   Card("Red", "A", "Diamonds", 11)};

	std::cout << "First List: " << std::endl;
	for(int i = 0; i < 10; i++)
		cardDeck[i].print();

	for(int i = 0; i < 10; i++){
		srand(static_cast<unsigned>(time(NULL)));
		int x = rand() % 10;
		std::swap(cardDeck[i], cardDeck[x]);
	}

	std::cout << std::endl;	
	std::cout << "Second List: " << std::endl;
	for(int i =0; i < 10; i++)
		cardDeck[i].print();

	return 0;
}
