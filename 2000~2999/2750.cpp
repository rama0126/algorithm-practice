#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int list[2002];
	fill(list, &list[2002], 4000);
	cin >> N;
	for (int i = 0; i != N; i++) {
		int n;
		cin >> n;
		list[1000+n] = 1000+n;
	}
	for (int i = 0; i != 2002; i++) {
		if (list[i] != 4000)
			cout << list[i]-1000 << "\n";
	}
}