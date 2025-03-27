#ifndef EXP_H
#define EXP_H 

//클래스 선언부 - 컴파일러에게 선언
class Exp {
	//private => 생략 가능, 바깥에서 사용불가
	int base; //베이스 정보
	int exp; //지수 정보
public: // 생성자를 public 타입으로 선언
	int getValue();
	int getBase() { return base; }//인라인 함수 => 클래스 안에 간단한 리턴문 작성
	int getExp() { return exp; }
	bool equals(Exp b);
	Exp();
	Exp(int b);
	Exp(int b, int e);
};

#endif
