#pragma once
#include"Header/Deck.h"
#include "Player.h"

class CardManager {
	Deck Deck;
	Player player1;
	Player player2;
public:
	CardManager();
	void init();
	void start();
	const Player& getPlayer() const;
};