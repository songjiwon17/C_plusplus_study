#include <iostream>
using namespace std;

class Point {
	int x, y; //점의 좌표
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << '(' << x << ',' << y << ')' << endl; }
};

class ColorPoint : public Point { //Point 클래스 상속: 파생클래스
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	showPoint();
	cout << color << endl;
}

int main() {
	Point p;
	p.set(3, 4); p.showPoint();

	ColorPoint cp;
	cp.set(2, 1);
	cp.setColor("red");
	cp.showColorPoint();

	ColorPoint* a = &cp;
	//Point* b = &cp; //둘의 타입이 달라서 원래는 오류 
	//Point* b = (Point*)&cp; //원래 동작 코드
	Point* b = a; //업캐스팅이 일어나고 있음
	a->set(3, 4);
	a->setColor("blue");
	a->showColorPoint();
	a->showPoint();

	b->set(2, 5); //b는 cp객체가 있음에도 기본 클래스만 상속
	b->showPoint();

	//ColorPoint* q = b; //다운캐스팅 타입이 달라서 오류
	ColorPoint* q = (ColorPoint*)b; //다운캐스팅에 문제가 없는 경우, b 객체에는 ColorPoint객체가 있다.
	q->showColorPoint();

	q = (ColorPoint*)&p; //다운캐스팅에 문제가 있는 경우, p 객체에는 ColorPoint 객체가 없다.
	q->showColorPoint(); //오류가 남, q에 showColorPoint없음(디버깅하면 오류 남)
}