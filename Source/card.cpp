#include<iostream>
#include<random>
#include "../Header/Card.h"

// const std::string cardName[] = { "Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace" };
// const std::string cardSuit[] = { "Diamonds","Hearts","Spades","Clubs" }; //Card suits*


Card::Card(const int& indexOfName,const int& indexOfSuit, const bool& isTrump) : 
	nameOfCard(cardName[indexOfName]),
	suitOfCard(cardSuit[indexOfSuit]),
	isTrump(isTrump)
{
}

Card::Card(const Card& card) : nameOfCard(card.nameOfCard), suitOfCard(card.suitOfCard), isTrump(card.isTrump) {}

std::string Card::getSuitOfCard() const { return this->suitOfCard; }
std::string Card::getNameOfCard() const { return this->nameOfCard; }
bool Card::getIsTrump() const { return this->isTrump; }

std::ostream& operator<<(std::ostream& os,const Card& card) {
	return os << card.getNameOfCard() << " " << card.getSuitOfCard() << std::endl;
}