#include<iostream>
#include"../Header/Card.h"
#include "../Header/Deck.h"
#include "../Player.h"
#include "../CardManager.h"

int main() {
	//Вызов функции где мы будем играть в дурака с ботом
	//Затем будут выданы карты свои мы знаем а бота нет. После чего первая карта в массиве колоды её масть является козырем.
	//За ход можно кинуть только одну карту, затем ход переходит боту, он может отбивать если у него одинаковая масть(и карта номиналом выше) или козырь
	//После того как кто-то победит игра останавливается, также должна быть функция тасовки колоды, для того чтобы игрокам всегда давались разные карты. cardShuffle.
	//После этого игрокам опять выдают карты разных мастей и разных номиналов и они играют опять.

	Deck myDeck;
	myDeck.print();

	myDeck.shuffle();
	myDeck.print();

	CardManager myManager;

	myManager.init();
	std::cout << "PLAYER CARDS" << std::endl;
	std::cout << myManager.getPlayer();
	/*for (auto& i : myDeck->getList()) {
		std::cout << i.getNameOfCard() << i.getSuitOfCard() << std::endl;
	}*/

	char c;
	std::cin >> c;

	return 0;
}