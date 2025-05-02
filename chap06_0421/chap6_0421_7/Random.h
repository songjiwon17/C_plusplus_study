#ifndef RANDOM_H
#define RANDOM_H

#include <cstdlib>
#include <ctime>

class Random {
	Random() {} //객체 생성할 수 없음
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlpha();
	static double nextDouble();
};

#endif