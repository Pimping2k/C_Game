#include"Card.h"
#include<iostream>

int main() {
	//����� ������� ��� �� ����� ������ � ������ � �����
	//����� ����� ������ ����� ���� �� ����� � ���� ���. ����� ���� ������ ����� � ������� ������ � ����� �������� �������.
	//�� ��� ����� ������ ������ ���� �����, ����� ��� ��������� ����, �� ����� �������� ���� � ���� ���������� �����(� ����� ��������� ����) ��� ������
	//����� ���� ��� ���-�� ������� ���� ���������������, ����� ������ ���� ������� ������� ������, ��� ���� ����� ������� ������ �������� ������ �����. cardShuffle.
	//����� ����� ������� ����� ������ ����� ������ ������ � ������ ��������� � ��� ������ �����.

	Deck* myDeck = new Deck();
	myDeck->print();

	/*for (auto& i : myDeck->getList()) {
		std::cout << i.getNameOfCard() << i.getSuitOfCard() << std::endl;
	}*/


	return 0;
}