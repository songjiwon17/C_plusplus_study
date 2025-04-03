#ifndef RANDOM_H
#define RANDOM_H

//클래스 선언부 
class Random {
public:
	Random();
	int next();
	int nextInRange(int a, int b);
};

#endif