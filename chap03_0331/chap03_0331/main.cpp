#include <iostream>
#include <cstdlib>
using namespace std;

#include "Random.h"

int main() {
	Random r;
	cout << "���⼭ " << RAND_MAX << "���� 10��" << endl; //RAND_MAX 16��Ʈ
	for (int i=0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl;

	cout << "2���� " << 4 << "���� 10��" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2,4);
		cout << n << ' ';
	}
	cout << endl;
}