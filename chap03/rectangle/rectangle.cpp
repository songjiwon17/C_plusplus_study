#include <iostream>
using namespace std;

//클래스 선언부
class Rectangle {
public:
	int width;
	int height;
	double getArea();
};

//클래스 구현부
double Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	double area = rect.getArea();
	cout << "사각형의 면적은" << area << "입니다." << endl;
}