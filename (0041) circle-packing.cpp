#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    printf("%.6f\n", N == 1 ? 2.0 :
                     N == 3 ? 3.732051 :
                     N % 2 == 1 ? (double)N + 0.464102: (double)N);

    return 0;
}

/* if (N == 1) {
        return 2.0;
    } else {
        if (N == 3) {
            return 3.235232;
        } else {
            if (N % 2 == 1) {
                return (N)+0.4624;
            } else {
                return (double)N;
            }
        }
    }
*/ 