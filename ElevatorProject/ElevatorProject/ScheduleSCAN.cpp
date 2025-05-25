#include <iostream>  // C++ 표준 입출력 클래스와 객체를 다루기 위한 헤더 파일 포함
using namespace std; // std namespace에 선언된 모든 이름에 std:: 생략

#include "ScheduleSCAN.h" // SCAN 기능(ScheduleSCAN 클래스) 헤더파일 포함

// ScheduleSCAN 생성자, Schedule을 상속받고 
// 스케줄 알고리즘 이름, 5개의 층들, 현재 층, 현재 방향을 보관할 공간 크기 설정
ScheduleSCAN::ScheduleSCAN(string name, int floor[], int current, string direction) : Schedule(name, floor, current) {
	this->direction = direction; // 객체 멤버 direction에 매개변수 direction을 대입
}

// 이동 방향에서 가장 가까운 층으로 이동하고 끝까지 가면 방향 전환하는 ScheduleSCAN 동작 함수
void ScheduleSCAN::run() {
	showMessage(); // 운행 시작 메시지 출력
	showCurrent(); // 현재 엘리베이터 위치 출력
	showFloor(); // 현재 입력된 층들 출력

	int visited[5] = { 0 }; // 방문 여부 체크 배열
	int count = 0; // 현재까지 방문한 층 개수

	while (count < 5) { // 입력된 층들을 다 방문할 때까지
		cout << "현재 이동 방향: " << direction <<endl; // 현재 이동 방향 출력

		int nextIndex = -1; // 다음에 이동할 층의 배열 인덱스

		// up 방향이면 최대값보다 큰 값, down이면 최소값보다 작은 값으로 설정
		int  nextFloor = (direction == "up") ? Schedule::MAX_FLOOR + 1 : -1;

		for (int i = 0; i < 5; i++) { // 입력된 층들을
			if (visited[i]) continue; // 이미 방문했다면 건너뜀

			// up 방향이고 현재 층보다 위이면서 가장 가까운 층이라면
			if (direction == "up" && current < floor[i] && floor[i] < nextFloor) {
				nextFloor = floor[i]; // 가장 가까운 층으로 갱신
				nextIndex = i; // 해당 층의 인덱스를 저장
			}
			// down 방향이고 현재 층보다 아래면서 가장 가까운 층이라면
			else if (direction == "down" && floor[i] < current && nextFloor < floor[i]) {
				nextFloor = floor[i]; // 가장 가까운 층으로 갱신
				nextIndex = i; // 해당 층의 인덱스를 저장
			}
		}

		// 가장 가까운 층이 존재한다면
		if (nextIndex != -1) {
			int distance = abs(floor[nextIndex] - current); // 이동 거리 계산하여 저장
			cout << floor[nextIndex] << "층으로 갑니다."; // 그 해당 층으로 이동
			movingDistance += distance; // 이동 거리 누적
			current = floor[nextIndex]; // 현재 층 갱신
			visited[nextIndex] = 1; // 현재 층을 방문했다고 체크
			count++;  // 방문 층 갯수 증가
			cout << "누적 이동 거리는 " << getMovingDistance() << endl; // 누적 이동 거리 출력
		}
		// 방문할 층이 없으면 방향 전환
		else {
			direction = (direction == "up") ? "down" : "up"; // up이면 down, down이면 up
			cout << "새로운 이동 방향: " << direction << endl; // 새로운 이동 방향 출력
		}
	}
	showCurrent(); // 현재 위치 출력
	cout << "총 이동 거리는 " << getMovingDistance() << endl; // 총 이동거리 출력
}