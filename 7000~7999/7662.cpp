#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main() {
	int T,K;
	
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		multiset<int> Q;
		cin >> K;
		for (int j = 0; j < K; j++) {
			char c;
			int a;
			cin >> c >> a;
			if (c == 'I') {
				Q.insert(a);
				continue;
			}
			if (Q.empty()) continue;
			if (a == -1) {
				auto it = Q.begin();
				Q.erase(it);
			}
			else if (a == 1) {
				auto it = Q.end();
				it--;
				Q.erase(it);
			}
		}
		if (Q.empty()) printf("EMPTY\n");
		else {
			auto it = Q.end();
			it--;
			printf("%d %d\n",*(it),*Q.begin());
		
		}
	}
	return 0;
}