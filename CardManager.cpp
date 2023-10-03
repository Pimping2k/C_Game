#include "CardManager.h"

CardManager::CardManager() {

};

void CardManager::init() {
	Deck.shuffle();
	for (int i = 0; i < 6; ++i) {
		player1.takeCard(Deck.getCard());
		player2.takeCard(Deck.getCard());
	}
};

void CardManager::start() {

};

const Player& CardManager::getPlayer() const {
	return player1;
};