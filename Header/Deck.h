#pragma once
/**
 * @author Savastin Andrei DJ2203
 * @e-mail - andrey.savastin@mail.ru
 */
#include<vector>
#include "Card.h"

typedef std::vector<Card> deck_t; 

/**
 * @brief Class for represeting Deck and it`s properties with methods which helps make game more realistical
*/
class Deck {
private:
	deck_t deck;
	deck_t deckOfHitten;
public:
	Deck(); //Deck constructor
	Deck(int nrOfCards);

	/**
	 * Method which returning vector
	 */
	deck_t getVector();

	/**
	 * A method that takes a card from the deck and passes it 
	*/
	Card getCard();

	/**
	 * Method which shuffles the deck
	 */
	void shuffle();		

	/**
	 * Method which defines which card is trump and it`s suit will become trump 
	 */
	Card defineTrump();

	void print();
	void defineId();
};
