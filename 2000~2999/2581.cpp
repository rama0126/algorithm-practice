#include<iostream>
using namespace std;
int main() {
	int M, N;
	cin >> M;
	cin >> N;
	int sum = 0, cnt = 0, minpri = 10000;
	for (int i = M; i <= N; i++) {
		bool pri = true;
		for (int j = 2; j < i; j++) {
			if (!(i % j)) {
				pri = false; break;
			}
		}
		if (pri && i != 1) {
			sum += i; cnt++;
			if (minpri >= i)minpri = i;
		}
	}
	if (cnt!=0)
		cout << sum << "\n" << minpri;
	else
		cout << -1;
}