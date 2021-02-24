#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	double avg=0;
	int M = 0;
	int* score = new int[N];
	for (int i = 0; i!=N; i++) {
		scanf("%d", &score[i]);
		if (score[i] > M)
			M = score[i];
	}
	for (int i = 0; i!=N; i++) {
		avg += 1.0*score[i]/M*100;
	}
	printf("%.2f", avg/N);
}