#pragma once
#include<string>

struct CardsNumber {
	std::string name;

	//cardName[] = { "6","7","8","9","10","Jack","Queen","King","Ace" }; //Нумерация и названия карт от 6 до Туза

	CardsNumbers nameOfcard;
};

enum class CardsNumbers {
	Six = 6,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
	Ace,
};