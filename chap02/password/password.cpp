#include <iostream>
#include <cstring>
#include <string> // 2. string 클래스 이용하는 방법

using namespace std;

int main() {
	char password[11]; //암호는 최대 10글자
	//string password; //2. 문자열을 저장할 string 객체 생성
	while (true) {
		cout << "암호>> ";
		cin >> password; //암호 입력
		//getline(cin, password); 2. 암호 입력

		if (strcmp(password, "C++") == 0) {//입력된 문자열 과 진짜 암호 비교
			cout << "성공! 프로그램을 종료합니다.";
			break;//같으면 break로 while문 벗어나기
		}

		// 2.
		//if (password == "C++") { 
		//	cout << "성공! 프로그램을 종료합니다.";
		//	break;
		//}

		else {
			cout << "실패! 틀립니다. 다시 하세요" << endl;
			//아니면, 다시 while문 반복으로
		}
	}
}