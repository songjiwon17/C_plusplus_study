#include <iostream>
#include <string>
using namespace std;

//class Point
class Point {
	int x, y;
public:
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

//ColorPoint
class ColorPoint : public Point {
	string color;
public:
	ColorPoint();
	ColorPoint(int x, int y);
	void setPoint(int x, int y);
	void setColor(string color);
	void show();
};

ColorPoint::ColorPoint() : Point(0,0){ //매개변수 없이 ColorPoint 만들기
	color = "BLACK";
}
ColorPoint::ColorPoint(int x, int y) :Point(x, y){
	color = "BLACK";
}
void ColorPoint::show() {
	cout << color << "색으로" << '(' << getX() << ',' << getY() << ')' << "에 위치한 점입니다." << endl;
}
void ColorPoint::setPoint(int x, int y) {
	move(x, y);
}
void ColorPoint::setColor(string color) {
	this->color = color;
}

int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setPoint(10,20);
	cp.setColor("BLUE");
	cp.show();
}