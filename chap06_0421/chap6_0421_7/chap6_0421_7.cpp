#include <iostream>
using namespace std;

#include "Random.h"

int main() {
	Random::seed();
	cout << "1에서 100까지 랜덤한 정수 10개 출력" << endl;
	for (int i = 0; i < 10; i++) {
		int n = Random::nextInt(1, 100);
		cout << n << ' ';
	}
	cout << endl;

	cout << "알파벳을 랜덤하게 10개 출력" << endl;
	for (int i = 0; i < 10; i++) {
		char c = Random::nextAlpha();
		cout << c << ' ';
	}
	cout << endl;

	//실수 10개 출력
	for (int i = 0; i < 10; i++) {
		double d = Random::nextDouble();
		cout << d << ' ';

		if (i == 0 && i % 4 == 0) {
			cout << endl;
		}
	}
	cout << endl;
}