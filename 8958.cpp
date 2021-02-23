#include<iostream>
#include<string>
using namespace std;
int main() {
	int N,i,count=0,stack=0,score=0;
	cin >> N;
	int* scores = new int[N];
	for (i = 0; i != N; i++)
	{
		char S[81];
		cin >> S;
		while (S[count] != '\0') {
			switch (S[count]) {
			case 'O':score += (++stack); break;
			case 'X':stack = 0; break;

			}
			count++;
		}
		scores[i] = score;
		count = 0, stack = 0,score=0;
	}
	for (i = 0; i != N; i++)
		cout << scores[i] << "\n";
	delete[] scores;
}