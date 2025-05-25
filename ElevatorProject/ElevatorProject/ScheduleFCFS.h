#ifndef SCHEDULEFCFS_H // 헤더 파일 중복을 방지하는 조건 컴파일 문
#define SCHEDULEFCFS_H // 헤더 파일 중복을 방지하는 조건 컴파일 문
#include "Schedule.h"  // 추상 클래스 Schedule 헤더파일 포함

// Schedule 클래스를 상속받은 ScheduleFCFS 클래스
class ScheduleFCFS : public Schedule {
public:
	ScheduleFCFS(string name, int floor[], int current = 0); // 생성자
	virtual void run(); // ScheduleFCFS을 동작하는 함수
};

#endif // 헤더 파일 중복을 방지하는 조건 컴파일 문