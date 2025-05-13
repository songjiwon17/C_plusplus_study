#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int Fibo1(int n) {
	//if (n == 0) return 0;
	//else if (n == 1) return 1;
	if (n <= 1) return n;
	return Fibo1(n - 1) + Fibo1(n - 2);
}

int main(void)
{
	int n,i, sum;
	while (1) {
		printf("nÀÔ·Â: ");
		scanf_s("%d", &n);
		i = 0;
		sum = 0;
		while (1) {
			if (Fibo1(i) <= n) {
				printf("%d ", Fibo1(i));
				sum += Fibo1(i);
			}
			else {
				printf("\nsum=%d\n", sum);
				break;
			}
			i++;
		}
		if (n == 0) return 0;
	}
}