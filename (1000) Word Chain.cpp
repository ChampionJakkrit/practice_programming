#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, N;
    scanf("%d%d", &L, &N);
    char** word = new char*[N];
    for (int i = 0; i < N; i++) {
        word[i] = new char[L+5];
        scanf("%s", word[i]);
    }
    for (int i = 0; i < N-1; i++) {
        int count = 0;
        for (int j = 0; j < L; j++) {
            if (word[i][j] != word[i+1][j]) {
                count++;
            }
        }
        if (count > 2) {
            printf("%s\n", word[i]);
            return 0;
        }
    }
    printf("%s\n", word[N-1]);


    return 0;
}