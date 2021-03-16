#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string N;
	cin >> N;
	sort(N.begin(), N.begin() + N.size(), greater<char>());
	cout << N;
}