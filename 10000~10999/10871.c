#include<stdio.h>

int main(void) {
	int N;
	int A;
	int listA[10000];
	scanf("%d %d", &N, &A);
	for (int i = 0; i < N; i++) {
		scanf("%d",&listA[i]);
	}
	for (int i = 0; i < N; i++) {
		if (listA[i] < A) {
			printf("%d ",listA[i]);
		}
	}
}