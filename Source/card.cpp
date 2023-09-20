#include"Card.h"
#include<iostream>
#include<iterator>


Card::Card(const int& indexOfName,const int& indexOfSuit) {
	this->nameOfCard = cardName[indexOfName];
	this->suitOfCard = cardSuit[indexOfSuit];
}

Deck::Deck()
{
	for (int i = 0; i < cardName->length(); ++i) {
		for (int j = 0; j < cardSuit->length(); ++j) {
				Deck::getList().push_back(Card(i, j));
		}
	}
}

std::string Card::getSuitOfCard() { return this->suitOfCard; }
std::string Card::getNameOfCard() { return this->nameOfCard; }

std::list<Card> Deck::getList() { return this->deck; }

void Deck::print() {
	for (auto& i : deck) {
		std::cout << i.getNameOfCard()<<i.getSuitOfCard();
	}
}
//std::ostream& operator<<(std::ostream& os, Card& card) {
//	return os << card.getNameOfCard() << " " << card.getSuitOfCard() << std::endl;
//}