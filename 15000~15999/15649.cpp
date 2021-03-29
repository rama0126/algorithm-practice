#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void backtracking(int N,int M,int depth,vector<int> &v) {
	if (depth == M) {
		for (int i = 0; i != M; i++) {
			printf("%d ", v[i]);
		}
		printf("\n"); return;
	}
	for (int i = 1; i <= N; i++) {
		vector<int> vs = v;
		vector<int>::iterator iter;
		iter = find(vs.begin(), vs.end(), i);
		if (iter == vs.end()) {
			vs.insert(vs.begin()+depth,i);
			backtracking(N,M,depth + 1, vs);
		}
	}
}
int main() {
	int N, M;
	cin >> N >> M;
	vector<int> k;
	backtracking(N,M,0, k);

}
