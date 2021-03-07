#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int x1, x2, y1, y2, r1, r2,T;
	cin >> T;
	while (T) {
		T--;
		cin >> x1 >> y1 >> r1 >> x2 >> y2  >> r2;
		unsigned int dis = ((x1 - x2) * (x1 - x2))
			+ ((y1 - y2) * (y1 - y2));
		unsigned int rp = (r1 + r2) * (r1 + r2);
		if (dis==0) {
			if (r1 == r2)cout << -1 << "\n";
			else cout << 0 << "\n";
		}
		else if (dis < rp) {
			if (sqrt(dis) + r1 < r2 || sqrt(dis) + r2 < r1) 
				cout << 0 << "\n";
			else if (sqrt(dis) + r1 == r2 || sqrt(dis) + r2 == r1)
				cout << 1 << "\n";
			else cout << 2 << "\n";
		}
		else {
			if(dis>rp)cout << 0 << "\n";
			else if(dis==rp)cout << 1 << "\n";
			else {
				if (dis == (r1 * r1) || dis == (r2 * r2))
					cout << 1 << "\n";
				else cout << 2 << "\n";
			}
		}
	}
}