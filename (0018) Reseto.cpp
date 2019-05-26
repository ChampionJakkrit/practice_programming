#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int* p = new int[n+1]; // สร้าง ary n ตัว
    fill(p+0, p+n+1, 1);
    p[0] = 0; // ตัวแรกเป็น 0
    p[1] = 0; // ตัวสองเป็น 0
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (p[i] == 1) {
            for (int j = i; j <= n; j += i) {
                if (p[j] == 1) {
                    p[j] = 0;
                    count++;
                }
                if (count == k) {
                    printf("%d\n", j);
                    return 0;
                }

            }
        }
    }

    return 0;
}