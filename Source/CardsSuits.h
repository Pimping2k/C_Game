#pragma once
#include<string>

struct CardsSuit {
	//std::string suit;

	static std::string cardSuit[] = {"Diamonds","Hearts","Spades","Clubs"}; //����� ����

	bool isTrump;
};

enum class Suits {
	Diamonds,
	Hearts,
	Spades,
	Clubs,
};