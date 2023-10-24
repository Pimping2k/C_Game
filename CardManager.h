#pragma once
#include"Header/Deck.h"
#include "Player.h"
#include "Header/Card.h"

class CardManager {
	Deck Deck;
	Player player1;
	Player player2;
	std::string trump;
public:
	CardManager();
	void init();
	void start();
	Player& getPlayer1();
	Player& getPlayer2();
	// Card compare(const Card&, const Card&) const;
	Card throwCard();
	std::string getTrump() const;
};