#include <iostream>
using namespace std;
int Eratos(int n);
int main() {
	int n;
	scanf("%d",&n);
	while (n) {
		printf("%d\n", Eratos(n));
		scanf("%d", &n);
	}
}
int Eratos(int n) {
	if (n == 1)return 1;
	int cnt = 0;
	int Dn = 2 * n;
	bool* prime = new bool[Dn + 1];
	for (int i = 2; i <= Dn; i++)
		prime[i] = true;
	for (int i = 2; i * i <= Dn; i++) {
		if (prime[i])
			for (int j = i * i; j <= Dn; j += i)
				prime[j] = false;
	}
	for (int i = n+1; i <= Dn; i++)
		if (prime[i])
			cnt++;
	return cnt;
}