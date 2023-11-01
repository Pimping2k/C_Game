#include<iostream>
#include"../Header/Card.h"
#include "../Header/Deck.h"
#include "../Player.h"
#include "../CardManager.h"
#include <windows.h>

int main() {
	//Вызов функции где мы будем играть в дурака с ботом
	//Затем будут выданы карты свои мы знаем а бота нет. После чего первая карта в массиве колоды её масть является козырем.
	//За ход можно кинуть только одну карту, затем ход переходит боту, он может отбивать если у него одинаковая масть(и карта номиналом выше) или козырь
	//После того как кто-то победит игра останавливается, также должна быть функция тасовки колоды, для того чтобы игрокам всегда давались разные карты. cardShuffle.
	//После этого игрокам опять выдают карты разных мастей и разных номиналов и они играют опять.

	Deck myDeck;
	myDeck.print();
	std::cout << "=====================" << std::endl;

	myDeck.shuffle();
	myDeck.print();

	CardManager myManager;

	myManager.init();
	std::cout << "=====PLAYER1 CARDS=====" << std::endl;
	std::cout << myManager.getPlayer1();
	std::cout << "=====PLAYER2 CARDS=====" << std::endl;
	std::cout << myManager.getPlayer2();
	/*for (auto& i : myDeck->getList()) {
		std::cout << i.getNameOfCard() << i.getSuitOfCard() << std::endl;
	}*/
	std::cout << "==================" << std::endl;
	std::cout << "trump is:" << myManager.getTrump() << std::endl;

	Player& player1 = myManager.getPlayer1();
	Player& player2 = myManager.getPlayer2();
	int NrCard;

	while (player1.NrOfCards() >= 1 || player2.NrOfCards() >= 1)
	{
		std::cout << "Player 1 has:" << player1.NrOfCards() << std::endl;
		std::cout << "Player 2 has:" << player2.NrOfCards() << std::endl;

		std::cout << "Choose 1 of " << player1.NrOfCards() << std::endl;
		std::cin >> NrCard;
		Card card = player1.showCard(NrCard - 1);
		std::cout << "Player 1 throws card - " << card << std::endl;

		auto result = player2.canBeat(card, myManager.getTrump());

		if (result.has_value() == false) {
			std::cout << "PLAYER 2 CANT BEAT - " << card << std::endl;
			player2.takeCard(card);									//Player 2 beret kartu kotoruyu ne otbil
			player1.dropCard(card);									//player 1 udalyaet ee iz svoego vectora
			if (player1.NrOfCards() < 6) {
				if (myDeck.getVector().size() > 0) {
					player1.takeCard(myDeck.getCard());				//player 1 beret kartu iz kolodi
				}
			}
		}

		else {
			std::cout << "PLAYER 2 CAN BEAT - " << card << " with " << *result << std::endl;
			player1.dropCard(card);									//player 1 udalyaet karut kotoruyu otbili

			if (player1.NrOfCards() < 6) {
				if (myDeck.getVector().size() > 0) {
					player1.takeCard(myDeck.getCard());				//player 1 beret kartu iz kolodi
				}
			}
			player2.dropCard(result.value());						//player 2 udalyaet kartu kotoroy otbilsya

			if (player2.NrOfCards() < 6) {
				if (myDeck.getVector().size() > 0) {
					player2.takeCard(myDeck.getCard());				//player 2 toje beret kartu iz kolodi
				}
			}
		}

		if (player1.NrOfCards() == 0) {
			std::cout << "=====WINNER IS PLAYER 1=====" << std::endl;
			char c;
			std::cin >> c;
			return 0;
		}

		if (player2.NrOfCards() == 0) {
			std::cout << "=====WINNER IS PLAYER 2=====" << std::endl;
			char c;
			std::cin >> c;
			return 0;
		}

		if (player1.NrOfCards() == 0 && player2.NrOfCards() == 0) {
			std::cout << "=====IT`S TIE=====" << std::endl; char c;
			std::cin >> c;
			return 0;
		}

	}

	char c;
	std::cin >> c;

	return 0;
}