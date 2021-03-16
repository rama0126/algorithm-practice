#include <iostream>
using namespace std;

void move(int from, int to) {
	cout << from << " " << to << "\n";
}
void hanoi(int n, int from, int pass, int to) {
	if (n == 1)
		move(from, to);
	else {
		hanoi(n - 1, from, to, pass);
		move(from, to);
		hanoi(n - 1, pass, from, to);
	}
}

int main() {
	int N;
	cin >> N;
	cout << ((1 << N) - 1) << "\n";
	hanoi(N, 1, 2, 3);
}
