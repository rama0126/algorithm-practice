#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a;
int c1 = 0, c0 = 1,v0=0,v1=1;
int count0 = 1, count1 = 1;
void BT_fibonacci(int depth) {
    if (depth == a+1) {
        return;
    }
    count0 = c0 + v0;
    count1 = c1 + v1;
    c0 = v0; c1 = v1;
    v0 = count0; v1 = count1;
    BT_fibonacci(depth + 1);
    return;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i != T; i++) {
        scanf("%d", &a);
        if (a == 0) {
            printf("1 0\n"); continue;
        }
        else if (a == 1) {
            printf("0 1\n"); continue;
        }
        BT_fibonacci(2);
        printf("%d %d\n", count0, count1);
        c1 = 0, c0 = 1, v0 = 0, v1 = 1;
    }
}