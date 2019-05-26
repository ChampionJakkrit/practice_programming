#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int ary[] = {a, b ,c ,d};
    sort(ary, ary+4);
    printf("%d", ary[0] * ary[2]);

    return 0;
}