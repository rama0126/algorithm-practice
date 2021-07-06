#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int paper[128][128];
int Bp = 0;
int Wp = 0;
int check(int n, int x, int y) {
	int b=0, w = 0;
	for (int i = 0; i < (1 << n); i++) {
		int a = 0;
		for (int j = 0; j < (1 << n); j++) {
			a += paper[i + y][j + x];
		}
		if (a == 0) {
			w += 1;
		}
		else if (a == (1 << n)) {
			b += 1;
		}
	}
	if (b == (1 << n)) {
		return 1;
	}
	if (w == (1 << n)) {
		return 2;
	}
	else return 0;
}
bool checkPaper(int c1) {
	if (c1 == 1) {
		Bp++; return false;
	}
	else if (c1 == 2) {
		Wp++; return false;
	}
	else {
		return true;
	}
}
void cut(int n, int x, int y) {
	int checks[4];
	int dx[4] = { 0,(1 << (n - 1)),0,(1 << (n - 1)) };
	int dy[4] = { 0,0,(1 << (n - 1)),(1 << (n - 1)) };
	for (int i = 0; i < 4; i++) {
		checks[i] = check(n - 1, x + dx[i], y + dy[i]);
		if (checkPaper(checks[i])) {
			cut(n - 1, x + dx[i], y + dy[i]);
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		for (int j = 0; j < N; j++) {
			cin >> a;
			paper[i][j] = a;
		}
	}
	int n[7] = { 2, 4, 8, 16, 32, 64, 128 };
	for (int i = 0; i < 7; i++) {
		if (N == n[i]) {
			int cs = check(i+1, 0,0);
			if (checkPaper(cs)) {
				cut(i + 1, 0, 0);
			}
			break;
		}
	}
	cout << Wp << "\n";
	cout << Bp << "\n";
}
