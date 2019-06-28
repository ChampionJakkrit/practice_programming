#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++) {
        int input;
        long double result = 1;
        scanf("%d", &input);
        for (int i = 0; i < input; i++) {
            result = result + result;
        }
        printf("%.0Lf\n", result);
    }

    return 0;
}