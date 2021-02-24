#include<iostream>
#include<string>
using namespace std;
int main() {
	int T,n=0;
	cin >> T;
	while (n < T) {
		n++;
		string S;
		int count = 0;
		int R;
		cin >> R >> S;
		for (int i = 0; i < S.length(); i++)
			for(int j=0;j<R;j++)
				cout << S[i];
		cout << "\n";
	}

}