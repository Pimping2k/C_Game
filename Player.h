#pragma once
#include <vector>
#include <iostream>
#include "../C_Game/Header/Card.h"
#include <optional>
class Player {
	std::vector<Card>  playerCards;
public:
	int amount;

	Player();
	Player(Player& a);
	std::vector<Card> getCards() const;

	void takeCard(Card card);
	Card throwCard(int index);
	int NrOfCards() const;
	std::optional<Card> canBeat(const Card& card, std::string trump);
};

std::ostream& operator<<(std::ostream& out, const Player& player);