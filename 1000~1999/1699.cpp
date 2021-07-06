#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int v[100001];
int main() {
	int n;
	cin >> n;

	for (int i = 0; i <= n; i++)
		v[i] = i;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j * j <= i; j++) {
			v[i] = min(v[i], v[i - j * j] + 1);
		}
	}
	printf("%d", v[n]);

}