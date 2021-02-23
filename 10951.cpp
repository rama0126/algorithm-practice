#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int* sum = new int;
	int count = 0;
	while (1) {
		int A, B;
		cin >> A >> B;
		if (cin.eof())
			break;
		count++;
		q.push(A + B);
	}
	while(!q.empty())
	{
		cout << q.front() << "\n";
		q.pop();
	}
	return 0;
}