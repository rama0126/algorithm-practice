#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int d[21][21][21] = { 0, };
int w(int a, int b, int c);
int main() {
    int a, b, c;
    d[20][20][20]= 1048576;
    d[0][0][0] = 1;
    while (1) {
        scanf("%d%d%d", &a, &b, &c);
        if (a == -1 && b == -1 && c == -1)break;
        
        printf("w(%d, %d, %d) = %d\n", a, b, c,w(a,b,c));
    }
}
int w(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return d[0][0][0];
    }
    if (a > 20 || b > 20 || c > 20) {
        return d[20][20][20];
    }
    if (d[a][b][c] != 0)return d[a][b][c];
    if (a < b && b < c) {
        d[a][b][c]= w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        return d[a][b][c];
    }
    d[a][b][c]= w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return d[a][b][c];
}