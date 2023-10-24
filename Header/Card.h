#pragma once
#include <string>
#include <vector>
#include <map>

enum class SuitType {
	DIAMOND,
	CLUBS,
	SPADES,
	HEARTS
};

class Card {
private:
	std::string suitOfCard;
	std::string nameOfCard;
public:
	Card(const int& indexOfName = 0, const int& indexOfSuit = 0); //Card construct
	Card(const Card&);

	std::string getNameOfCard() const;
	std::string getSuitOfCard() const;

	bool CanBeat(const Card& card, std::string trump) const;
	//friend std::ostream& operator<<(std::ostream &os,Card &card);
};

extern const  std::map<std::string, int> initialIDs;
extern const  std::vector<std::string> cardName;
extern const  std::vector<std::string> cardSuit;
extern const  std::map<SuitType, std::string> suits;

std::ostream& operator<<(std::ostream& out, const Card& card);
bool operator==(const Card & left, const Card& right);
//std::ostream& operator <<(std::ostream& os, const Card& card) 