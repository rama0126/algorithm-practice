#include <iostream>
#include <math.h>
const double PI = acos(-1.0);
using namespace std;

int main() {
	long double R;
	cin >> R;
	long double US = PI*R*R, TS = 2 * R*R;

	printf("%.6Lf\n%.6Lf", US,TS);
}