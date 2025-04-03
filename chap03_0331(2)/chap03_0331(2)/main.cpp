#include "CoffeeMachine.h"

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugar();
	java.show();
	java.fill();
	java.show();
}