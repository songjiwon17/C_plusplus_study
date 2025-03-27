#include <iostream>
using namespace std;

#include "Exp.h" //두 번 include하면 오류, 근본적으로 막을 방법을 찾아여함

//클래스 구현부 
int Exp::getValue() { //지수를 정수로 계산하여 리턴
	int value = 1; //초기값 1 중요!!!
	for (int i = 0; i < exp; i++) {
		value *= base;
	}
	return value;
}

Exp::Exp(int b, int e) {
	base = b;
	exp = e;
	cout << "생성.." << endl;
}

Exp::Exp() { // 클래스 범위지정연산자
	base = 1;
	exp = 1;
}

Exp::Exp(int b) {
	base = b;
	exp = 1;
}

bool Exp::equals(Exp b) { //객체 a의 값과 객체 b의 값이 같은지 비교
	if (getValue() == b.getValue()) {
		return true;
	}
	else {
		return false;
	}
}