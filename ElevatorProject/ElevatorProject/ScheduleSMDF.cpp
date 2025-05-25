#include <iostream>  // C++ 표준 입출력 클래스와 객체를 다루기 위한 헤더 파일 포함
using namespace std; // std namespace에 선언된 모든 이름에 std:: 생략

#include "ScheduleSMDF.h" // SMDF 기능(ScheduleSMDF 클래스) 헤더파일 포함

// ScheduleSMDF 생성자, Schedule을 상속받고 
// 스케줄 알고리즘 이름, 5개의 층들, 현재 층을 보관할 공간 크기 설정
ScheduleSMDF::ScheduleSMDF(string name, int floor[], int current) : Schedule(name, floor, current) {}

// 가장 가까운 층부터 엘리베이터를 이동하는 ScheduleSMDF 동작 함수
void ScheduleSMDF::run() {
	showMessage(); // 운행 시작 메시지 출력
	showCurrent(); // 현재 엘리베이터 위치 출력
	showFloor(); // 현재 입력된 층들 출력

	int visited[5] = { 0 }; // 방문 여부 체크 배열
	int count = 0; // 현재까지 방문한 층 개수

	while (count < 5) { // 입력된 층들을 다 방문할 때까지
		int minIndex = -1; // 가장 가까운 층의 인덱스
		int minDistance = Schedule::MAX_FLOOR + 1; // MAX_FLOOR보다 큰 값으로 최소 거리 초기화

		for (int i = 0; i < 5; i++) { // 입력된 층들을
			if (visited[i] == 0) { // 아직 방문하지 않은 층이 있다면
				int distance = abs(floor[i] - current); // 이동 거리 계산하여 저장

				if (distance < minDistance) { // 더 가까운 층을 찾았다면
					minDistance = distance; // 최소 거리 갱신
					minIndex = i; // 최소 거리의 층 인덱스 저장
				}
			}
		}

		if (minIndex != -1) { // 가장 가까운 층이 존재한다면
			cout << floor[minIndex] << "층으로 갑니다."; // 그 해당 층으로 이동
			movingDistance += abs(floor[minIndex] - current); // 이동 거리 누적
			current = floor[minIndex]; // 현재 층 갱신
			visited[minIndex] = 1; // 현재 층을 방문했다고 체크
			count++; // 방문 층 갯수 증가
			cout << "누적 이동 거리는 " << getMovingDistance() << endl; // 누적 이동 거리 출력
		}
	}
	showCurrent(); //현재 위치 출력
	cout << "총 이동 거리는 " << getMovingDistance() << endl; // 총 이동거리 출력
}