#include <iostream>
using namespace std;

//Ŭ���� �����
class Rectangle {
public:
	int width;
	int height;
	bool isSquare();
	Rectangle(); //�⺻ ������
	Rectangle(int x);
	Rectangle(int x, int y);
};

//Ŭ���� ������
Rectangle::Rectangle() { //�ݵ�� �ʱ�ȭ �ؾ���!
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
	
	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;

}