#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;
int N, c, r; 
int cnt = 0;
int z(int N, int x, int y) {
	if (N == 0) {
		return 1;
	}
	int size = 1<<(N-1) ;
	if (y < size) {
		if (x < size) {
			return z(N-1, x, y);
		}
		return size * size +z(N-1, x-size, y);
	}
	if (x < size) {
		return size * size * 2 + z(N-1, x, y-size);
	}
	return size * size * 3 + z(N-1, x-size, y-size);
}
int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	cin >> N >> r >> c;
	cout<<z(1 << N,c,r)-1;
}