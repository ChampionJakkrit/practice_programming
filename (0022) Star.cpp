#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1) { // จน.คี่
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i+j == n/2 || i + n/2 == j || i-j == n/2 || i+j == n-1 + n/2)
                    printf("*");
                else
                    printf("-");
            }
            printf("\n");
        }
    }
    else { // จน.คี่
        for (int i = 0; i <= (n/2)-1; i++) {
            for (int j = 0; j < n-1; j++) {
                if (i+j == (n-1)/2 || j-i == (n-1)/2)
                    printf("*");
                else
                    printf("-");
            }
            printf("\n");
        }
        for (int i = (n/2)-1; i >= 0; i--) {
            for (int j = 0; j < n-1; j++) {
                if (i+j == (n-1)/2 || j-i == (n-1)/2)
                    printf("*");
                else
                    printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}