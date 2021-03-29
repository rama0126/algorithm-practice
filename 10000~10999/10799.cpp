#include<iostream>
#include<deque>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;
string A;
int iron=0;
int depth = 1;
void ironstick(char last, char pre) {
	if (pre == '('){ depth++; return;}
	if (pre == ')' && last == '(') {
		--depth;
		iron += depth;  return;
	}
	if (pre == ')' && last == ')') {
		iron++; --depth;
	}
}
int main() {
	cin >> A;
	for (int i = 1; i != A.size(); i++) {
		ironstick(A[i - 1], A[i]);
	}
	printf("%d", iron);
}