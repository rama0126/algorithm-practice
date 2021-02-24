#include<stdio.h>
int main(void) {
	int N;
	int h =0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		h += sequence(i);
	}
	printf("%d\n", h);
	return 0;
}
int sequence(int n) {
	int a4 = n / 1000;
	int a3 = (n%1000)/100;
	int a2 = (n%100)/10;
	int a1 = n%10;
	int rtrn = -10000;
	if (a4 == 0) {
		if (a3 == 0)
			rtrn = 1;
		else if (a3 - a2 == a2 - a1)
			rtrn= 1;
		else rtrn= 0;
	}
	else {
		if (((a3 - a2) == (a2 - a1)) && ((a4 - a3) == (a3 - a2)))
			rtrn = 1;
		else rtrn = 0;
	}
	return rtrn;
}