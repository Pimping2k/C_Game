#include "Player.h"
#include "Header/Deck.h"

Player::Player() {
}

void Player::takeCard(Card card) {
	playerCards.push_back(card);
}

Card Player::throwCard(int index)
{
	return playerCards[index];
}

std::vector<Card> Player::getCards()const { return this->playerCards; }

std::ostream& operator<<(std::ostream& out, const Player& player) {
	for (auto a : player.getCards()) {
		out << a;
	}
	return out;
}

int Player::NrOfCards() const {
	return playerCards.size();
}

std::optional<Card> Player::canBeat(const Card& card, std::string trump) {
	std::optional<Card> result;

	for (auto c : playerCards) {
		if (c.CanBeat(card, trump)) {
			result = c;
			return result;
		}
	}
	return result;
}

//Выбрать какую карту кинуть
//А потом удалить еёconstz