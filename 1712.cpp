#include<iostream>
using namespace std;
int main() {
	unsigned int A, B, C;
	cin >> A >> B >> C;
	unsigned long long N;
	if (B >= C)
		cout << -1;
	else {
		N = A / (C - B)+1;
		cout << N;
	}
	
}