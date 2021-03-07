#include<iostream>
using namespace std;
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	while ((x+y+z)) {
		if (x * x + y * y == z * z || 
			x * x + z * z == y * y || 
			y * y + z * z == x * x)
			cout << "right" << "\n";
		else cout << "wrong" << "\n";
		cin >> x >> y >> z;
	}
}