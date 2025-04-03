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
		cout << "재료가 없습니다." << endl;
		return;
	}
	
	water--;
	coffee--;
}

void CoffeeMachine::drinkAmericano() {
	if (water < 2 || coffee < 1) {
		cout << "재료가 없습니다." << endl;
		return;
	}

	water-=2;
	coffee--;
}

void CoffeeMachine::drinkSugar() {
	if (water < 2 || coffee < 1 || sugar < 1) {
		cout << "재료가 없습니다." << endl;
		return;
	}

	water -= 2;
	coffee--;
	sugar--;
}

void CoffeeMachine::show() {
	cout << "커피 마신 상태\t";
	cout << "커피: " << coffee << "\t";
	cout << "물: " << water << "\t";
	cout << "설탕: " << sugar << endl;
}

void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}