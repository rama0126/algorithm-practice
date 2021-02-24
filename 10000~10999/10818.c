#include<stdio.h>
int main(void){
	int arrayN[1000000];
	int N;
	int max = -1000000, min = 10000000;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d",&arrayN[i]);
	}
	for (int i = 0; i < N; i++) {
		if (arrayN[i] > max)
			max = arrayN[i];
		if (arrayN[i] < min)
			min = arrayN[i];
	}
	printf("%d %d", min, max);
	return 0;
}