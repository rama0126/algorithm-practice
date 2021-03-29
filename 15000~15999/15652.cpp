#include<iostream>
#include<vector>
using namespace std;
void backtracking(int depth, int N, int M,int k,vector<int>& v) {
	if (depth == M) {
		for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
			printf("%d ", *iter);
		}
		printf("\n"); return;
	}
	for (int i = k; i <= N; i++) {
		vector<int> vs = v;
		vs.insert(vs.begin() + depth, i);
		backtracking(depth + 1, N, M,i, vs);
	}
}
int main() {
	int N, M;
	cin >> N >> M;
	vector<int> V;
	backtracking(0, N, M,1, V);
}