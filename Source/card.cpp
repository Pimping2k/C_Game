#include"Card.h"
#include<vector>
#include<list>
#include<iostream>

Card(enum class NumberOfCard Number, enum class Suits CardSuit)/*, CardsSuit::isTrump isTrump*/ {
	this->Number = Number;
	this->CardSuit = CardSuit;
	//this->isTrump = isTrump;
};

Card::generateTrump() {
	//Last card from deck it`s suit is trump
}

Card::generateDeck() {
	tmp = Card(NumberOfCard::Six, Suits::Clubs);

	for (int i = 0; i < 4; ++i) {
		for (int j = 6; j < 14; ++j) {
			tmp = Card(NumberOfCard::(int)j, Suits::(int)i);

			Deck.push_back(tmp);
		}
	}
}

void main() {
	cout << Deck << endl;
}

std::vector<Card> Deck;