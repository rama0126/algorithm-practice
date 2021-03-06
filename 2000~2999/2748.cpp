#include<iostream>
#include<algorithm>
#include<vector>
typedef long long LL;
using namespace std;
LL a = 0;
LL  f1 = 1, f0 = 0, f;
void fibonacci(int depth) {
    if (depth == a + 1) {
        return;
    }
    f = f1 + f0;
    f0 = f1;
    f1 = f;
    fibonacci(depth + 1);
}
int main() {
    cin >> a;
    if (a == 0) {
        printf("0"); return 0;
    }
    if (a == 1) {
        printf("1"); return 0;
    }
    fibonacci(2);
    printf("%lld", f);
}