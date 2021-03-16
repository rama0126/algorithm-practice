#include<iostream>
#include<string>
using namespace std;
int main() {
	
	while (1) {
		string s;
		int size;
		bool palin = true;
		cin>>s;
		size = s.size();
		if (s[0]=='0')break;
		if (size % 2 == 0) {
			for (int i = 0; i != (size / 2) + 1; i++) {
				if (*(s.begin() + i) != *(s.end() - 1 - i)) {
					palin = false; 
				}
			}
		}
		else {
			for (int i = 0; i != (size / 2); i++) {
				if (*(s.begin() + i) != *(s.end() - 1 - i)) {
					palin = false; 
				}
			}
		}
		if (palin)
			printf("yes\n");
		else
			printf("no\n");
	}
}