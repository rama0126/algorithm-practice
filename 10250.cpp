#include<iostream>
using namespace std;
void hotel();
int main() {
	int T,count=0;
	cin >> T;
	while (count != T) {
		count++;
		hotel();
	}
}
void hotel() {
	int H, W, N;
	cin >> H >> W >> N;
	int dg;
	int hd;
	if (N % H == 0) {
		hd = H;
		dg = N / H;
	}
	else {
		hd = N % H;
		dg = N / H + 1;
	}
	cout << hd * 100 + dg<<endl;
}
