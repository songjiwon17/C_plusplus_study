#include <iostream>
using namespace std;

//Ŭ���� �����
class Rectangle {
public:
	int width;
	int height;
	double getArea();
};

//Ŭ���� ������
double Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	double area = rect.getArea();
	cout << "�簢���� ������" << area << "�Դϴ�." << endl;
}