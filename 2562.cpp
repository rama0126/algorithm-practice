#include<iostream>
#define max_num 9
using namespace std;
int main() {
	int count = 0;
	int max = 0;
	int max_index = -1;
	while (count != max_num)
	{
		int innum;
		cin >> innum;
		if (max < innum) {
			max = innum;
			max_index = count + 1;
		}
		count++;
	}
	cout << max << endl;
	cout << max_index << endl;
}