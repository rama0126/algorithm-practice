#include<iostream>
#include <string>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string voca;
	bool state = false;
	cin >> voca;
	int len = voca.length() + 1;
	int count[26] = { 0, };
	int i;
	for (i = 0; i < len; i++) {
		voca[i] = toupper(voca[i]);
		count[voca[i] - 65] += 1;
	}
	int max = -1;
	int index_max = -1;
	for (i = 0; i < 26; i++) {
		int compare = count[i];
		if (max <=	compare )
		{
			if (max != compare)
			{
				max = compare;
				index_max = i;
				state = false;
			}
			else
				state = true;
		}
	}
	if (!state)
		cout << char(index_max+65);
	else
		cout << "?";
	return 0;
}
