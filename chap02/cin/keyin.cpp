#include <iostream>
using namespace std;

int main() {
	cout << "너비와 높이  입력>>";

	int width;
	int height;

	//scanf("%d", &width); 앞으로 scanf는 쓰지 말것
	cin >> width >> height; //키보드로부터 정수 두개 입력

	//cout << "높이를 입력>>";

	//int height;
	//cin >> height; //키보드로부터 정수 하나 입력

	int area = width * height;
	cout << "면적은" << area << endl;
}