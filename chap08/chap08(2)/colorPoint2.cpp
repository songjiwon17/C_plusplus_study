#include <iostream>
using namespace std;

//잘 짜여진 코드 
// 
//class Point
class Point {
protected:
	int x, y; //점의 좌표
public:
	Point(int x, int y) {
		this->x = x; this->y = y; 
		cout << "Point 생성자" << x << ' ' << y << endl;
	}
	void showPoint() { cout << '(' << x << ',' << y << ')' << endl; }
};

//class ColorPoint
class ColorPoint : public Point { //Point 클래스 상속: 파생클래스
	string color;
public:
	ColorPoint(string color, int x, int y) : Point(x, y) {
		this->color = color;
		cout << "ColotPoint 생성자" << endl;
	}
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	//showPoint();
	cout << color << ' ' << x << ' ' << y << endl;
}

int main() {
	ColorPoint cp("red",5, 6);
	cp.showColorPoint();
}