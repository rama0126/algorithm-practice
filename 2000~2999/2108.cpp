#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N,count=0,secmin;
	double avg = 0;
	bool m=false;
	vector<int> v;
	int cnt[8001] = { 0, };
	scanf("%d", &N);
	for (int i = 0; i != N; i++) {
		int s;
		scanf("%d", &s);
		v.push_back(s);
		avg += s;
		cnt[s + 4000]++;
	}
	sort(v.begin(), v.begin()+N);
	printf("%.0lf\n", avg / N);
	printf("%d\n",v[(N/2)]);
	for (int i = 0; i != 8001; i++) {
		if (count <= cnt[i]) {
			count = cnt[i];
		}
	}
	if (N != 1) {
		for (int i = 0; i != 8002; i++) {
			if (count == cnt[i] && !m) {
				m = true;
				secmin = i-4000;
			}
			else if (count == cnt[i] && m) {
				secmin = i - 4000; break;
			}
			else if (!m&&i == 8001) {
				secmin = *(v.begin() + 1); break;
			}
			else if (m && i == 8001) { break;
			}
		}
		printf("%d\n", secmin);
		printf("%d", *(v.end() - 1) - *(v.begin()));
	}
	else {
		printf("%d\n", *(v.begin()));
		printf("%d", 0); }
}