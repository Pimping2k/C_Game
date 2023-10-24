#include<iostream>
#include<random>
#include "../Header/Card.h"

//const std::string cardName[] = { "Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace" };
//const std::string cardSuit[] = { "Diamonds","Hearts","Spades","Clubs" }; //Card suits*

const  std::vector<std::string> cardName = { "Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace" };
const  std::vector<std::string> cardSuit = { "Diamonds","Hearts","Spades","Clubs" }; //Card suits*
const  std::map<SuitType, std::string> suits = {
	{SuitType::DIAMOND, "Diamonds"},
	{SuitType::HEARTS, "Hearts"},
	{SuitType::SPADES, "Spades"},
	{SuitType::CLUBS, "Clubs"}
}; //Card suits*

std::ostream& operator << (std::ostream& out, const SuitType& suit) {
	out << suits.at(suit);
	return out;
}

const std::map<std::string, int> initialIDs = {
	{"Six",6},
	{"Seven",7},
	{"Eight",8},
	{"Nine",9},
	{"Ten",10},
	{"Jack",11},
	{"Queen",12},
	{"King",13},
	{"Ace",14},
};

Card::Card(const int& indexOfName, const int& indexOfSuit) :
	nameOfCard(cardName[indexOfName]),
	suitOfCard(cardSuit[indexOfSuit])
{
}


Card::Card(const Card& card) : nameOfCard(card.nameOfCard), suitOfCard(card.suitOfCard) {}//construct

//get functions==>
std::string Card::getSuitOfCard() const { return this->suitOfCard; }
std::string Card::getNameOfCard() const { return this->nameOfCard; }

bool Card::CanBeat(const Card& card,std::string trump) const {
	if (this->getSuitOfCard() != card.getSuitOfCard() && this->getSuitOfCard() != trump) {
		return false;
	}
	int left_value = initialIDs.at(this->getNameOfCard()) + ((this->getSuitOfCard() == trump) ? 100 : 0);
	int right_value = initialIDs.at(card.getNameOfCard()) + ((card.getSuitOfCard() == trump) ? 100 : 0);

	std::cout << "[debug] current = " << this->getNameOfCard() << " " << this->getSuitOfCard() << std::endl;
	std::cout << "[debug] left = " << left_value << ", right = " << right_value << std::endl;

	return left_value > right_value;
}

/*
int Card::getIdOfCard() const { return this->id; }
bool Card::getIsTrump() const { return this->isTrump; }
*/

//overload
std::ostream& operator<<(std::ostream& os, const Card& card) {
	return os << card.getNameOfCard() << " " << card.getSuitOfCard() << std::endl;
}

bool operator==(const Card& left, const Card& right) {
	return (left.getSuitOfCard() == right.getSuitOfCard());
}


//Если размеры массивов разные, то они не равны.
//Если одинаковые, то проверяй первый символ каждой строки.
//Если первые символы равны, то и строки равны, если нет, то нет