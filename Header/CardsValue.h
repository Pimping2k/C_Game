#pragma once

struct CardsValue {
	//std::int value;

	//CardValue[] = { 6,7,8,9,10,11,12,13,14 }; //Сколько очков дает карта от 6 до Туза

	CardsValues value;
};

enum class CardsValues {
	6=6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
};