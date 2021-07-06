#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int N;
	int x;
	int count = 0;
	cin >> N;
	multiset<int> s;
	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x == 0) {
			if (s.empty()) {
				cout << 0 << "\n";
			}
			else {
				auto end = s.end();
				end--;
				cout << *end << "\n";
				s.erase(end);
			}
		}
		else s.insert(x);
	}

}