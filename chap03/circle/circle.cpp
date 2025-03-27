#include <iostream>
using namespace std;

//클래스 선언부
class Circle { 
public: //외부에 공개한다.
	int radius; //멤버변수
	double getArea(); //멤버함수, 클래스의 외부에서 나한테 요청하는 형식으로 멤버함수명 지정
};

//클래스 구현부
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int n;//정수 타입의 변수 n 생성: 정수를 저장할 공간 할당받고 이 공간을 n이라고 부르겠다. => 컴파일에게 얘기
	Circle donut; // Circle 타입의 객체 donut을 생성
				// Circle의 멤버들을 모두 저장할 공간을 할당받고 이 공간(객체)를 donut이라고 부르겠다.  
				//메모리 할당

	//객체 활용
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut의 먼적은" << area << "입니다." << endl;

	//Circle 타입의 객체 pizza 생성
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza의 먼적은" << area << "입니다." << endl;
}