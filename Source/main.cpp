#include<iostream>
#include"../Header/Card.h"
#include "../Header/Deck.h"
#include "../Player.h"
#include "../CardManager.h"

int main() {
	//����� ������� ��� �� ����� ������ � ������ � �����
	//����� ����� ������ ����� ���� �� ����� � ���� ���. ����� ���� ������ ����� � ������� ������ � ����� �������� �������.
	//�� ��� ����� ������ ������ ���� �����, ����� ��� ��������� ����, �� ����� �������� ���� � ���� ���������� �����(� ����� ��������� ����) ��� ������
	//����� ���� ��� ���-�� ������� ���� ���������������, ����� ������ ���� ������� ������� ������, ��� ���� ����� ������� ������ �������� ������ �����. cardShuffle.
	//����� ����� ������� ����� ������ ����� ������ ������ � ������ ��������� � ��� ������ �����.

	/*for (int i = 0; i < 9; i++) {
		if (cardName[i] == "Six") {
			Card().getIdOfCard() = 6;
		}
	}*/

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
	std::cout<<"player 1 has:" << myManager.getPlayer1().NrOfCards() << std::endl;
	std::cout<<"player 2 has:" << myManager.getPlayer2().NrOfCards() << std::endl;
	
	Player& player1 = myManager.getPlayer1();
	Player& player2 = myManager.getPlayer2();
	Card card = player1.throwCard(2);


	std::cout << "Player 1 throws card " << card << std::endl;
	
	auto result = player2.canBeat(card, myManager.getTrump());

	if (result.has_value() == false) {
		std::cout << "player 2 cant beat card " << card << std::endl;
	}
	else {
		std::cout << "player 2 can beat card " << card << " with " << *result << std::endl;
	}


	char c;
	std::cin >> c;

	return 0;
}