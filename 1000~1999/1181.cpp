#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> compare(set<string> s) {
	set<string>::iterator iter;
	vector<string>v;
	for (iter = s.begin(); iter != s.end(); iter++) {
		v.push_back(*iter);
	}
	sort(v.begin(), v.end());
	return v;
}
int main() {
	int N;
	cin >> N;
	set<string> s[51];
	for (int i = 0; i != N; i++) {
		string v;
		cin >> v;
		s[v.size()].insert(v);
	}
	for (int i = 0; i != 51; i++) {
		vector<string> v=compare(s[i]);
		vector<string>::iterator iter;
		for (iter = v.begin(); iter != v.end(); iter++) {
			cout << *iter << "\n";
		}
	}
}