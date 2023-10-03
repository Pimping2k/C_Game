#pragma once
#include <vector>
#include <iostream>
#include "../C_Game/Header/Card.h"
class Player {
	std::vector<Card>  playerCards;
public:
	int amount;

	Player();
	Player(Player& a);
	std::vector<Card> getCards() const;

	void takeCard(Card card);
};

std::ostream& operator<<(std::ostream& out, const Player& player);