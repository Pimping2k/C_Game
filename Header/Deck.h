#pragma once
#include<vector>

#include "Card.h"

typedef std::vector<Card> deck_t;

class Deck {
private:
	deck_t deck;
public:
	Deck(); //Deck constructor

	deck_t getVector();
	Card getCard();
	void shuffle(); //shuffle deck
	Card defineTrump();//define which card is trump and it`s suit will become trump

	void print();
};
