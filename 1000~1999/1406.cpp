#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a;
	string s;
	cin >> s>>a;
	list<char> st (s.begin(), s.end());
	bool front = false;
	auto iter = st.end();
	for (int i = 0; i != a; i++) {
		char c,b;
		cin >> c;
		switch (c) {
		case 'L': if (iter != st.begin()) iter--; break;
		case 'D': if (iter != st.end()) iter++; break;
		case 'B': if (iter != st.begin()) { iter = st.erase(--iter); }break;
		case 'P':cin >> b;
			st.insert(iter, b); break;
		}
	}
	for (auto& i : st) 
		cout << i;
}