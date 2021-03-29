#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	int N;
	cin >> N;
	cin.ignore(32767, '\n');
	for (int j = 0; j != N; j++) {
		string ss;
		getline(cin,ss);
		stack<char> st;
		ss += ' ';
		for (int i = 0; i != ss.size(); i++) {
			if (ss[i] == ' ')
			{
				while (!st.empty()) {
					cout << st.top(); st.pop();
				}
				cout << " ";
			}
			else {
				st.push(ss[i]);
			}
		}
		cout << "\n";
		
	}
}