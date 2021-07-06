#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int n, m;
	vector<string> vn,vm,xx;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string ss;
		cin >> ss;
		vn.push_back(ss);
	}
	for (int i = 0; i < m; i++) {
		string ss;
		cin >> ss;
		vn.push_back(ss);
	}
	sort(vn.begin(), vn.end());
	for (auto it = vn.begin()+1; it != vn.end(); it++) {
		if (*it == *(it - 1)) {
			xx.push_back(*it);
		}
	}
	printf("%d\n",xx.size());
	for (auto it = xx.begin(); it != xx.end(); it++) {
		cout << *it << "\n";
	}
}