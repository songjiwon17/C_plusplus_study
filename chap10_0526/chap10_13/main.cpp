#include <iostream>
#include <string>
#include <map>
using namespace std;

class ScoreManager {
	string name;
	map<string, int> m;
	void insert();
	void search();
public:
	ScoreManager(string name);
	void run();
};

ScoreManager::ScoreManager(string name) {
	this->name = name;
}

void ScoreManager::insert() {
	string name;
	int score;
	cout << "이름과 점수>>";
	cin >> name;
	cin >> score;

	if (m.find(name) == m.end()) {
		//둘 다 가능
		m.insert(make_pair(name, score));
		//m[name] = score;
	}
}

void ScoreManager::search(){
	string name;
	cout << "이름 검색>>";
	cin >> name;

	if (m.find(name) == m.end()) {
		cout << name << "이 없습니다." << endl;
		return;
	}
	int score = m[name];
	cout << name << "의 점수는 " << score << endl;
}

void ScoreManager::run() {
	cout << "**** 점수 관리 프로그램 " << name << " ****" << endl;

	while (true) {
		cout << "입력:1, 조회:2, 종료:3 >>" << endl;
		int menu;
		cin >> menu;

		switch (menu) {
		case 1: insert(); break;
		case 2: search(); break;
		case 3: cout << "프로그램을 종료합니다." << endl;  return;
		}
	}
}

int main() {
	ScoreManager sMan("High Score");
	sMan.run();
}