#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int N;
	vector<int> age;
	vector<string> name[201];
	scanf("%d", &N);
	for (int i = 0; i != N; i++) {
		string s; int a;
		scanf("%d", &a); cin >> s;
		age.push_back(a);
		name[a].push_back(s);
	}
	sort(age.begin(), age.begin() + N);
	int pre_age = 0, cnt = 0;
	for (int i = 0; i != N; i++) {
		printf("%d ", age[i]);
		if (pre_age == age[i]) {
			cnt++;
			cout << name[pre_age][cnt] << "\n";
		}
		else {
			cnt = 0, pre_age = age[i];
			cout << name[pre_age][cnt] << "\n";
		}
	}
}