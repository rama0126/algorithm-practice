#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t, n,max=3;
	vector<int> v = { 0,1,2,4 };
	cin >> t;
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		if (max < n) {
			for (int j = max+1; j <= n; j++) {
				v.push_back(v[j-3] + v[j - 1] + v[j - 2]);
			}
			max = n;
			printf("%d\n", v[n]);
		}
		else if (max >= n) {
			printf("%d\n", v[n]);
		}
	}
}