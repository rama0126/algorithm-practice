#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N,a;
	multiset<int> s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a > 0) {
			s.insert(a);
		}
		else {
			if (s.empty())
				cout << "0\n";
			else {
				auto it = s.begin();
				cout << *it << "\n";
				s.erase(it);
			}
		}
	}
}