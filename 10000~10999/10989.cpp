#include<iostream>
using namespace std;
int main() {
	unsigned int N,i,j;
	scanf("%u",&N);
	unsigned int cnt[10001] = { 0, };
	for (i = 0; i != N; i++) {
		scanf("%u",&j);
		cnt[j]++;
	}
	for (i = 0; i != 10001; i++) {
		while (cnt[i]) {
			printf("%u\n", i);
			cnt[i]--;
		}
	}
}