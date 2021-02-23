#include<iostream>
using namespace std;
int main() {
	int pre, now, state=0;
	cin >> pre;
	for (int i = 1; i != 8; i++) {
		cin >> now;
		if (pre - now == 1)
				state += 1;
		else if (pre - now == -1)
				state += -1;
		else
				state += 0;
		pre = now;
	}
	switch (state) {
	case -7:cout << "ascending"; break;
	case 7:cout << "descending"; break;
	default:cout << "mixed";
	}
}