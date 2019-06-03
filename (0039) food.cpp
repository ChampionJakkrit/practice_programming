#include <bits/stdc++.h>
using namespace std;

int main() {
    int serve, not_serve;
    scanf("%d %d", &serve, &not_serve);
    int* tpye_not_serve = new int[not_serve];
    for (int i = 0; i < not_serve; i++) {
        scanf("%d", &tpye_not_serve[i]);
    }
    int* real_serve = new int[serve];
    for (int i = 0; i < serve; i++) {
        real_serve[i] = i+1;
    }
    do {
        bool valid = true;
        for (int i = 0; i < not_serve; i++) {
            if (real_serve[0] == tpye_not_serve[i]) {
                valid = false;
                break;
            }
        }
        if (valid == true) { // real_serve[0] is not in not_serve
            for (int i = 0; i < serve; i++) {
                printf("%d ", real_serve[i]);
            }
            printf("\n");
        }
    } while (next_permutation(real_serve, real_serve + serve));

    return 0;
}