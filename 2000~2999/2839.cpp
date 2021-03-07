#include<iostream>
using namespace std;
void sangguen(int N);
int main() {
	int N;
	cin >> N;
	sangguen(N);
}
void sangguen(int N) {
	int di = N % 10;
	switch (di) {
	case 0:case 5:cout << N / 5; break;
	case 1:case 8:cout << N / 5 + 1; break;
	case 3:case 6:cout << N / 5 + 1; break;
	case 2:case 4:case 7:	if (N > 10) cout << N / 5 + 2;
		  else cout << -1; break;
	case 9:cout << N / 5 + 2; break;
	default:cout << -1;
	}
}