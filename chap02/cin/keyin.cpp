#include <iostream>
using namespace std;

int main() {
	cout << "�ʺ�� ����  �Է�>>";

	int width;
	int height;

	//scanf("%d", &width); ������ scanf�� ���� ����
	cin >> width >> height; //Ű����κ��� ���� �ΰ� �Է�

	//cout << "���̸� �Է�>>";

	//int height;
	//cin >> height; //Ű����κ��� ���� �ϳ� �Է�

	int area = width * height;
	cout << "������" << area << endl;
}