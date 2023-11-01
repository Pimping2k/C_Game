#include <algorithm>
#include <iostream>
#include <random>
#include "../Header/Deck.h"
#include "../Player.h"

Deck::Deck()
{
	for (int i = 0; i < cardName.size(); ++i) {
		for (int j = 0; j < cardSuit.size(); ++j) {
			deck.push_back(Card(i, j));
		}
	}
}

deck_t Deck::getVector() { return this->deck; }

void Deck::print() {
	for (auto i = deck.begin(); i != deck.end(); ++i) {
		std::cout << i->getNameOfCard() << " " << i->getSuitOfCard() << std::endl;
	}
}

void Deck::shuffle() {
	std::random_device rd;
	std::mt19937 g(rd());

	std::shuffle(deck.begin(), deck.end(), g);
}

Card Deck::defineTrump() {
	if (!deck.empty()) {
		return deck.front();
	}
	else
	{
		return Card(0, 0);
	}
}

Card Deck::getCard() {
	Card Tmp = deck.back();
	deck.pop_back();
	return Tmp;
}

//void Deck::defineId() {
//	if (Card::Card().nameOfCard == "Six") {
//	}
//}