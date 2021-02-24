#include<iostream>
using namespace std;
int Testcase(int K,int n);
int main() {
	int T,count=0;
	cin >> T;
	while (count != T) {
		count++;
		int K, n;
		cin >> K;
		cin >> n;
		cout<<Testcase(K,n)<<endl;
	}
}
int Testcase(int K,int n) {
	if (n == 1)
		return 1;
	else if (K == 0)
		return n;
	else {
		return Testcase(K, n - 1) + Testcase(K - 1, n);
	}
}