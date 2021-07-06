#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M;
	string com;
	int n;

	bool s[21] = { false, };
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> com;
		if (com == "all") {
			for (int j = 1; j <= 20; j++) s[j] = true;
			continue;
		}
		else if (com == "empty") { fill_n(s, 21, false); continue; }

		cin >> n;
		if (com == "add") {
			s[n] = true;
		}
		else if (com == "check") {
			bool it = s[n];
			if (it) {
				printf("1\n");
			}
			else printf("0\n");
		}
		else if (com == "remove") {
			bool it=s[n];
			if (it) {
				s[n] = false;
			}
		}
		else if (com == "toggle") {
			bool it = s[n];
			if (it) {
				s[n] = false;
			}
			else s[n]=true;
		}
	}
}