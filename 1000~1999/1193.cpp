#include <iostream>
using namespace std;
int main() {
	int i, X;
	cin >> X;
	int hori=1,verti=1;
	bool state =false;
	for (i = 0;i!=X-1; i++) {
		if (state)
			verti++, hori--;
		else if (!state)
			verti--, hori++;
		if (verti == 0)
			verti = 1,state=true;
		else if (hori == 0)
			hori=1, state = false;
	}
	cout << verti <<"/"<<hori;
}