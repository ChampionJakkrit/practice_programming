#include <bits/stdc++.h>
using namespace std;

long double factorail(int n) {
    long double ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * i;
    }
    return ans;
}

int main() {
    int N;
    scanf("%d", &N);
    long double result, above, below;
    if (N % 2 == 0) {
        int R1 = N/2; 
        above = factorail(N);
        below = factorail(R1) * factorail(N-R1);
        result = above/below;
        printf("%.0Lf\n", result);
    }
    else {
        int R2 = (N/2)+1;
        above = factorail(N);
        below = factorail(R2) * factorail(N-R2);
        result = above/below;
        printf("%.0Lf\n", result * 2); // มองเป็นทีมเดียวโดยการเลือก(nCr) แล้วคูณ 2
    }

    return 0;
}