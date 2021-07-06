#include<iostream>
#include<algorithm>
#include<queue>
#define MAX 100000
using namespace std;
bool visit[MAX+1];
int BFS(int n, int k) {
	int sec = 0;
	queue<int> Q;
	Q.push(n);
	while (1) {
		int depth = Q.size();
		for (int i = 0; i < depth;i++) {
			n = Q.front(); Q.pop();
			if (n == k) return sec;
			if (n - 1 >= 0 && !visit[n - 1]) {
				visit[n - 1] = true;
				Q.push(n - 1);
			}
			if (n + 1 <= MAX && !visit[n + 1]) {
				visit[n + 1] = true;
				Q.push(n + 1);
			}
			if (2 * n <= MAX && !visit[2 * n]) {
				visit[2 * n] = true;
				Q.push(2 * n);
			}

		}
		sec++;
	}
}
int main() {
	int K, N;
	cin >> N >> K;
	cout << BFS(N, K);
}