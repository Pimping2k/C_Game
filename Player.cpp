#include "Player.h"
#include "Header/Deck.h"

Player::Player() {
}

Card Player::showCard(int index) const
{
	return playerCards[index];
}

Card Player::dropCard(Card card) {
	auto it = std::find(playerCards.begin(), playerCards.end(), card);
	if (it == playerCards.end())
		throw new std::exception("Unknown Card");
	playerCards.erase(it);
	return card;
}

void Player::takeCard(Card card) {
	playerCards.push_back(card);
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