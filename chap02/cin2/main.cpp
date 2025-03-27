#include <iostream>

using namespace std;

int main() {
	cout << "이름을 입력하세요 >> ";

	char name[11]; // 10자로 구성된 이름 저장 가능
	cin >> name; // 키보드로부터 문자열 입력하여 name 배열에 저장
	// >> 의 연산자가 blank를 만나면 문자열 입력 종료
	cout << "이름은 " << name << "입니다.\n";

	char firstName[11];
	cin >> firstName;

	cout << "성은 " << firstName << "입니다.\n";
}