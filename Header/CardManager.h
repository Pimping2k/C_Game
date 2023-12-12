#pragma once
/**
 * @author Savastin Andrei DJ2203
 * @e-mail - andrey.savastin@mail.ru
 */
#include"Deck.h"
#include "Player.h"
#include "Card.h"
const int NRPLAYERS = 2;

/**
 * @brief Class which representing Card Manager which has logic of the game
*/
class CardManager {
	Deck Deck;
	Player player[NRPLAYERS];
	std::string trump;
public:
	CardManager();
	/**
	 * Method which initializing begin of game is giving 6 cards for both players
	 */
	void init();

	/**
	 * @brief 
	*/
	void start();

	/**
	 * Method which returning player1 because it`s private
	 */
	Player& getPlayer1();

	/**
	 * Method which returning player2 because it`s private
	 */
	Player& getPlayer2();

	/**
	 * Method which returning trump
	 */
	std::string getTrump() const;

	// Card compare(const Card&, const Card&) const;
	//Card throwCard();
};