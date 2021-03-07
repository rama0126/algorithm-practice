#include<iostream>
#include<string>
using namespace std;
int main() {
	string A, B, result = "";
	int cur = 0;
	bool state = false;
	cin >> A >> B;
	while (1) {
		if (B.empty() && !A.empty()) { cur = A.back() - '0'; A.pop_back(); }
		else if (A.empty() && !B.empty()) { cur = B.back() - '0'; B.pop_back(); }
		else if (!B.empty() && !A.empty()) { cur = (A.back() - '0') + (B.back() - '0'); A.pop_back(); B.pop_back(); }
		else if (B.empty() && A.empty())
		{
			if (state)
				result.insert(0, "1");
			break;
		}

		if (state)
			cur++;
		if (cur >= 10)
			state = true;
		else state = false;
		result.insert(0, to_string(cur % 10));
	}
	cout << result;
}