#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	int year;
	string title;
	string author;
public:
	Book(int year, string title, string author);
	int getYear() { return year; }
	string getTitle() { return title; }
	string getAuthor() { return author; }
	void show();
};

Book::Book(int year, string title, string author) {
	this->year = year;
	this->title = title;
	this->author = author;
}

void Book::show() {
	cout << year << "년도, " << title << ", " << author << endl;
}

class BookManager {
	vector<Book> v; //컨테이너
	void insert();
	void searchByAuthor();
	void searchByYear();
public:
	BookManager() {};
	void run();
};



void BookManager::insert() {
	int year;
	string title;
	string author;

	while (true) {
		cout << "년도>>";
		cin >> year; cin.ignore(1); //엔터키 제거

		if (year == -1) break;

		cout << "책이름>>";
		getline(cin, title);

		cout << "저자>>";
		getline(cin, author);

		//임시 객체 
		v.push_back(Book(year, title, author));
	}
	cout << "총 입고된 책은 " << v.size() << "권 입니다." << endl;
}

void BookManager::searchByAuthor() {
	string author;
	cout << "저자 이름을 입력>>";
	getline(cin, author);

	for (int i = 0; i < v.size(); i++) {
		Book b = v.at(i);

		if (author == b.getAuthor())
			b.show();
	}
}

void BookManager::searchByYear() {
	int year;
	cout << "년도를 입력>>";
	cin >> year; cin.ignore(1);

	for (int i = 0; i < v.size(); i++) {
		Book b = v.at(i);

		if (year == b.getYear())
			b.show();
	}
}


void BookManager::run() {
	cout << "책 입고 " << endl;
	//입고
	insert();
	//검색
	searchByAuthor();
	searchByYear();
}

int main() {
	BookManager bMan;
	bMan.run();
}