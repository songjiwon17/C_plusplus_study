#include <iostream>
#include <cstdlib>
using namespace std;

#include "Random.h"

int main() {
	Random r;
	cout << "여기서 " << RAND_MAX << "까지 10개" << endl; //RAND_MAX 16비트
	for (int i=0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl;

	cout << "2에서 " << 4 << "까지 10개" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2,4);
		cout << n << ' ';
	}
	cout << endl;
}