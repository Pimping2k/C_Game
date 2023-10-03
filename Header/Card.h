#pragma once
#include<string>
#include <vector>

class Card {
private:
	std::string suitOfCard;
	std::string nameOfCard;
	bool isTrump;
public:
	Card(const int& indexOfName = 0, const int& indexOfSuit = 0, const bool& isTrump = false); //Card construct
	Card(const Card&);

	std::string getNameOfCard() const;
	std::string getSuitOfCard() const;
	bool getIsTrump() const;

	//friend std::ostream& operator<<(std::ostream &os,Card &card);
};

static const std::vector<std::string> cardName = { "Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace" };
static const std::vector<std::string> cardSuit = { "Diamonds","Hearts","Spades","Clubs" }; //Card suits*

std::ostream& operator<<(std::ostream& out, const Card& card);

//std::ostream& operator <<(std::ostream& os, const Card& card) 