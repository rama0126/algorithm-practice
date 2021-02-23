#include<iostream>
#include<string>
using namespace std;
int main() {
	string S;
	cin >> S;
	int i,len = S.size();
	int count[26] = { 0, };
	for (i = 0; i < len; i++) {
		count[S[i] -'a'] += 1;
	}
}
void lucky(char cur,int ind) {
	for (int i = 0; i != 26; i++) {
		if (cur == i+'a') continue;
		if()
	}
}