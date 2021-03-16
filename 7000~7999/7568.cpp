#include<iostream>
using namespace std;
struct person {
	int x, y;
};
int grade[50] = {0,};
person people[50];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i != n; i++) {
		int x, y;
		cin >> x >> y;
		people[i].x=x, people[i].y = y;
	}
	for (int i = 0; i != n; i++) {
		int big = 1;
		for (int j = 0; j != n; j++) {
			if (people[i].x < people[j].x &&
					people[i].y < people[j].y) {
				big++;
				}
			
		}
		grade[i] = big;
	}
	for (int i = 0; i != n; i++)
		cout<<grade[i]<<"\n";
}