#include<iostream>
using namespace std;
int N;
int fivonachi(int i){
	if (i >= 2)
		return fivonachi(i - 1) + fivonachi(i - 2);
	else if (i <= 1||0>=i)
		return i;
}
int main() {
	cin >> N;
	cout<<fivonachi(N);
}