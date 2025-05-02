#include "Book.h"    //Book 헤더파일 포함

//Book 클래스 구현부

//기본 생성자
Book::Book() {
	title = "";     //책의 제목을 빈 문자열로 초기화
	price = 0;     //책의 가격을 0으로 초기화
}

//책 정보를 설정할 수 있는 멤버 함수
void Book::set(string title, int price) {
	this->title = title; //매개변수로 받은 책의 제목을 멤버 변수 title에 저장
	this->price = price; //매개변수로 받은 책의 가격을 멤버 변수 price에 저장
}

//책 제목을 반환하는 멤버 함수
string Book::getTitle() {
	return title;        //책의 제목 반환
}

//책 가격을 반환하는 멤버 함수
int Book::getPrice() {
	return price;        //책의 가격 반환
}