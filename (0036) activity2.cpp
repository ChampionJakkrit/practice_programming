#include <bits/stdc++.h>
using namespace std;

long long factorail(int n, int r) {
    long long ans = 1;
    for (int i = r; i <= n; i++) {
        ans = ans * i;
    }
    return ans;
}

int main() {
    int N;
    scanf("%d", &N);
    long long result, above, below;
    if (N % 2 == 0) {
        int R1 = N/2;
        above = factorail(N, R1+1);
        below = factorail(N-R1, 1);
        result = above/below;
        printf("%lld\n", result);
        printf("a1 = %lld\n", above);
        printf("b1 = %lld\n", below);
    }
    else {
        int R2 = (N/2)+1;
        above = factorail(N, R2+1);
        below = factorail(N-R2, 1);
        result = above/below;
        printf("%lld\n", result * 2);
        printf("a2 = %lld\n", above);
        printf("b2 = %lld\n", below);
    }

    return 0;
}