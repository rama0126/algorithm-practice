#include<stdio.h>
int main(void) {
	int N;
	int A=-1;
	int cN = 0;
	scanf("%d", &N);
	if (N < 10) {
		A = N * 10 + N;
	}
	else {
		int c = (N / 10) + (N % 10);
		A = (N % 10) * 10 + (c % 10);
	}
	cN += 1;
	while (N != A) {
		if (A< 10) {
			A = A * 10 + A;
		}
		else {
			int c = (A / 10) + (A % 10);
			A = (A % 10) * 10 + (c % 10);
		}
		cN += 1;
	}
	printf("%d", cN);
	return 0;
	}