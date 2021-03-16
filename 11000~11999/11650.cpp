#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}
int main() {
	int N;
	pair<int, int> XY[100001];
	scanf("%d", &N);
	for (int i = 0; i != N; i++) {
		scanf("%d%d", &XY[i].first, &XY[i].second);
	}
	sort(XY, XY + N, compare);
	for (int i = 0; i != N; i++) {
		printf("%d %d\n", XY[i].first, XY[i].second);
	}
}