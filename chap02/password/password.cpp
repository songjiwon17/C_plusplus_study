#include <iostream>
#include <cstring>
#include <string> // 2. string Ŭ���� �̿��ϴ� ���

using namespace std;

int main() {
	char password[11]; //��ȣ�� �ִ� 10����
	//string password; //2. ���ڿ��� ������ string ��ü ����
	while (true) {
		cout << "��ȣ>> ";
		cin >> password; //��ȣ �Է�
		//getline(cin, password); 2. ��ȣ �Է�

		if (strcmp(password, "C++") == 0) {//�Էµ� ���ڿ� �� ��¥ ��ȣ ��
			cout << "����! ���α׷��� �����մϴ�.";
			break;//������ break�� while�� �����
		}

		// 2.
		//if (password == "C++") { 
		//	cout << "����! ���α׷��� �����մϴ�.";
		//	break;
		//}

		else {
			cout << "����! Ʋ���ϴ�. �ٽ� �ϼ���" << endl;
			//�ƴϸ�, �ٽ� while�� �ݺ�����
		}
	}
}