#include <iostream>
using namespace std;

class MyIntStack {
	//int p[10]; //스택으로 저장할 배열 10개 선언
	int* p;
	int tos; //스택의 꼭대기 
	int size;
public:
	MyIntStack(int size); //기본 생성자
	MyIntStack(const MyIntStack& a); //복사 생성자
	~MyIntStack(); //소멸자
	bool push(int n);
	bool pop(int &n); //참조 매개변수 사용
	int length() { return tos; }
};
MyIntStack::MyIntStack(const MyIntStack& a) {
	p = new int [a.size];
	if (!p) {
		exit(0);
	}
	for (int i = 0; i < a.size; i++) {
		p[i] = a.p[i];
	}
	size = a.size;
	tos = a.tos;
}

MyIntStack::MyIntStack(int size) {
	p = new int[size];
	if (!p) {
		cout << "동적 할당 실패" << endl;
		exit(1);
	}
	tos = 0; //top위치 0번으로 초기화
	this->size = size;
}

MyIntStack::~MyIntStack() {
	if (p) {
		delete[] p; //p가 무언가를 가지고 있어야지만 소멸
	}
}

bool MyIntStack::push(int n) {
	if (tos == size) {
		//cout << "full!" << endl;
		return false;
	}
	p[tos] = n;
	tos++;
	return true;
}

bool MyIntStack::pop(int &n) {
	if (tos == 0) { // 비어있는 상태
		//cout << "empty" << endl;
		return false;
	}
	tos--;
	n = p[tos];
	return true;
}

int length(MyIntStack s) { //&붙이면 안됨
	return s.length();
}

//8번 문제
int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	a.push(30);
	//cout << "길이는" << length(a) << endl; //주석을 풀면 오류가 남! //length라는 함수에 MyIntStack s가 복사됨
	//남의 메모리를 침범하기 때문에 오류가 남
	//복사 생성자로 오류 해결가능

	int n;
	for (int i = 0; i < 12; i++) {
		bool res = a.pop(n);
		if (res == true) {
			cout << n << ' ';
		}
		else {
			cout << "empty" << ' ';
		}
		cout << endl;
	}
}


//7번문제
//void main2() {
//	MyIntStack a;
//	for (int i = 0; i < 15; i++) { //10개밖에 못 넣음
//		if (a.push(i)) {
//			cout << i << ' ';
//		}
//		else cout << endl << i + 1 << "번쨰 실패, full이래요" << endl;
//	}
//	cout << a.length() << endl;
//	int n;
//	for (int i = 0; i < 15; i++) {
//		if (a.pop(n)) {
//			cout << n << ' ';
//		}
//		else {
//			cout << endl << i+1 << "번째 pop 실패, empty니까";
//		}
//	}
//	cout << endl;
//}