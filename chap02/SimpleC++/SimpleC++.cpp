/*
	소스 : SimpleC++.cpp
	cout과 << 연산자를 이용하여 화면 출력
*/

#include <iostream>
//using std::cout;
//using std::endl;
using namespace std;

double area(int r) { //반지름이 r인 원의 면적으로 계산하여 리턴
	return 3.14 * r * r; //면적 리턴
}


int main() { //한줄짜리 주석문, main()함수의 리턴타입은 int가 표준
	          //2+3 (피연산자 연산자 피연산자)
	std::cout << "hello" << std::endl; //화면에 hello 문자열 출력, 조작자
	std::cout << "첫번째 맛보기\n";

	std::cout << "hello\n" << "첫번째 맛보기\n";
	std::cout << "반지름이 " << 4 << "인 원의 면적은? " << area(4);
	std::cout << std::endl;
	//cout << endl; 가능
	cout << '#' << true; //true는 C++에서 불린 상수

	return 0; //종료 코드 부모프로세스에게 종료 이유를 전달하기
}