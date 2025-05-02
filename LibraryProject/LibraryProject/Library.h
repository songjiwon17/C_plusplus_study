#ifndef LIBRARY_H                       //LIBRARY_H가 정의되지 않았다면
#define LIBRARY_H                       //LIBRARY_H를 정의하여 중복 정의 오류를 방지

#include <iostream>                     //표준 입출력을 사용하기 위해 헤더파일 포함(예: cout, cin)
using namespace std;                    //std::cout을 cout으로 std를 생략 가능하도록 사용하기 위함

#include "Book.h"                       //Book 헤더파일 포함

//Library 클래스 선언부

class Library {
	string name;                       //도서관 이름을 가지는 멤버 변수
	Book* p;                           //동적 할당받을 Book [] 배열에 대한 포인터 p
	int size;                          //동적 할당받은 Book [] 배열의 크기 (입고할 총 책의 수)를 가지는 멤버 변수
	int next = 0;                      //p[] 배열에 다음에 책이 삽입될 위치를 가지는 멤버 변수
public:
	Library(string name, int size);    //생성자, 도서관 이름과 책의 수를 초기화
	~Library();                        //소멸자, 동적 할당 된 Book [] 배열 메모리 반환

	void add(string name, int price);  //책을 한 권 입고하여 정보를 추가하는 멤버 함수
	void show();                       //도서관에 입고된 모든 책을 출력하는 멤버 함수
	Book mostExpensive();              //가장 비싼 책의 Book 객체를 리턴하는 멤버 함수

	void input();                      //사용자에게 입고할 책의 정보를 입력받는 멤버 함수
	void run();                        //도서관 프로그램 실행 멤버 함수
};

#endif                                 //LIBRARY_H 조건 종료