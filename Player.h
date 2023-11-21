#pragma once
/**
 * @author Savastin Andrei DJ2203
 * @e-mail - andrey.savastin@mail.ru
 */
#include <vector>
#include <iostream>
#include "../C_Game/Header/Card.h"
#include <optional>
#include <algorithm>

 /**
  * @brief Class for represeting player and his properties
  */
class Player {
	std::vector<Card>  playerCards;
public:
	Player();
	Player(const Player& player);
	std::string name;
	std::vector<Card> getCards() const;

	/**
	 * Show card with index
	 * @param int index
	 * @return Card
	 */
	Card showCard(int index) const;

	/**
	 * Function which show number of player cards
	 * @return playerCards.size()
	 */
	int NrOfCards() const;

	/**
	 * Function with logic of game between 2 players
	 * @param Card& card - set the card
	 * @param string trump - set the trump of cards suits
	 * @return card
	 * @return true/false
	 */
	std::optional<Card> canBeat(const Card& card, std::string trump);

	/**
	 * Method which droping one of player cards and erasing it
	 * @param Card card
	 * @return card
	 */
	Card dropCard(Card card);

	/**
	 * Method which giving for player deck one card
	 * @param Card card
	 */
	void takeCard(Card card);

	Player& operator=(const Player& other);
};

std::ostream& operator<<(std::ostream& out, const Player& player);
