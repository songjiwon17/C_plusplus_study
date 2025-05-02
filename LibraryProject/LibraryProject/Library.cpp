#include "Library.h"                         //Library 헤더파일 포함

//Library 클래스 구현부

//생성자
Library::Library(string name, int size) {
	this->name = name;                      //도서관의 이름을 이 객체의 멤버 변수 name에 저장
	this->size = size;                      //책의 배열의 크기(입고할 총 책의 수)를 이 객체의 멤버 변수 size에 저장
	p = new Book[size];                     //Book 객체의 배열을 동적 할당
}

//소멸자 
Library::~Library() {
	delete[] p;                             //Book 객체의 배열 메모리를 반환
}

//책 한 권을 입고하여 정보를 추가하는 멤버 함수
void Library::add(string name, int price) {
	if (next > size) {                     //만약에 입고될 총 책의 수(size)가 다음에 책이 삽입될 위치(next)보다 작으면
		cout << "책을 더이상 입고할 수 없습니다. " << endl; //책을 입고 할 수 없음
	}
	else {                                  //입고될 총 책의 수(size)가 다음에 책이 삽입될 위치(next)보다 크면
		p[next].set(name, price);           //현재 해당 위치에 입고하여 책의 정보를 저장
		next++;	                            //next의 값을 1 증가, 다음 위치로 이동하기 위함
	}
}

//사용자에게 입고할 책의 정보를 입력받는 멤버 함수
void Library::input() {
	cout << endl << "책의 제목과 가격을 입력하세요" << endl;  //책의 제목과 가격을 입력받기위해 출력

	for (int i = 0; i < size; i++) {                        //입고할 책의 수만큼 반복
		string title;                                       //입고할 책의 제목을 string 타입으로 title에 저장 
		int price;                                          //입고할 책의 가격을 int 타입으로 price에 저장

		cout << i + 1 << "번 째 책의 제목 >> ";              //몇 번째 책의 제목을 입력하는 중인지 출력
		cin >> title;                                       //사용자로부터 책의 제목을 입력받음

		cout << i + 1 << "번 째 책의 가격 >> ";              //몇 번째 책의 가격을 입력하는 중인지 출력
		cin >> price;                                       //사용자로부터 책의 가격을 입력받음

		cout << endl;                                       //화면에 한 줄 띄우기 위함
		add(title, price);                                  // 책의 정보를 추가
	}
}

//도서관에 입고된 모든 책을 출력하는 멤버 함수
void Library::show() {
	cout << "=======================================================" << endl; 
	cout << name << "에 입고된 책은 다음 " << next << "권 입니다." << endl;       //도서관의 이름과 입고된 책의 권 수 출력

	cout << endl << name << "에 입고된 책 리스트" << endl;                       //입고된 책 리스트 출력
	for (int i = 0; i < next; i++) {                                           //지금까지 실제로 입고된 책의 수만큼 반복
		cout << "[" << p[i].getTitle() << "]" << ' ';                          //책의 제목들을 출력
	}
	cout << endl;                                                              //화면에 한 줄 띄우기 위함
}

//가장 비싼 책의 Book 객체를 리턴하는 멤버 함수
Book Library::mostExpensive() {
	Book maxPriceBook = p[0];                               //배열에 있는 책들 중 가장 비싼 책을 비교해보기위해 첫 번째 책으로 초기값 설정

	for (int i = 0; i < next; i++) {                        //현재까지 입고된 책의 수만큼 반복
		if (p[i].getPrice() > maxPriceBook.getPrice()) {    //만약 비교하고 있는 값이 maxPriceBook보다 크다면
			maxPriceBook = p[i];                            //그 값을 maxPriceBook로 저장
		}
	}

	if (next == 0) return Book();                           //만약 입고된 책이 아무것도 없다면 빈 Book 객체를 반환, title = "", price = 0로 생성됨

	return maxPriceBook;                                    //가장 비싼 책의 정보를 리턴
}


//도서관 프로그램 실행 함수
void Library::run() {
	cout << "====================도서관 프로그램====================" << endl;  //도서관 프로그램 시작 시 출력
	cout << "도서관의 이름과 입고할 책 수를 지정할 수 있습니다." << endl;         //도서관 프로그램 시작 시 출력
	cout << endl;                                                             //화면에 한 줄 띄우기 위함

	cout << "도서관 이름을 입력하세요: ";                                       //도서관 이름을 입력받기 위해 출력
	cin >> name;                                                              //사용자로부터 도서관 이름을 입력받음

	cout << "입고할 책 권 수를 입력하세요: ";                                   //도서관 입고할 책 수를 입력받기 위해 출력
	cin >> size;                                                             //사용자로부터 책 수을 입력받음

	Library* lib = new Library(name, size);                 //Library 객체에 대한 lib 포인터 생성

	lib->input();                                           //사용자에게 입고할 책의 정보를 입력받는 멤버함수 실행
	lib->show();                                            //사용자에게 입고할 책의 정보들을 출력하는 멤버함수 실행 

	Book maxPriceBook = lib->mostExpensive();               //도서관에 입고된 가장 비싼 책을 maxPriceBook에 저장 //maxPriceBook 책의 정보 출력
	cout << endl << name << "에서 가장 비싼 책은 " << maxPriceBook.getTitle() << "이며 가격은 " << maxPriceBook.getPrice() << "원!" << endl; 
	cout << "=======================================================" << endl;

	delete lib;                                             //동적 할당된 Library 객체 lib의 메모리를 반환
}