#include <iostream>

using namespace std;

int main() {
	cout << "�̸��� �Է��ϼ��� >> ";

	char name[11]; // 10�ڷ� ������ �̸� ���� ����
	cin >> name; // Ű����κ��� ���ڿ� �Է��Ͽ� name �迭�� ����
	// >> �� �����ڰ� blank�� ������ ���ڿ� �Է� ����
	cout << "�̸��� " << name << "�Դϴ�.\n";

	char firstName[11];
	cin >> firstName;

	cout << "���� " << firstName << "�Դϴ�.\n";
}