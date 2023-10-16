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
	std::cout<<myManager.compare(myManager.throwCard(),Card(0,0))<<std::endl;

	char c;
	std::cin >> c;

	return 0;
}