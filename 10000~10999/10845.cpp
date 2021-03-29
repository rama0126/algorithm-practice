#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main() {
	int N;
	cin >> N;
	queue<int> que;
	while (N--) {
		string s;
		cin >> s;
		switch (s[0]) {
		case 'p':	if (s[1] == 'u') {
						int a;
						cin >> a;
						que.push(a); break;
					}
					if (s[1] == 'o') {
						if(que.empty()){ cout << "-1\n"; break; }
						cout << que.front()<<"\n";
						que.pop(); break;
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