#include <cstdlib>
#include <ctime>
#include "Random.h"

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	return rand();
}

int Random::nextInRange(int a, int b) {
	int range = b - a + 1;
	int n = rand() % range;
	n = n + a;
	return n;
}