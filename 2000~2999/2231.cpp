#include<iostream>
using namespace std;
int main() {
	unsigned int n;
	cin >> n;
	unsigned int init = 0;
	if (n == 1000000) {
		for (unsigned int i = 999900; i != n; i++) {
			int	num5 = (i / 100000) % 10, num4 = (i / 10000) % 10,
				num3 = (i / 1000) % 10, num2 = (i / 100) % 10,
				num1 = (i / 10) % 10, num = i % 10;
			if ((num5 + num4 + num3 + num2 + num1 + num + i) == n) {
				init=i;
				break;
			}
		}
	}
	else if (n >= 100000) {
		for (unsigned int i = 99900; i != n; i++) {
			int	num5 = (i / 100000) % 10, num4 = (i / 10000) % 10,
				num3 = (i / 1000) % 10, num2 = (i / 100) % 10,
				num1 = (i / 10) % 10, num = i % 10;
			if ((num5 + num4 + num3 + num2 + num1 + num + i) == n) {
				init = i;
				break;
			}
		}
	}
	else if (n >= 10000) {
		for (unsigned int i = 9900; i != n; i++) {
			int	 num4 = (i / 10000) % 10,
				num3 = (i / 1000) % 10, num2 = (i / 100) % 10,
				num1 = (i / 10) % 10, num = i % 10;
			if ((num4 + num3 + num2 + num1 + num + i) == n) {
				init = i;
				break;
			}
		}
	}
	else if (n >= 1000) {
		for (unsigned int i = 900; i != n; i++) {
			int	 num3 = (i / 1000) % 10, num2 = (i / 100) % 10,
				num1 = (i / 10) % 10, num = i % 10;
			if ((num3 + num2 + num1 + num + i) == n) {
				init = i;
				break;
			}
		}
	}
	else if (n >= 100) {
		for (unsigned int i = 80; i != n; i++) {
			int	 num2 = (i / 100) % 10,
				num1 = (i / 10) % 10, num = i % 10;
			if ((num2 + num1 + num + i) == n) {
				init = i;
				break;
			}
		}
	}
	else if (n >= 10) {
		for (unsigned int i = 5; i != n; i++) {
			int	 num1 = (i / 10) % 10, num = i % 10;
			if ((num1 + num + i) == n) {
				init = i;
				break;
			}
		}
	}
	else {
		for (unsigned int i = 0; i != n; i++) {
			int num = i % 10;
			if ((num + i) == n) {
				init = i;
				break;
			}
		}
	}
	cout << init;
}