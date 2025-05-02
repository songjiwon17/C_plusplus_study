#ifndef BOOK_H          //BOOK_H가 정의되지 않았다면
#define BOOK_H          //BOOK_H를 정의하여 중복 정의 오류를 방지

#include <iostream>     //표준 입출력을 사용하기 위해 헤더파일 포함(예: cout, cin)
using namespace std;    //std::cout을 cout으로 std를 생략 가능하도록 사용하기 위함

#include <string>      //string 타입을 사용하기 위해 헤더파일 포함

//Book 클래스 선언부

class Book {
	string title;      //책 제목을 가지는 멤버 변수
	int price;         //책 가격을 가지는 멤버 변수
public:
	Book();                             //기본 생성자
	void set(string title, int price);  //책 정보를 설정할 수 있는 멤버 함수
	string getTitle();                  //책 제목을 반환하는 멤버 함수
	int getPrice();                     //책 가격을 반환하는 멤버 함수
};

#endif                                  //BOOK_H 조건 종료
