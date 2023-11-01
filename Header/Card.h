#pragma once
/**
 * @author Savastin Andrei DJ2203
 * @e-mail - andrey.savastin@mail.ru
 */
#include <string>
#include <vector>
#include <map>

enum class SuitType {
	DIAMOND,
	CLUBS,
	SPADES,
	HEARTS
};

/**
 * @brief Class Card is representing the properties of card and has the logic of beating card
*/
class Card {
private:
	std::string suitOfCard;
	std::string nameOfCard;
public:
	Card(const int& indexOfName = 0, const int& indexOfSuit = 0); //Card construct
	Card(const Card&);

	/**
	 * Method which returning name of card
	 */
	std::string getNameOfCard() const;

	/**
	 * Method which returning suit of card
	 */
	std::string getSuitOfCard() const;

	/**
	 * Method which realising logic between 2 players can beat this card or not
	 * @param Card& card - right card which is comparing with left
	 * @param string trump - set the trump of card
	 * @return true/false
	 */
	bool CanBeat(const Card& card, std::string trump) const;
	//friend std::ostream& operator<<(std::ostream &os,Card &card);
};

extern const  std::map<std::string, int> initialIDs;
extern const  std::vector<std::string> cardName;
extern const  std::vector<std::string> cardSuit;
extern const  std::map<SuitType, std::string> suits;

std::ostream& operator<<(std::ostream& out, const Card& card);		//overloading of ostream operator
bool operator==(const Card & left, const Card& right);				//overloading of equal operator

//std::ostream& operator <<(std::ostream& os, const Card& card) 