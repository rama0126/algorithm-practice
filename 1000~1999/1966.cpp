#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	for (int i = 0; i != N; i++) {
		queue<pair<int,bool>> que;
		vector<int> grade;
		int a, b,cnt=0;
		scanf("%d%d", &a, &b);
		for (int j = 0; j != a; j++) {
			int q;
			scanf("%d", &q);
			grade.push_back(q);
			if (j == b)que.push(pair<int, bool>(q, true));
			else que.push(pair<int, bool>(q, false));
		}
		sort(grade.begin(), grade.end());
		while (1) {
			if (que.front().first == grade.back()) {
				cnt++;
				if (que.front().second)break;
				grade.pop_back(); que.pop();
			}
			else {
				pair<int, bool> pa = que.front();
				que.pop();
				que.push(pa);
			}
		}
		printf("%d\n", cnt);
	}
}