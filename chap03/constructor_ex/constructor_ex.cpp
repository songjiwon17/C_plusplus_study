#include <iostream>
using namespace std;

//Ŭ���� �����
class Circle {
public:
	int radius;
	double getArea();
	Circle(); // �⺻ ������
	Circle(int r); //������
	~Circle(); //�Ҹ���
};

//Ŭ���� ������
Circle::Circle() { //������ �Լ�: ������ �� ȣ��ȴ�.
	radius = 1;
	cout << "������"<< radius << "�� ����" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������" << r <<  "�� ����" << endl;
}


Circle::~Circle() {
	cout << "������" << radius << "�Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // �����ڰ� ����Ǵ� ����
	double area = donut.getArea();
	cout << "donut�� ������" << area << "�Դϴ�." << endl;

	Circle pizza(30); //Circle(int r) �����ڸ� ȣ���Ѵ�.
	//pizza.radius = 30; �̷��� �� �ʿ䰡 ����.
	area = pizza.getArea();
	cout << "pizza�� ������" << area << "�Դϴ�." << endl;
}