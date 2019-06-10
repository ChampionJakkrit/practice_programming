#include <bits/stdc++.h>
using namespace std;

pair <int, int> factorA[55];
pair <int, int> factorC[55];
int main() {
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    int indexfA = 0, indexfC = 0;
    for (int i = 1; i <= A; i++) {
        if (A % i == 0) {
            int a = i;
            int c = A/i;
            factorA[indexfA].first = a;
            factorA[indexfA].second = c;
            indexfA++;
        } 
    }
    for (int i = 1; i <= abs(C); i++) {
        if (C % i == 0) {
            int b = i;
            int d = C/i;
            factorC[indexfC].first = b;
            factorC[indexfC].second = d;
            indexfC++;
            factorC[indexfC].first = -b;
            factorC[indexfC].second = -d;
            indexfC++;
        }
    }
    sort(factorC, factorC+indexfC);
    for (int i = 0; i < indexfA; i++) {
        for (int j = 0; j < indexfC; j++) {
            int a = factorA[i].first, b = factorC[j].first, c = factorA[i].second, d = factorC[j].second;
            if (a * d + b * c == B) {
                printf("%d %d %d %d\n", a, b, c, d);
                return 0;
            }   
        }
    }
    printf("No Solution\n");

    return 0;
}