#ifndef EXP_H
#define EXP_H 

//Ŭ���� ����� - �����Ϸ����� ����
class Exp {
	//private => ���� ����, �ٱ����� ���Ұ�
	int base; //���̽� ����
	int exp; //���� ����
public: // �����ڸ� public Ÿ������ ����
	int getValue();
	int getBase() { return base; }//�ζ��� �Լ� => Ŭ���� �ȿ� ������ ���Ϲ� �ۼ�
	int getExp() { return exp; }
	bool equals(Exp b);
	Exp();
	Exp(int b);
	Exp(int b, int e);
};

#endif
