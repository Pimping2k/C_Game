#pragma once
#include<list>
#include<string>

class Card {
private:
	std::string suitOfCard;
	std::string nameOfCard;
public:
	Card(const int& indexOfName,const int& indexOfSuit);
	std::string getNameOfCard();
	std::string getSuitOfCard();
	 //friend std::ostream& operator<<(std::ostream &os,Card &card);
};
static std::string cardName[] = { "Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace" };
static std::string cardSuit[] = { "Diamonds","Hearts","Spades","Clubs" }; //Масти карт*

//std::ostream& operator <<(std::ostream& os, const Card& card) 

class Deck {
private:
	std::list<Card> deck;
public:
	Deck();
	std::list<Card> getList();
	void generate_playerCards();
	void generate_botCards();
	void defineTrump();
	//void shuffleDeck(std::vector<Card> decks);

	void print();
};