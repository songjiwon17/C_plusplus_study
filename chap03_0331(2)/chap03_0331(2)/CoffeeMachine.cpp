#include <iostream>
using namespace std;

#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}

void CoffeeMachine::drinkEspresso() {
	if (water < 1 || coffee < 1) {
		cout << "��ᰡ �����ϴ�." << endl;
		return;
	}
	
	water--;
	coffee--;
}

void CoffeeMachine::drinkAmericano() {
	if (water < 2 || coffee < 1) {
		cout << "��ᰡ �����ϴ�." << endl;
		return;
	}

	water-=2;
	coffee--;
}

void CoffeeMachine::drinkSugar() {
	if (water < 2 || coffee < 1 || sugar < 1) {
		cout << "��ᰡ �����ϴ�." << endl;
		return;
	}

	water -= 2;
	coffee--;
	sugar--;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� ���� ����\t";
	cout << "Ŀ��: " << coffee << "\t";
	cout << "��: " << water << "\t";
	cout << "����: " << sugar << endl;
}

void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}