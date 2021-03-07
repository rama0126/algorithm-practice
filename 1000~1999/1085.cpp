#include<iostream>
using namespace std;
int main() {
	int x, y, w, h,min=1000;
	cin >> x>> y>> w>> h;
	int dis[4] = { x,y,w - x,h - y };
	for (int i = 0; i != 4; i++)
		if (dis[i] < min)min = dis[i];
	cout << min << endl;
}