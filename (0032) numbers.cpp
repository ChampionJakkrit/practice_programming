#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int* ary = new int[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ary[i]);
    }
    sort(ary, ary+n);
    for (int i = 0; i < n; i++) {
        if (ary[i] != 0) {
            swap(ary[i], ary[0]);
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", ary[i]);
    }

    return 0;
}