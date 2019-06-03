#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, l, h, mx, count = 0;
    scanf("%d%d%d", &w, &l, &h);
    while (!(w == 1 && l == 1 && h == 1)) {
        mx = max(max(w, l), h);
        if (mx == w) {
            w = mx / 2;
            count++;
        }
        else if (mx == l) {
            l = mx / 2;
            count++;
        }
        else {
            h = mx / 2;
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}