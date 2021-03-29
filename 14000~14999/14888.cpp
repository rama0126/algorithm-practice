#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
deque<int>oper;
vector<int> v;
int N,Max = -100000000, Min=1000000000;
int main() {
    cin >> N;
    for (int i = 0; i != N; i++) {
        int a;
        scanf("%d",&a);
        v.push_back(a);
    }
    for (int i = 0; i != 4; i++) {
        int a;
        scanf("%d", &a);
        for (int j = a; j != 0; j--) {
            oper.push_back(i);
        }
    }
    do {
        int sum = v[0];
        for (int it = 1; it != N; ++it)
        {
            switch (oper[it - 1]) {
            case 0:
                sum += v[it]; break;
            case 1:
                sum -= v[it]; break;
            case 2:
                sum *= v[it]; break;
            case 3:
                sum /= v[it]; break;
            }
        }
            if (Max < sum) Max = sum;
            if (Min > sum) Min = sum;
        
    } while (next_permutation(oper.begin(), oper.end()));


    printf("%d\n", Max);
    printf("%d", Min);
}