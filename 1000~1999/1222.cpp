#include <iostream>
#include <algorithm>
using namespace std;

long long N, a, max_stu, cnt[2000020];
int main() {
    scanf("%lld", &N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &a);
        cnt[a]++;
    }
    for (int i = 1; i <= 2000000; i++) {
        long long count = 0;
        for (int j = i; j <= 2000000; j += i)
            count += cnt[j];
        if (count > 1)
            max_stu = max(max_stu, count * i);
    }
    printf("%lld\n", max_stu);
    return 0;
}