#ifndef SCHEDULESCAN_H // 헤더 파일 중복을 방지하는 조건 컴파일 문
#define SCHEDULESCAN_H // 헤더 파일 중복을 방지하는 조건 컴파일 문
#include "Schedule.h"  // 추상 클래스 Schedule 헤더파일 포함

// Schedule 클래스를 상속받은 ScheduleSCAN 클래스
class ScheduleSCAN : public Schedule {
protected:
	string direction; // 엘리베이터의 현재 방향
public:
	ScheduleSCAN(string name, int floor[], int current = 0, string direction = "up"); // 생성자
	virtual void run(); // ScheduleSCAN을 동작하는 함수
};

#endif // 헤더 파일 중복을 방지하는 조건 컴파일 문