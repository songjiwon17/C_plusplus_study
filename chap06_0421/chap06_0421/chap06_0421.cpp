#include <iostream>
using namespace std; 


//int add(int x[], int size) {
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += x[i]; 
//	}
//	return sum;
//}
//
//int add(int x[], int size, int y[]) {
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += x[i];
//	}
//	for (int i = 0; i < size; i++) {
//		sum += y[i];
//	}
//	return sum;
//}

int add(int x[], int size, int* y = NULL) { //포인터 변수 x로 받아도 되고 int x[]로 받아도 됨, 포인터 y가 NULL이 넘어갈수도있다. 
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += x[i];
	}

	if (y == NULL) return sum;

	for (int i = 0; i < size; i++) {
		sum += y[i];
	}
	return sum;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); //add(a,5,NULL); 과 같음
	cout << c << endl;

	c = add(a, 5, b);
	cout << c << endl;
}