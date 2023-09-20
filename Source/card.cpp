#include"Card.h"
#include<iostream>
#include<random>

Card::Card(const int& indexOfName,const int& indexOfSuit, const bool& isTrump) {
	this->nameOfCard = cardName[indexOfName];
	this->suitOfCard = cardSuit[indexOfSuit];
	this->isTrump = isTrump;
}

Deck::Deck()
{
	for (int i = 0; i < cardName->length(); ++i) {
		for (int j = 0; j < cardSuit->length(); ++j) {
				Deck::getList().push_back(Card(i, j, false));
		}
	}
}

std::string Card::getSuitOfCard() { return this->suitOfCard; }
std::string Card::getNameOfCard() { return this->nameOfCard; }
bool Card::getIsTrump() { return this->isTrump; }

std::list<Card> Deck::getList() { return this->deck; }

void Deck::print() {
	for (auto& i : deck) {
		std::cout << i.getNameOfCard()<<i.getSuitOfCard();
	}
}

void Deck::shuffleDeck(std::list<Card> deckOfCards) {
	std::random_shuffle(deckOfCards.begin(), deckOfCards.end());
}

Card Deck::defineTrump(std::list<Card> shuffledDeck) {
	if (!shuffledDeck.empty()) {
		return deck.front();
	}
	else
	{
		return Card::Card(0,0,false);
	}
}

//std::ostream& operator<<(std::ostream& os, Card& card) {
//	return os << card.getNameOfCard() << " " << card.getSuitOfCard() << std::endl;
//}