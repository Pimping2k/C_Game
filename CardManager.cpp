#include "CardManager.h"

CardManager::CardManager() {

};

void CardManager::init() {
	Deck.shuffle();
	for (int i = 0; i < 6; ++i) {
		player[0].takeCard(Deck.getCard());
		player[1].takeCard(Deck.getCard());
	}
	player[0].name = "Evgeniy";
	player[1].name = "Andrei";

	trump = Deck.defineTrump().getSuitOfCard();
};

void CardManager::start() {

};

//Card CardManager::throwCard() {
//	return this->Deck.getCard();
//}

std::string CardManager::getTrump() const{
	return trump;
}

Player& CardManager::getPlayer1() {
	return player[0];
};
Player& CardManager::getPlayer2() {
	return player[1];
};

//
//Card CardManager::compare(const Card& left, const Card& right) const {
//	bool left_isTrump = trump == left.getSuitOfCard();
//	int left_value = initialIDs.at(left.getNameOfCard()) + (left_isTrump) ? 100 : 0;
//
//	bool right_isTrump = trump == right.getSuitOfCard();
//	int right_value = initialIDs.at(right.getNameOfCard()) + (right_isTrump) ? 100 : 0;
//
//	if (left.getSuitOfCard() == right.getSuitOfCard() || left_isTrump || right_isTrump) {
//		return (left_value < right_value) ? right : left;
//	}
//}