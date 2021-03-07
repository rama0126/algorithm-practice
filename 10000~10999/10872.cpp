#include<iostream>
using namespace std;
int factorial(int n) {
	if (n <= 1)return 1;
	int nn = n * factorial(n - 1);
	return nn;
}
int main() {
	int N;
	cin >> N;
	cout << factorial(N);
}