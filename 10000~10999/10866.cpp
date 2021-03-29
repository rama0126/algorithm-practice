#include<iostream>
#include<deque>
#include<string>
using namespace std;
int main() {
	int N;
	cin >> N;
	deque<int> que;
	while (N--) {
		string s;
		cin >> s;
		switch (s[0]) {
		case 'p':	if (s[1] == 'u') {
			if (s[5] == 'f') {
				int a;
				cin >> a;
				que.push_front(a); break;
			}
			int a;
			cin >> a;
			que.push_back(a); break;}
			if (s[1] == 'o') {
				if (que.empty()) { cout << "-1\n"; break; }
				if (s[4] == 'f') {
					cout << que.front() << "\n";
					que.pop_front(); break;}
					cout << que.back() << "\n";
					que.pop_back(); break;
				}
		case 'f':	if (que.empty()) { cout << "-1\n"; break; }
				cout << que.front() << "\n"; break;
		case 'b':	if (que.empty()) { cout << "-1\n"; break; }
				cout << que.back() << "\n"; break;
		case 's':	cout << que.size() << "\n"; break;
		case 'e':	cout << que.empty() << "\n"; break;
		}
	}
}