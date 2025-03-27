#include <iostream>
using namespace std;

int main() {
	cout << "주소를 입력하세요";

	char address[100]; //주소 문자는 최대 100개
	cin.getline(address, 100, '\n');

	cout << address;
}