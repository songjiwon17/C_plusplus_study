#include <iostream> //cout ����ϱ� ����
using namespace std;

#include "Exp.h"

int main() {
	int n; // 52�ٰ� �Ȱ���, �����Ϸ����� �����ϳ��� ������ ������ �Ҵ� �� �Ҵ��� ������ �̸��� n
	Exp a(3, 2); //Exp Ÿ�Կ� ������ ����, 3�� 2��, ���̽� 3, ���� 2
	Exp b(9); //9�� 1��
	Exp c; // 1�� 1��

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a�� ���̽�" << a.getBase() << "," << "���� " << a.getExp() << endl;

	if (a.equals(b)) {
		cout << "same" << endl;
	}
	else {
		cout << "not same" << endl;
	}
}