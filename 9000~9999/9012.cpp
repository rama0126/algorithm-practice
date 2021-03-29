#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
	int N;
	cin >> N;
	for (int i = 0; i != N; i++) {
		string s;
		bool earlyb=false;
		stack<char> st;
		cin >> s;
		for (string::iterator iter=s.begin(); iter != s.end(); iter++) {
			if (*iter == '(')
				st.push(*iter);
			else if (*iter == ')') {
				if (st.empty()) {
					earlyb = true;
					break;
				}
				st.pop();
			}
		}
		if (earlyb) cout << "NO" << "\n";
		else if(!st.empty())cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}
}