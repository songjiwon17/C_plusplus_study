#include <iostream>
using namespace std;

//Ŭ���� �����
class Circle { 
public: //�ܺο� �����Ѵ�.
	int radius; //�������
	double getArea(); //����Լ�, Ŭ������ �ܺο��� ������ ��û�ϴ� �������� ����Լ��� ����
};

//Ŭ���� ������
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int n;//���� Ÿ���� ���� n ����: ������ ������ ���� �Ҵ�ް� �� ������ n�̶�� �θ��ڴ�. => �����Ͽ��� ���
	Circle donut; // Circle Ÿ���� ��ü donut�� ����
				// Circle�� ������� ��� ������ ������ �Ҵ�ް� �� ����(��ü)�� donut�̶�� �θ��ڴ�.  
				//�޸� �Ҵ�

	//��ü Ȱ��
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut�� ������" << area << "�Դϴ�." << endl;

	//Circle Ÿ���� ��ü pizza ����
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza�� ������" << area << "�Դϴ�." << endl;
}