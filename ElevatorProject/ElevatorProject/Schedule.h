#ifndef SCHEDULE_H  // 헤더 파일 중복을 방지하는 조건 컴파일 문
#define SCHEDULE_H // 헤더 파일 중복을 방지하는 조건 컴파일 문
#include <string>  // 문자열을 다루기 위한 string 헤더 파일 포함
using namespace std;  // std namespace 에 선언된 모든 이름에 std:: 생략

// 엘리베이터 Schedule 추상 클래스
class Schedule { 
protected:
	string name; // 스케줄 알고리즘 이름
	int floor[5]; // 목적하는 층 번호 5개 저장
	int current; // 엘리베이터가 있는 현재 층 번호
	int movingDistance = 0; // 엘리베이터의 총 이동거리. 0으로 초기화
public:
	Schedule(string name, int floor[], int current = 0); // 생성자
	int getMovingDistance(); // 총 이동 거리 movingDistance 리턴
	virtual void run() = 0; // 스케줄 작동 함수, 순수 가상 함수
	void showMessage(); // 어떤 스케줄 알고리즘인지 출력하는 함수 
	void showFloor(); // 사용자들이 누른 층들을 출력하는 함수
	void showCurrent(); // 현재 엘리베이터 위치를 출력하는 함수
	static const int MAX_FLOOR = 30; // 엘리베이터는 최대 30층까지 이동가능
};
#endif // 헤더 파일 중복을 방지하는 조건 컴파일 문