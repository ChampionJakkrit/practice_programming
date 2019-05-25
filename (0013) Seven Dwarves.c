#include <stdio.h>

int main()
{
    int n[10], over, sum = 0, i, j, k, r;
    for (i = 0; i < 9; i++) {
        scanf("%d", &n[i]);
        sum += n[i];
    }

    int not_show_k, not_show_j;

    over = sum - 100;
    for (j = 0; j < 9; j++) {
        for (k = j+1; k < 9; k++) {
            if (n[j] + n[k] == over) {
                not_show_j = j;
                not_show_k = k;
                break;
            }
        }
    }
    for (r = 0; r < 9; r++) {
        if (r == not_show_j || r == not_show_k) {
            continue;
        }
        printf("%d\n", n[r]);
    }
    
    return 0;
}