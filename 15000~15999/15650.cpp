#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void backtracking(int N, int M, int k,int depth, vector<int>& v) {
	if (depth == M) {
		for (int i = 0; i != M; i++) {
			printf("%d ", v[i]);
		}
		printf("\n"); return;
	}
	for (int i = k+1; i <= N; i++) {
		vector<int> vs = v;
		vs.insert(vs.begin() + depth, i);
		backtracking(N, M,i, depth + 1, vs);
		
	}
}
int main() {
	int N, M;
	cin >> N >> M;
	vector<int> V;
	backtracking(N, M,0,0, V);

}