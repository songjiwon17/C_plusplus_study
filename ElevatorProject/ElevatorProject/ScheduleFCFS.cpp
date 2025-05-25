#include <iostream>  // C++ 표준 입출력 클래스와 객체를 다루기 위한 헤더 파일 포함
using namespace std; // std namespace에 선언된 모든 이름에 std:: 생략

#include "ScheduleFCFS.h" // FCFS 기능(ScheduleFCFS 클래스) 헤더파일 포함

// ScheduleFCFS 생성자, Schedule을 상속받고 
// 스케줄 알고리즘 이름, 5개의 층들, 현재 층을 보관할 공간 크기 설정
ScheduleFCFS::ScheduleFCFS(string name, int floor[], int current) : Schedule(name, floor, current) {}

// 입력된 순서대로 엘리베이터를 이동하는 ScheduleFCFS 동작 함수
void ScheduleFCFS::run() {
showMessage(); // 운행 시작 메시지 출력
showCurrent(); // 현재 엘리베이터 위치 출력
showFloor(); // 현재 입력된 층들 출력

for (int i = 0; i < 5; i++) { // 입력된 층들을 순서대로
	int distance = abs(floor[i] - current); // 현재 위치와 목적 층 사이 거리를 abs()로 절대값으로 계산하고 저장
	cout << floor[i] << "층으로 갑니다." << ' '; // 이동하는 층을 출력

	movingDistance += distance; // 이동 거리를 누적 
	current = floor[i]; // 현재 층의 위치를 갱신
	cout << "누적 이동 거리는 " << getMovingDistance() << endl; // 누적 이동 거리 출력
}

showCurrent(); // 현재 엘리베이터 위치를 출력
cout << "총 이동 거리는 " << getMovingDistance() << endl; // 총 이동 거리 출력
}