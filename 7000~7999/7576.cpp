#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
queue<pair<int,int>> q;
vector<vector<int>> T;
queue<int> dayq;
int N, M;
int BFS(int count);
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, count = 0;
	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		vector<int> v;
		for (int j = 0; j <M; j++) {
			cin >> a;
			v.push_back(a);
			if (a == 1) {
				q.push({ j,i });
				dayq.push(0);
			}
			else if (a == 0) {
				count++;
			}
		}
		T.push_back(v);
	}

	cout << BFS(count) << endl;

}
int BFS(int count) {
	int day;
	while (!q.empty()) {
		day = dayq.front(); dayq.pop();
		int x= q.front().first,y = q.front().second;
		q.pop();
		if (x + 1 < M && T[y][x + 1] == 0) {
			q.push({ x + 1,y });
			dayq.push(day + 1);
			count--;
			T[y][x + 1] = 1;
		}
		if (x -1 >= 0 && T[y][x -1] == 0) {
			q.push({ x -1,y});
			dayq.push(day + 1);
			count--;
			T[y][x - 1] = 1;
		}
		if (y - 1 >= 0 && T[y-1][x] == 0) {
			q.push({ x ,y-1 });
			dayq.push(day + 1);
			count--;
			T[y-1][x] = 1;
		}
		if (y + 1 < N && T[y + 1][x] == 0) {
			q.push({ x ,y + 1 });
			dayq.push(day + 1);
			count--;
			T[y+1][x] = 1;
		}
	}
	if (count == 0) return day;
	return -1;
}