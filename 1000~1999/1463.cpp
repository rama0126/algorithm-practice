#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a;
int mincnt = 1000000;
void BT(int depth,int cnt) {
	if (depth == 1) {
		if (mincnt > cnt) mincnt = cnt;
		return;
	}
	if (cnt > mincnt) return;
	if (depth % 3 == 0) {
		BT(depth / 3,cnt+1);
	}
	if (depth % 2 == 0) {
		BT(depth / 2,cnt+1);
	}
	BT(depth - 1,cnt+1);
}
int main() {
	cin >> a;
	BT(a,0);
	printf("%d", mincnt);
}