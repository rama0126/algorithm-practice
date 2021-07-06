#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(pair<int,int> &a, pair<int,int> &b) {
	if (a.second == b.second) {
		return a.first<b.first;
	}
	return a.second < b.second;
}
int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> V;
	int a, b,count=1;
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		V.push_back(make_pair(a,b));
	}

	sort(V.begin(), V.end(), compare);
	for (int i = 0; i < N;) {
		int f = V[i].second;
		int j;
		for ( j= i + 1; j < N; j++) {
			if (V[j].first >= f) {
				count++;
				i = j;
				break;
			}
		}
		if (j == N) break;
	}
	printf("%d", count);
}