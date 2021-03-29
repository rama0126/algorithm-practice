#include<iostream>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	string N;
	getline(cin,N);
	bool nest = false;
	stack<char> st;
	for (int i = 0; i != N.size(); i++) {
		if (N[i] == ' '&&!nest) {
			while (!st.empty()) {
				printf("%c", st.top());
				st.pop();
			}
			printf(" "); continue;
		}
		if (N[i] == '<') {
			while (!st.empty()) {
				printf("%c", st.top());
				st.pop();
			}
			nest = true; }
		if (nest) { printf("%c", N[i]); if (N[i] == '>')nest = false; }
		else {
			st.push(N[i]);
		}
	}
	while (!st.empty()) {
		printf("%c", st.top());
		st.pop();
	}
}