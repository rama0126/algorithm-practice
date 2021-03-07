#include<iostream>
using namespace std;
int main() {
	int x1, x2, x3, y1, y2, y3;
	int x, y;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	if (x1 == x2)
	{
		x = x3;
		if (y2 == y3)
			y = y1;
		else
			y = y2;
	}
	else if (x1 == x3){
		x = x2;
		if (y2 == y3)
			y = y1;
		else
			y = y3;}
	else {
		x = x1;
		if (y1 == y3)
			y = y2;
		else
			y = y3;
	}
	cout << x <<" " <<y;
}