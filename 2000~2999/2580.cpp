#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ii = 0;
vector<int> vect[9];
vector<vector<int>> zeros;
bool check_row(int x, int v) {
	if (!count(vect[x].begin(), vect[x].begin() + 9, v)) {
		return true;
	}
	return false;
}
bool check_col(int y, int v){
	int cnt = 0;
	for (int i = 0; i != 9; i++) {
		if (vect[i][y] == v)return false;
	}
	return true;
}
bool check_box(int nx,int ny, int v) {
	int cnt = 0;
	for (int i = 0; i != 3; i++) {
		for (int j = 0; j != 3; j++) {
			if (vect[i + nx][j + ny] == v)return false;
		}
	}
	return true;
}

void backtracking(int depth) {
	if (depth == zeros.size()) {
		if (ii != 0)return;
		ii++;
		for (int i = 0; i!= 9; i++) {
			for (vector<int>::iterator iter = vect[i].begin(); iter != vect[i].end(); iter++) {
				printf("%d ", *iter);
			}
			printf("\n");
		}
		return;
	}

	int x = zeros[depth][0], y = zeros[depth][1];
	int nx = (x / 3) * 3, ny = (y / 3) * 3;
	for (int i = 1; i != 10; i++) {
		if (check_row(x, i)&&check_col(y, i)&&check_box(nx,ny, i)) {
			vect[x][y] = i;
			backtracking(depth + 1);
		}
	}
	vect[x][y] = 0;
}
int main() {
	for (int j = 0; j != 9; j++) {
		for (int i = 0; i != 9; i++) {
			int k;
			scanf("%d", &k);
			vect[j].push_back(k);
			if (k == 0) {
				vector<int> v;
				v.push_back(j);
				v.push_back(i);
				zeros.push_back(v);
			}
		}
	}

	backtracking(0);
}