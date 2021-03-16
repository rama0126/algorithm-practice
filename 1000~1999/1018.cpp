#include<iostream>
using namespace std;
string chess[51];
int abscount[51][51];
int main() {
	int n, m, small = 64;;
	cin >> n >> m;
	for (int i = 0; i != n; i++) {
		cin >> chess[i];
	}
	for (int i = 0; i+8 <= n; i++) {
		for (int j = 0; j+8 <= m; j++) {
			int cnt1 = 0;
			int cnt2 = 0;
			for (int x = i; x != i + 8; x++) {
				for (int y = j; y != j + 8; y++) {
					char color = chess[x][y];
					if ((x - i) % 2 == 0 && (y - j) % 2 == 0) {
						if (color == 'B')
							cnt1++;
						else cnt2++;
					}
					else if ((x - i) % 2 == 0 && (y - j) % 2 == 1) {
						if (color == 'W')
							cnt1++;
						else cnt2++;
					}
					else if ((x - i) % 2 == 1 && (y - j) % 2 == 1) {
						if (color == 'B')
							cnt1++;
						else cnt2++;
					}
					else if ((x - i) % 2 == 1 && (y - j) % 2 == 0) {
						if (color == 'W')
							cnt1++;
						else cnt2++;
					}
				}
			}
			if(cnt1< cnt2)
				abscount[i][j] =cnt1;
			else abscount[i][j] =cnt2;
		}
	} 
	for (int i = 0; i + 8 <= n; i++) {
		for (int j = 0; j+8 <= m; j++) {
			if (small > abscount[i][j])
				small = abscount[i][j];
		}
	}
	cout << small;
}