#include<iostream>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "CardManager.h"
#include <windows.h>
#include <algorithm>

int main() {
	//����� ������� ��� �� ����� ������ � ������ � �����
	//����� ����� ������ ����� ���� �� ����� � ���� ���. ����� ���� ������ ����� � ������� ������ � ����� �������� �������.
	//�� ��� ����� ������ ������ ���� �����, ����� ��� ��������� ����, �� ����� �������� ���� � ���� ���������� �����(� ����� ��������� ����) ��� ������
	//����� ���� ��� ���-�� ������� ���� ���������������, ����� ������ ���� ������� ������� ������, ��� ���� ����� ������� ������ �������� ������ �����. cardShuffle.
	//����� ����� ������� ����� ������ ����� ������ ������ � ������ ��������� � ��� ������ �����.

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
	std::cout << "==================" << std::endl;
	std::cout << "trump is:" << myManager.getTrump() << std::endl;

	Player& player1 = myManager.getPlayer1();
	Player& player2 = myManager.getPlayer2();
	int NrCard;
	//player1.canMove = true;

	while (player1.NrOfCards() >= 1 || player2.NrOfCards() >= 1)
	{
		std::cout << player1.name << "  has:" << player1.NrOfCards() << std::endl;
		std::cout << player2.name << "  has:" << player2.NrOfCards() << std::endl;

		std::cout << "Choose 1 of " << player1.NrOfCards() << std::endl;
		std::cin >> NrCard;
		Card card = player1.showCard(NrCard - 1);
		std::cout << player1.name << " throws card - " << card << std::endl;

		auto result = player2.canBeat(card, myManager.getTrump());

		if (result.has_value() == false)
		{
			std::cout << player1.name << "  CANT BEAT - " << card << std::endl;
			player2.takeCard(card);									//Player 2 beret kartu kotoruyu ne otbil
			player1.dropCard(card);									//player 1 udalyaet ee iz svoego vectora
			if (player1.NrOfCards() < 6)
			{
				if (myDeck.getVector().size() > 0)
				{
					player1.takeCard(myDeck.getCard());				//player 1 beret kartu iz kolodi
				}
			}
		}

		else
		{
			std::cout << player2.name << " CAN BEAT - " << card << " with - " << *result << std::endl;
			player1.dropCard(card);									//player 1 udalyaet karut kotoruyu otbili
			if (player1.NrOfCards() < 6)
			{
				if (myDeck.getVector().size() > 0)
				{
					player1.takeCard(myDeck.getCard());				//player 1 beret kartu iz kolodi
				}
			}

			player2.dropCard(result.value());						//player 2 udalyaet kartu kotoroy otbilsya

			if (player2.NrOfCards() < 6)
			{
				if (myDeck.getVector().size() > 0)
				{
					player2.takeCard(myDeck.getCard());				//player 2 toje beret kartu iz kolodi
				}
			}

			Player aux = player1;
			player1 = player2;
			player2 = aux;
		}

		if (player1.NrOfCards() == 0) {
			std::cout << "WINNER IS " << player1.name << std::endl;
			char c;
			std::cin >> c;
			return 0;
		}

		if (player2.NrOfCards() == 0) {
			std::cout << "WINNER IS " << player2.name << std::endl;
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