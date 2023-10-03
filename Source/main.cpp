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