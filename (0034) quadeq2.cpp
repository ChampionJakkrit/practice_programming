#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    for (int a = 1; a <= 100; a++) { // O(max(A, C)^4)
        for (int c = 1; c <= 100; c++) {
            if (a*c == A) {
                for (int b = -100; b <= 100; b++) {
                    for (int d = -100; d <= 100; d++) {
                        if (b * d == C && a*d + b*c == B) {
                            printf("%d %d %d %d\n", a, b, c, d);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    printf("No Solution\n");

    return 0;
}