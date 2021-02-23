#include<iostream>
using namespace std;
int main() {
	int A, B, V;
	int d;
	if (3 != scanf_s("%d %d %d", &A, &B, &V))
		return 0;
	if ((V - A) % (A - B) != 0)
		d = (V - A) / (A - B)+2;
	else
		d = (V - A) / (A - B)+1;
	printf("%d", d);
}