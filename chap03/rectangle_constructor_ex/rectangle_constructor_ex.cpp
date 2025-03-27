#include <iostream>
using namespace std;

//클래스 선언부
class Rectangle {
public:
	int width;
	int height;
	bool isSquare();
	Rectangle(); //기본 생성자
	Rectangle(int x);
	Rectangle(int x, int y);
};

//클래스 구현부
Rectangle::Rectangle() { //반드시 초기화 해야함!
	width = 1;
	height = 1;
}
Rectangle::Rectangle(int x) {
	width = height = x;
}
Rectangle::Rectangle(int x, int y) {
	width = x;
	height = y;
}

bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

//main
int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);
	
	if (rect1.isSquare()) cout << "rect1은 정사각항이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각항이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각항이다." << endl;

}