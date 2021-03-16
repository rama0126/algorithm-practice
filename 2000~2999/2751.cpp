#include<iostream>
using namespace std;
int main() {
	long int N;
	int minus[1000001] = { 0, };
	
	int plus[1000001] = { 0, };
	bool zero = false;
	cin >> N;
	for (long int i = 0; i != N; i++) {
		long int input;
		cin >> input;
		if (input == 0) zero = true;
		else if (input < 0) minus[-input]=input;
		else  plus[input] = input;
	}
	for (long int i = 1000001; i != 0; i--) {
		if (minus[i] != 0) 
			cout << minus[i] << "\n";
	}
	if(zero) cout << "0\n";
	for (long int i = 0; i != 1000001; i++) {
		if (plus[i] != 0) cout << plus[i] << "\n";
	}
}