#include "Player.h"
#include "Header/Deck.h"

Player::Player() {
}

void Player::takeCard(Card card) {
	playerCards.push_back(card);
}

Card Player::throwCard()
{
	return playerCards[0];
}

std::vector<Card> Player::getCards()const { return this->playerCards; }

std::ostream& operator<<(std::ostream& out, const Player& player) {
	for (auto a : player.getCards()) {
		out << a;
	}
	return out;
}