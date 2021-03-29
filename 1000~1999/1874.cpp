#include<iostream>
#include<stack>
#include<vector>
#include<deque>
using namespace std;
vector<bool> vb;
void Pop() {
	vb.push_back(false);
}
void Push() {
	vb.push_back(true);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	bool vno = false;
	stack<int> st;
	deque<int> v;
	cin >> n;
	for (int i = 0; i != n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	if (!vno) {
		for (int i = 1; i <= n; i++) {
			st.push(i);
			Push();
			while (1) {
				if (v.empty()||st.empty())break;
				else if (st.top() == v.front()) {
					st.pop();
					Pop();
					v.erase(v.begin());
					continue;
				}
				else break;
			}
			if (i == n && !v.empty()) { vno = true;}
		}
	}
	if(vno){ cout << "NO"; return 0;}
	for (vector<bool>::iterator iter = vb.begin();
		iter != vb.end();iter++) {
		if (*iter)cout << "+\n";
		else cout << "-\n";
	}
}