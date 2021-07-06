#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N,Min=1000000000;
vector<vector<int>> vect;
vector<int>arr;
vector<bool> arr2;

int main() {
	cin >> N;
	for (int i = 0; i != N; i++) {
		vector<int> v;
		for (int j = 0; j != N; j++) {
			int a;
			scanf("%d", &a);
			v.push_back(a);
		}
		vect.push_back(v);
		arr.push_back(i);
		if (i < N / 2) arr2.push_back(true);
		else arr2.push_back(false);
	}
	do {
		int sum1 = 0, sum2 = 0;
		vector<int> ar1, ar2;
		for (int i = 0; i != N; i++) {
			if (arr2[i])
				ar1.push_back(arr[i]);
			else ar2.push_back(arr[i]);
		}
		for (auto it = ar1.begin(); it != ar1.end(); it++) {
			for (auto it1 = ar1.begin(); it1 != ar1.end(); it1++) {
				sum1 += vect[*it][*it1];
			}
		}
		for (auto it = ar2.begin(); it != ar2.end(); it++) {
			for (auto it1 = ar2.begin(); it1 != ar2.end(); it1++) {
				sum2 += vect[*it][*it1];
			}
		}
		if (Min > abs(sum1 - sum2))Min = abs(sum1 - sum2);
	}while (prev_permutation(arr2.begin(), arr2.end()));
	printf("%d", Min);
}