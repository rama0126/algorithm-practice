#include<stdio.h>

int main(void) {
	double *AVG =NULL;
	int C;
	scanf("%d", &C);
	AVG  = (double*)malloc(sizeof(double)*C);
	for (int i = 0; i < C; i++) {
		int score[1001] = {0,};
		int countAvg = 0;
		for (int j = 0; j < 1001; j++) {
			scanf("%d", &score[j]);
			if(j >= score[0])
				break;
		}
		double Sum = 0;
		for (int j = 1; j <= score[0]; j++) {
			Sum += score[j]*1.0;
		}
		for (int j = 1; j <= score[0]; j++)
			if (score[j]*1.0 > Sum/score[0])
				countAvg++;
		AVG[i] = (countAvg*100.0)/ score[0];
	}
	for (int i = 0; i < C; i++) {
		printf("%.3f%%\n",AVG[i]);
	}
	free(AVG);
	return 0;
}