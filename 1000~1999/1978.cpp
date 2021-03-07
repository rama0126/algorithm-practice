#include<iostream>
using namespace std;
int main() {
	int N, cnt=0;
	cin >> N;
	for (int i = 0; i != N; i++) {
		int k; bool pri = true;
		cin >> k;
		for (int j = 2; j < k; j++) {
			if (!(k % j)) { pri = false; break; }
		}
		if (pri&&k!=1)cnt++;
	}
	printf("%d", cnt);
}