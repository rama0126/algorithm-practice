#include <iostream>
using namespace std;
void myanswer() {
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
void other_answer() {
	int n, cnt = 0;
	cin >> n;
	while (n > 0) {
		cnt++;
		n -= cnt;
	}
	if (cnt % 2 == 0)
	{
		printf("%d/%d", cnt + n, 1 + (-n));
	}
	else
	{
		printf("%d/%d", 1 + (-n), cnt + n);
	}


}
int main() {
	other_answer();
}