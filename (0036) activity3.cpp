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
    if (N%2==1) N++;

    int R1 = N/2;
    above = factorail(N, R1+1);
    below = factorail(N-R1, 1);
    result = above/below;
    printf("%lld\n", result);

    return 0;
}