#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int mx = max(a, b);
    for (int i = mx; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}