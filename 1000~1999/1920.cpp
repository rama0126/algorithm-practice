#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool BinarySearch(vector<int>& NN, int key) {
	int start = 0;
	int mid;
	int end = NN.size() - 1;

	while (end >= start) {
		mid = (start + end) / 2;    //중앙 값

		if (NN[mid] == key) {    //key값을 찾았을때
			return true;
		}
		else if (NN[mid] > key) {   //key값이 mid의 값보다 작을때 (왼쪽으로)
			end = mid - 1;

		}
		else {  //key값이 mid의 값보다 클때 (오른쪽으로)
			start = mid + 1;

		}
	}
	return false;
}

int main() {
	int N,M;
	int  Ms,Ns;
	vector<int> NN;
	cin >> N;
	for (int i = 0; i != N; i++) {
		scanf("%d", &Ns);
		NN.push_back(Ns);
	}
	sort(NN.begin(), NN.begin() + N);
	cin >> M;
	for (int i = 0; i != M; i++) {
		scanf("%d", &Ms);
		if (BinarySearch(NN,Ms)) printf("1\n");
		else printf("0\n");
	}

}