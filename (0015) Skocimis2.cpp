#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int dif1 = b-a, dif2 = c-b;
    if (dif2 > dif1) {
        printf("%d\n", dif2-1);
    }
    else {
        printf("%d\n", dif1-1);
    }

    return 0;
}