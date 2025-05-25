#ifndef ScheduleSMDF_H // 헤더 파일 중복을 방지하는 조건 컴파일 문
#define ScheduleSMDF_H // 헤더 파일 중복을 방지하는 조건 컴파일 문
#include "Schedule.h" // 추상 클래스 Schedule 헤더파일 포함

// Schedule 클래스를 상속받은 ScheduleSMDF 클래스
class ScheduleSMDF : public Schedule {
public:
	ScheduleSMDF(string name, int floor[], int current); // 생성자
	virtual void run(); // ScheduleSMDF을 동작하는 함수
};

#endif // 헤더 파일 중복을 방지하는 조건 컴파일 문