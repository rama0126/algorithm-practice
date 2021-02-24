#include<iostream>
using namespace std;
int main() {
	int i,N,count;
	int Min = 2;
	int Max = 1;
	cin >> N;
	if (N == 1)
	{
		count = 1;
	}
	else {
		for (i = 0; i != 1000000000; i++) {
			Min += i * 6;
			Max += (i+1) * 6;
			if (Min<= N && N <= Max)
			{
				count = i + 2;
				break;
			}
		}
	}
	cout << count;
}