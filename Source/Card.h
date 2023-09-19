#pragma once
#include "CardsSuits.h"
#include "CardsNumber.h"

class Card {
private:
	enum class NumberOfCard Number;
	enum class Suits CardSuit;
	
public:
	Card() = default;
	Card(enum class NumberOfCard Number,enum class Suits CardSuit); //, CardsSuit::isTrump isTrump

	generateTrump();

	generateDeck();
};