#include <iostream>
using namespace std;

//클래스 선언부
class Circle {
public:
	int radius;
	double getArea();
	Circle(); // 기본 생성자
	Circle(int r); //생성자
	~Circle(); //소멸자
};

//클래스 구현부
Circle::Circle() { //생성자 함수: 생성될 떄 호출된다.
	radius = 1;
	cout << "반지름"<< radius << "원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름" << r <<  "원 생성" << endl;
}


Circle::~Circle() {
	cout << "반지름" << radius << "소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // 생성자가 실행되는 시점
	double area = donut.getArea();
	cout << "donut의 먼적은" << area << "입니다." << endl;

	Circle pizza(30); //Circle(int r) 생성자를 호출한다.
	//pizza.radius = 30; 이렇게 줄 필요가 없다.
	area = pizza.getArea();
	cout << "pizza의 먼적은" << area << "입니다." << endl;
}