#include "Random.h"

int Random::nextInt(int min, int max) {
	if (min > max) {
		int tmp = min;
		min = max;
		max = tmp;
	}
	int range = max - min + 1;
	return rand() % range + min;
}

char Random::nextAlpha() {
	int n = nextInt(0, 25);
	int s = nextInt(0, 1);
	if (s == 0) { //´ë¹®ÀÚ
		return 'A' + n;
	}
	else {
		return 'a' + n;
	}
}

double Random::nextDouble() {
	double d = ((double)rand()) / RAND_MAX;
	return d;
}