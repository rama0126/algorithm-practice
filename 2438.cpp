#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int count = 0;
	while (count != N) {
		++count;
		for (int i = 0; i < count; i++)
			printf("*");
		cout << "\n";
	}
}