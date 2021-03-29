#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int cnt = 0;
int ve[15];
int N;
bool possible(int depth) {
	for (int i = 0; i != depth; i++) {
		if (ve[i] == ve[depth] || ve[i] == ve[depth] + abs(i - depth) ||
			ve[i] == ve[depth] - abs(i - depth))return false;
	}
	return true;
}
void queen(int depth) {
	if (depth == N) {
		cnt++; return;
	}
	for (int i = 0; i != N; i++) {
		ve[depth] = i;
		if (possible(depth)) {
			queen(depth + 1);
		}
	}
	
}
int main(){
	scanf("%d", &N);
	queen(0);
	printf("%d",cnt);
}