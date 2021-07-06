#include<iostream>
#include<vector>
#define M 10007
using namespace std;
int main() {
	vector<int> v = { 0,1,3 };
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++) {
		v.push_back((v[i - 1] + 2 * v[i - 2])%M);
	}
	cout << v[n];

}