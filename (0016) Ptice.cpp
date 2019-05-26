#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    char S[N];
    scanf("%s", S);
    char Adrian[] = "ABC";
    char Bruno[] = "BABC";
    char Goren[] = "CCAABB";
    int scoreA = 0, scoreB = 0, scoreG = 0;
    for (int i = 0; i < N; i++) {
        if (Adrian[i % 3] == S[i])
            scoreA++;
        if (Bruno[i % 4] == S[i])
            scoreB++;
        if (Goren[i % 6] == S[i])
            scoreG++;
    }
    int mx = max(max(scoreA, scoreB), scoreG);
    printf("%d\n", mx);
    if (scoreA == mx)
        printf("Adrian\n");
    if (scoreB == mx)
        printf("Bruno\n");
    if (scoreG == mx) 
        printf("Goran\n");

    return 0;
}
