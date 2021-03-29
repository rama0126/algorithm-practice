#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	int a, b;
	cin >> N;
	for (int i = 0; i != N; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
}