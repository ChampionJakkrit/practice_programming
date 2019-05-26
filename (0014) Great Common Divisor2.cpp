#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    while (a % b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    printf("%d\n", b);

    return 0;
}