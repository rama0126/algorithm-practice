#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	vector<string> v = {"0",};
	vector<pair< string,int>> vp = { {"0",0}, };
	for (int i = 1; i <= N; i++) {
		string s;
		cin >> s;
		v.push_back(s);
		vp.push_back({s,i});
	}
	sort(vp.begin(), vp.end());
	for (int i = 0; i < M; i++) {
		string input;
		cin >> input;
		char a = input[0];
		if (a > 64) {
			int left = 1, right = N;
			while (left <= right) {

				int mid = (left + right) / 2;
				if (vp[mid].first == input) {
					cout << vp[mid].second << "\n";
					break;
				}
				else if (vp[mid].first < input)
					left = mid + 1;
				else
				{
					right = mid - 1;
				}
			}
		}
		else {
			cout << v[stoi(input)]<<"\n";
		}
	}
}