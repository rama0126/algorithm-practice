#include <iostream>
using namespace std;
void Eratos(int m, int n);
int main() {
	int M, N,i;
	scanf("%d%d", &M, &N);
	Eratos(M, N);
}
void Eratos(int m,int n) {
	if (n == 1)return;
	bool* prime = new bool[n + 1];
	for (int i = 2; i <= n; i++) {
		prime[i] = true;
	}
	for (int i = 2; i * i <= n; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= n; j += i)
				prime[j] = false;
		}
	}
	for (int i = m; i <= n; i++)
		if(prime[i])
			printf("%d\n", i);
	delete[] prime;
}