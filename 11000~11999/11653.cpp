#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int i = 2;
	while (1) {
		if (N % i == 0)
		{
			N = N / i;
			cout << i << "\n";
			i = 1;
		}
		if (N == 1)break;
		i++;
	}
}