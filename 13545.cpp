#include<iostream>
using namespace std;
int count_ss(int *i, int *j, int* sarr);
void print_qarr(int* qarr, int *qsize);
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int ssize, qsize;
	int sarr[100000];
	int qarr[100000];
	cin >> ssize;
	for (int i = 0; i != ssize; i++)
		cin>>sarr[i];
	cin >> qsize;
	for (int k = 0; k != qsize; k++)
	{
		int i, j;
		cin >> i >> j;
		qarr[k] = count_ss(&i, &j, sarr);
	}
	print_qarr(qarr, &qsize);
	free(sarr);
	return 0;
}
__inline int imax(int a, int b) {
	if (a > b) return a;
	return b;
}
void print_qarr(int* qarr,int *qsize) {
	for (int i = 0; i != *qsize; i++)
		cout << qarr[i] << endl;
}
int count_ss(int *i, int *j,int* sarr) {
	int top_count = 0;
	for (int l = *i - 1; l != *j; l++) {
		int sum_in = 0;
		int count_in = 0;
		for (int m = l; m != *j; m++) {
			sum_in += sarr[m];
			count_in++;
			if (sum_in == 0) {
				top_count = imax(top_count, count_in);
				break;
			}
		}
	}
	return top_count;
}