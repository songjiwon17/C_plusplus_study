#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int evensum1(int n) {
	int i, sum = 0;
	for (int i = 0; i <= n; i += 2) {
		sum += i;
	}
	return sum;
}

int evensum2(int n) {
	int i = 0, sum = 0;
	while (i <= n) {
		sum += i;
		i += 2;
	}
	return sum;
}

int evensum3(int n) {
	if (n == 0) return 0;
	//else if (n % 2 == 0) return n + evensum3(n - 2);
	//else return evensum3(n - 1);

	if (n % 2 == 1) { //È¦¼ö¸é Â¦¼ö·Î ¸¸µé¾îÁÜ
		n--;
	}
	return n + evensum3(n - 2);
}

int evensum4(int n) { //Àç±Í 2+(2+4)+(2+4+6) ... 
	int i;
	if (n == 0) return 0;
	//if (n % 2 == 1) return evensum1(n) + evensum4(n - 2);
}

void main() {
	int n;
	int sum = 0;
	printf("(1) for ÀÌ¿ë evensum1(0)=%d evensum1(101) = %d\n", evensum1(0), evensum1(101));
	printf("(2) while ÀÌ¿ë evensum2(0)=%d evensum2(101) = %d\n", evensum2(0), evensum2(101));
	printf("(3) Àç±Í ÇÔ¼ö evensum3(0)=%d evensum3(101) = %d\n", evensum3(0), evensum3(101));
	printf("(4) Àç±Í ÇÔ¼ö evensum4(0)=%d evensum4(101) = %d\n", evensum4(0), evensum4(101));
}