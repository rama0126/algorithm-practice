#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main() {
	ll n;
	vector<ll> v = { 0,1,2};
	cin >> n;
	for (int i = 3; i <= n; i++) {
		v.push_back((v[i - 1] + v[i - 2])%10007);
	}
	cout << v[n] ;

	return 0;
}