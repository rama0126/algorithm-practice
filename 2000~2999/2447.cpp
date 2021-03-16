#include <iostream>
#include <string>
using namespace std; 
char star[7000][7000];
void pstar(int x, int y, int s) {
	if (s == 1) {
		star[x][y] = '*';
		return;
	}
	int d = s / 3;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1)
				continue;
			else
				pstar(x + (i*d),y+(j*d),d);
		}
	
}

int main() {
	int N;
	cin >> N;
	fill(star[0], star[0] + 49000000, ' ');
	pstar(0, 0, N);
	for (int i = 0; i != N; i++)
	{
		for (int j = 0; j != N; j++)
			cout << star[i][j];
		printf("\n");
	}
}