#include <iostream>  // C++ 표준 입출력 클래스와 객체를 다루기 위한 헤더 파일 포함
using namespace std; // std namespace에 선언된 모든 이름에 std:: 생략 

#include "ScheduleFCFS.h" // FCFS 기능(ScheduleFCFS 클래스) 포함
#include "ScheduleSMDF.h" // SMDF 기능(ScheduleSMDF 클래스) 포함
#include "ScheduleSCAN.h" // SCAN 기능(ScheduleSCAN 클래스) 포함

int main() {
	int current = 10; // 엘리베이터의 현재 위치. 10으로 초기화
	int floor[5] = { 0 }; //목적하는 층 번호 5개 저장. 0으로 초기화
	cout << "엘리베이터는 " << Schedule::MAX_FLOOR << "층까지만 갑니다." << endl; // 엘리베이터의 최대 층 수 출력
	cout << "현재 층은 " << current << "층입니다." << endl; // 현재 층 수 출력

	cout << "가고자하는 순서대로 5개 층을 입력하세요("; // 사용자로부터 5개의 층 입력받음
	cout << "0이하, 31이상, 현재 층, 이전과 동일한 층 입력 금지)>>"; // 조건에 맞는 층 수 입력하도록 함

	for (int i = 0; i < 5; i++) { // 5개의 층 입력받음
		cin >> floor[i]; // 한 층씩 입력하고 floor[i]에 저장
	}

	// FCFS(First Come First Served). 입력한 순서대로 엘리베이터 이동
	ScheduleFCFS fcfs("FCFS", floor, current); // FCFS 객체 생성
	fcfs.run(); // FCFS 방식으로 동작
	
	// SMDF(Shortest Moving Distance First). 현재 위치에서 가장 가까운 층으로 이동
	ScheduleSMDF smdf("SMDF", floor, current);  // SMDF 객체 생성
	smdf.run(); // SMDF 방식으로 동작

	// SCAN. 이동 방향에서 가장 가까운 층으로 이동. 끝까지 가면 방향 전환
	//ScheduleSCAN scan("SCAN", floor, current, "up"); // up 방향으로 SCAN 객체 생성
	//scan.run();  // SCAN 방식으로 동작
	ScheduleSCAN scan("SCAN", floor, current, "down"); // down 방향으로 SCAN 객체 생성
	scan.run();  // SCAN 방식으로 동작
}