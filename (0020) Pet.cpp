#include <bits/stdc++.h>
using namespace std;

int main() {
    int score1[5], score2[5], score3[5], score4[5], score5[5];
    int no1 = 1, no2 = 2, no3 = 3, no4 = 4, no5 = 5;
    int all_score1 = 0, all_score2 = 0, all_score3 = 0, all_score4 = 0, all_score5 = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &score1[i]);
        all_score1 += score1[i];
    }
    for (int j = 0; j < 4; j++) {
        scanf("%d", &score2[j]);
        all_score2 += score2[j];
    }
    for (int k = 0; k < 4; k++) {
        scanf("%d", &score3[k]);
        all_score3 += score3[k];
    }
    for (int l = 0; l < 4; l++) {
        scanf("%d", &score4[l]);
        all_score4 += score4[l];
    }
    for (int m = 0; m < 4; m++) {
        scanf("%d", &score5[m]);
        all_score5 += score5[m];
    }

    int mx = max(max(max(max(all_score1, all_score2),all_score3), all_score4),all_score5);
    if (mx == all_score1)
        printf("%d %d\n", no1, all_score1);
    if (mx == all_score2)
        printf("%d %d\n", no2, all_score2);
    if (mx == all_score3)
        printf("%d %d\n", no3, all_score3);
    if (mx == all_score4)
        printf("%d %d\n", no4, all_score4);
    if (mx == all_score5)
        printf("%d %d\n", no5, all_score5);



    
    return 0;
}