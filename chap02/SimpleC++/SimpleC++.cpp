/*
	�ҽ� : SimpleC++.cpp
	cout�� << �����ڸ� �̿��Ͽ� ȭ�� ���
*/

#include <iostream>
//using std::cout;
//using std::endl;
using namespace std;

double area(int r) { //�������� r�� ���� �������� ����Ͽ� ����
	return 3.14 * r * r; //���� ����
}


int main() { //����¥�� �ּ���, main()�Լ��� ����Ÿ���� int�� ǥ��
	          //2+3 (�ǿ����� ������ �ǿ�����)
	std::cout << "hello" << std::endl; //ȭ�鿡 hello ���ڿ� ���, ������
	std::cout << "ù��° ������\n";

	std::cout << "hello\n" << "ù��° ������\n";
	std::cout << "�������� " << 4 << "�� ���� ������? " << area(4);
	std::cout << std::endl;
	//cout << endl; ����
	cout << '#' << true; //true�� C++���� �Ҹ� ���

	return 0; //���� �ڵ� �θ����μ������� ���� ������ �����ϱ�
}