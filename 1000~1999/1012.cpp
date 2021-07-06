#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int M, N, K;
bool cab[53][53] = { {false,} };
int again(int x,int y) {
	cab[y][x] = false;
	if (x - 1 >= 0 && cab[y][x - 1] == true) again( x - 1,y );
	if (x + 1 < M && cab[y][x + 1] == true) again( x + 1,y );
	if (y - 1 >= 0 && cab[y - 1][x] == true) again( x ,y - 1 );
	if (y + 1 < N && cab[y + 1][x] == true) again( x ,y + 1 );
	return 0;
}
int BFS() {
	int count = 0;
	for (int i = 0; i < N;i++) {
		for(int j=0;j<M;j++)
		if (cab[i][j] == true) {
			again(j, i);
			count++;
		}
	}
	return count;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> M >> N >> K;
		int x, y;
		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			cab[y][x] = true;
		}
		cout << BFS() << "\n";
	}
	return 0;
}
