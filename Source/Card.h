#pragma once
#include<list>
#include<string>

class Card {
private:
	std::string suitOfCard;
	std::string nameOfCard;
	bool isTrump;
public:
	Card(const int& indexOfName, const int& indexOfSuit, const bool& isTrump); //Card construct
	std::string getNameOfCard();
	std::string getSuitOfCard();
	bool getIsTrump();
	//friend std::ostream& operator<<(std::ostream &os,Card &card);
};

static std::string cardName[] = { "Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace" };
static std::string cardSuit[] = { "Diamonds","Hearts","Spades","Clubs" }; //Card suits*

class Deck {
private:
	std::list<Card> deck;
public:
	Deck();
	std::list<Card> getList();
	void shuffleDeck(std::list<Card> deckOfCards); //shuffle deck
	Card defineTrump(std::list<Card> shuffledDeck);//define which card is trump and it`s suit will become trump

	void print();
};


//std::ostream& operator <<(std::ostream& os, const Card& card) 