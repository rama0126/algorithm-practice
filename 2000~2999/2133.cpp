#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	vector<int> v = { 1,0,3,0,11 };
	cin >> n;
	for (int i = 5; i <= n; i++) {
		if (i % 2 == 1) {
			v.push_back(0);
		}
		else {
			int k = v[2]*v[i-2];
			for (int j = 0; j <= (i-4); j += 2) {
				k += v[j] * 2;
			}
			v.push_back(k);
		}
	}
	cout << v[n];

	return 0;
}