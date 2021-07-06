#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
long long v[101] = {0,1,1,1,2,2};
int main() {
	int n,T;
	cin >> T;
	
	for (int i = 6; i <= 100; i++) {
		v[i]=(v[i - 1] + v[i - 5]);
	}
	for (int t = 0; t < T; t++) {
		scanf("%d", &n);
		cout << v[n] << "\n";
	}

}