#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int* sum = new int;
	while (1) {
		int A, B;
		cin >> A >> B;
		if (cin.eof())
			break;
		q.push(A + B);
	}
	while(!q.empty())
	{
		cout << q.front() << "\n";
		q.pop();
	}
}