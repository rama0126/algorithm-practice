#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
vector<int> node[1001];
bool visit[1001];
void DFS(int com) {
	visit[com] = true;
	for (auto it = node[com].begin(); it != node[com].end(); it++) {
		if (visit[*it] == false) {
			DFS(*it);
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		node[u].push_back(v);
		node[v].push_back(u);
	}
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (visit[i] == false) {
			cnt++;
			DFS(i);
		}
	}
	cout << cnt;
}