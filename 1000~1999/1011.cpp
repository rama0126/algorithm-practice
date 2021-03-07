#include<iostream>
using namespace std;
long long int babylon(long long int a);
int main() {
	long long int T, X, Y;
	cin >> T;
	while (T != 0) {
		T--;
		cin >> X >> Y;
		long long int dis = Y - X;
		long long int K=3;
		switch (dis) {
		case 1:case 2:case 3:K = dis; break;
		case 4: K = 3; break;
		case 5:case 6: K = 4; break;
		default:
			while(1){
				if ((K*K)>dis){
					if((K-1)*(K-1)==dis)
						K = (K-1)*2 - 1;
					else if (K * K - K < dis)
						K = K*2-1;
					else K = (K-1)*2;
					break;
				}
				K++;
		}
		}
		printf("%lld\n", K);
	}
}