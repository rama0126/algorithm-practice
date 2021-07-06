#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int SJF(int n, vector<int>& p, int sum);
int main() {
	int n,a,sum=0;
	vector<int> p;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		p.push_back(a);
	}
	cout << SJF(n, p, sum);
}
int SJF(int n, vector<int> &p,int sum) {
	sort(p.begin(), p.end());
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			sum += p[j];
		}
	}
	return sum;
}