#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class WordSearch {
	vector<string> v; //
	void echo();
	bool read(); //
	char* fileName = NULL;
public:
	WordSearch(const char* fileName);
	~WordSearch();
	void run();
};

WordSearch::WordSearch(const char* fileName) {
	this->fileName = new char[strlen(fileName)+1];
	strcpy(this->fileName, fileName); //원본으로 넘어오는 이름을 잡아서 복사해야 함

	//파일을 읽어서 벡터에 저장
	read();
	//echo();
}

WordSearch::~WordSearch() {
	if (fileName != NULL) delete[] fileName;
}

bool WordSearch::read(){
	ifstream fin;
	fin.open(fileName);

	if (!fin) {
		cout << fileName << "열기 실패" << endl;
		return false;
	}

	string line;
	while (getline(fin, line)) { //cin istream, ifstream은 istream 상속 받음
		v.push_back(line);
	}

	cout << "파일 읽기 성공 " << v.size() << "개 단어 읽음" << endl;
	fin.close();
}

void WordSearch::echo() {
	for (int i = 0; i < v.size(); i++) {
		string word = v[i];
		cout << (i + 1) << ": " << word << endl;
	}
}

void WordSearch::run() {
	cout << "검색을 시작힙니다." << "단어를 입력해 주세요." << endl;
	while (true) {
		cout << "단어>>";
		string word;
		cin >> word;

		if (word == "exit") break;

		bool found = false;

		for (int i = 0; i < v.size(); i++) {
			string vWord = v[i];
			int index = vWord.find(word);

			if (index == -1) {
				continue;
			}
			if (index == 0) { //발견
				cout << vWord << endl;
				found = true;
			}
		}
		if (found == false) cout << "단어를 찾을 수 없음" << endl;
	}
}

int main() {
	WordSearch ws("c:\\temp\\words.txt");
	ws.run();
}