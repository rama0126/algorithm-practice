#include<deque>
#include<iostream>
#include<algorithm>
using namespace std;
int N, M,cnt=0;
deque <int> deq;
deque <int> arr;

int main() {
	scanf("%d%d", &N, &M);
	deq.assign(false, N);
	for (int i = 1; i <= N; i++) deq.push_back(i);
	for (int i = 0; i != M ; i++) {
		int a;
		scanf("%d", &a);
		arr.push_back(a);
	}
	int ind=0;
	while (1) {
		if (arr.empty()) break;
		if (deq.front() == arr.front()) {
			arr.pop_front(); deq.pop_front(); N--; continue;
		}
		cnt++;
		if (N % 2 == 0) {
			if (find(deq.begin(),deq.end(),arr.front())-deq.begin()<N/2) {
				int a = deq.front();
				deq.pop_front();
				deq.push_back(a);
			}
			else {
				int a = deq.back();
				deq.pop_back();
				deq.push_front(a);
			}
			continue;
		}
		if (find(deq.begin(), deq.end(), arr.front()) - deq.begin() <= N / 2) {
			int a = deq.front();
			deq.pop_front();
			deq.push_back(a);
		}
		else {
			int a = deq.back();
			deq.pop_back();
			deq.push_front(a);
		}
		continue;
	}
	printf("%d", cnt);
}