#include <iostream>
#include <vector>
using namespace std; 
typedef struct primeplus {
	int A, B;
};
primeplus Eratos(int n);
int main() {
	int T,cnt=0;
	cin >> T;
	while (cnt != T) {
		cnt++;
		int n;
		cin >> n;
		primeplus result = Eratos(n);
		cout << result.A << " " << result.B << "\n";
	}

}
primeplus Eratos(int n) {
	vector<bool> prime(n + 1);
	prime.assign(n + 1, true);
	primeplus p;
	for (int i = 2; i*i <= n; i++) {
		if (prime[i])
			for (int j = i*i; j <= n; j+=i)
				prime[j] = false;
	}
	for (int i = n/2;i!=1; i--) {
		if(prime[i])
			for (int j = n/2; j != n; j++) {
				if (n == i + j && prime[j]) {
					p.A = i, p.B = j;
					return p;
				}
			}
	}
}