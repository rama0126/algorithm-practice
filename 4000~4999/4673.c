#include<stdio.h>
int main(void) {
	int arr[100000];
	for (int i = 0; i < 100000; i++) {
		arr[i] = i + 1;
	}
	for (int i = 1; i <= 10000; i++) {
		arr[d(i)-1] = -1;
	}
	for (int i = 0; i < 10000; i++) {
		if (arr[i] == -1);
		else {
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}
int d(int n) {
	int k = n+n/1000 + (n%1000)/100 + (n%100)/10 + n%10;
	return k;
}