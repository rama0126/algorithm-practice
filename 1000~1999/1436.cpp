#include<iostream>
#include<string>
using namespace std;
unsigned int count (int n,int t);
bool check(int i);
int main() {
	int t = 666;
	unsigned int n, cnt = 0;

	cin >> n;
	cout << count(n,t);
}

unsigned int count (int n,int t) {
	unsigned int cnt = 0;
	unsigned int i;
	while(cnt!=n) {
		if(check(t))cnt++;
		t++;
	}
	return t-1;
}
bool check(int i) {
	unsigned int k=i,len = 0,cnt=0;
	while(1)
	{
		k /= 10;
		len++;
		if (k == 0)break;
	}
	for (int j = 0; j != len; j++) {
		if (i % 10 == 6)
			cnt++;
		else cnt = 0;
		if (cnt == 3)return true;
		i /= 10;
	}
	return false;
}