#include <stdio.h>
int ary[10001];
int main()
{
    int N;
    scanf("%d", &N);
    int in;
    for (int i = 0; i < N; i++) {
        scanf("%d", &in);
        ary[in]++;
    }
    
    int fmax = 0;
    for (int j = 0; j <= 10000; j++) {
        if (ary[j] > fmax)
            fmax = ary[j];
    }
    for (int k = 0;k <= 10000; k++) {
        if (fmax == ary[k]) // ary[k] = จน.ซ้ำของเลขนั้นๆ
            printf("%d ", k); // k = ข้อมูลดิบที่รับมา
    }

    return 0;
}