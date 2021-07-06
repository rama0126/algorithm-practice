#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
vector<pair<int, int>> pv;
vector<int> arr(1000001, 0);
int N;
int main() {
	scanf("%d",&N);
	for (int i = 0; i != N; i++) {
		int a;
		scanf("%d", &a);
		pv.push_back({ a,i });
	}
	sort(pv.begin(), pv.end());
	int comp = pv[0].first;
	arr[0] = 0;
	int cnt = 0;
	for (int i = 1; i != N; i++) {
		if (comp == pv[i].first) {
			arr[pv[i].second] = cnt;
		}
		else {
			comp = pv[i].first;
			arr[pv[i].second] = ++cnt;
		}
	}
	for (int it = 0; it!=N; it++)
		printf("%d ", arr[it]);
}