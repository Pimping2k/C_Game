#include "../Header/Deck.h"
#include <iostream>
#include <algorithm>

Deck::Deck()
{
	for (int i = 0; i < cardName.size(); ++i) {
		for (int j = 0; j < cardSuit.size(); ++j) {
			deck.push_back(Card(i, j, false));
		}
	}
}

deck_t Deck::getList() { return this->deck; }

void Deck::print() {
	for (auto i = deck.begin(); i != deck.end(); ++i) {
		std::cout << i->getNameOfCard()<<" "<< i->getSuitOfCard() << std::endl;
	}
}

void Deck::shuffle() {
	std::random_shuffle(deck.begin(), deck.end());
}

Card Deck::defineTrump() {
	if (!deck.empty()) {
		return deck.front();
	}
	else
	{
		return Card(0, 0, false);
	}
}
