#include<iostream>
using namespace std;
int card[101];
int main() {
	int n, m;
	int sum = 0;
	cin >> n >> m;
	for (int i = 0; i != n; i++)
		cin >> card[i];
	for(int i=0;i!=n;i++)
		for(int j=i+1;j!=n;j++)
			for (int k = j + 1; k != n; k++)
			{
				int s = card[i] + card[j] + card[k];
				if (s > sum && s <= m)
					sum = s;
			}
	cout << sum;
}