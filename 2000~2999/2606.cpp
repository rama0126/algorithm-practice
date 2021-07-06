#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> computer[101];
bool visit[101];

int DFS(int node) {
	int cnt = 0;
	visit[node] = true;
	for (auto it = computer[node].begin(); it != computer[node].end(); it++) {
		if (visit[*it] == false) {
			cnt++;
			cnt += DFS(*it);
		}
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N,M;
	cin >> N;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		computer[u].push_back(v);
		computer[v].push_back(u);
	}
	cout << DFS(1);
	
}