#include <iostream> //cout 사용하기 위함
using namespace std;

#include "Exp.h"

int main() {
	int n; // 52줄과 똑같음, 컴파일러에게 정수하나를 저장할 공간을 할당 그 할당할 공간의 이름을 n
	Exp a(3, 2); //Exp 타입에 정보를 저장, 3의 2승, 베이스 3, 지수 2
	Exp b(9); //9의 1승
	Exp c; // 1의 1승

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스" << a.getBase() << "," << "지수 " << a.getExp() << endl;

	if (a.equals(b)) {
		cout << "same" << endl;
	}
	else {
		cout << "not same" << endl;
	}
}