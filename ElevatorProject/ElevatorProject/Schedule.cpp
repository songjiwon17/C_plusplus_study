#include <iostream>  // C++ 표준 입출력 클래스와 객체를 다루기 위한 헤더 파일 포함
using namespace std; // std namespace에 선언된 모든 이름에 std:: 생략

#include "Schedule.h" // 추상 클래스 Schedule 헤더파일 포함

// 생성자, 스케줄 알고리즘 이름, 5개의 층들, 현재 층을 보관할 공간 크기 설정
Schedule::Schedule(string name, int floor[], int current) {
	this->name = name; // 객체 멤버 name에 매개변수 name을 대입

	for (int i = 0; i < 5; i++) { // 입력한 5개의 층
		this->floor[i] = floor[i]; // floor 배열의 각 값을 멤버 변수 floor 배열에 복사
	}

	this->current = current; // 객체 멤버 current에 매개변수 current을 대입
	movingDistance = 0; // 총 이동 거리, 0으로 초기화
}

// 총 이동 거리 리턴 함수
int Schedule::getMovingDistance() {
	return movingDistance;
}

// 입력된 모든 층 출력 함수
void Schedule::showFloor() {
	cout << "현재 버튼이 눌러진 층들은 ";

	for (int i = 0; i < 5; i++)
		cout << floor[i] << ' ';
	cout << endl;
}

// 현재 위치 출력 함수
void Schedule::showCurrent() {
	cout << "현재 엘리베이터의 위치는 " << current << endl;
}

// 엘리베이터 운행 시작 메시지 출력 함수
void Schedule::showMessage() {
	cout << "\n*****지금부터 " << name << " 방식으로 엘리베이터가 운행됩니다 *****" << endl;
}