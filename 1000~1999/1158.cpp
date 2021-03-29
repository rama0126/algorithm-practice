#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	vector<int> que,ve;
	for (int i = 1; i <= N; i++) {
		que.push_back(i);
	}
	int inde=0;
	while (N) {
		inde--;
		inde = ((inde + K) % N);
		int val = que[inde];
		ve.push_back(val);
		que.erase(que.begin() + inde);
		N--;
	}
	cout << "<";
	for (auto vi = ve.begin(); vi != ve.end()-1; vi++) {
		cout << *vi << ", ";
	}
	cout << *(ve.end() - 1) << ">";
}