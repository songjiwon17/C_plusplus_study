#include <iostream>
using namespace std;

#include "Exp.h" //�� �� include�ϸ� ����, �ٺ������� ���� ����� ã�ƿ���

//Ŭ���� ������ 
int Exp::getValue() { //������ ������ ����Ͽ� ����
	int value = 1; //�ʱⰪ 1 �߿�!!!
	for (int i = 0; i < exp; i++) {
		value *= base;
	}
	return value;
}

Exp::Exp(int b, int e) {
	base = b;
	exp = e;
	cout << "����.." << endl;
}

Exp::Exp() { // Ŭ���� ��������������
	base = 1;
	exp = 1;
}

Exp::Exp(int b) {
	base = b;
	exp = 1;
}

bool Exp::equals(Exp b) { //��ü a�� ���� ��ü b�� ���� ������ ��
	if (getValue() == b.getValue()) {
		return true;
	}
	else {
		return false;
	}
}