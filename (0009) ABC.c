#include <stdio.h>

int max, mid, min;

void max_min(int a, int b, int c)
{
    if ((a < b) && (b < c)) {
        min = a;
        mid = b;
        max = c;
    }
    if ((a < c) && (c < b)) {
        min = a;
        mid = c;
        max = b;
    }
    if ((b < a) && (a < c)) {
        min = b;
        mid = a;
        max = c;
    }
    if ((b < c) && (c < a)) {
        min = b;
        mid = c;
        max = a;
    }
    if ((c < a) && (a < b)) {
        min = c;
        mid = a;
        max = b;
    }
    if ((c < b) && (b < a)) {
        min = c;
        mid = b;
        max = a;
    }
}

int main()
{
    int num1, num2, num3;
    char str[4];
    scanf("%d %d %d", &num1, &num2, &num3);
    scanf("%s", str);
    max_min(num1, num2, num3);

    if (str[0] == 'A' && str[1] == 'B' && str[2] == 'C') {
        printf("%d %d %d\n", min, mid, max);
    }
    else if (str[0] == 'A' && str[1] == 'C' && str[2] == 'B') {
        printf("%d %d %d\n", min, max, mid);
    }
    else if (str[0] == 'B' && str[1] == 'A' && str[2] == 'C') {
        printf("%d %d %d\n", mid, min, max);
    }
    else if (str[0] == 'B' && str[1] == 'C' && str[2] == 'A') {
        printf("%d %d %d\n", mid, max, min);
    }
    else if (str[0] == 'C' && str[1] == 'A' && str[2] == 'B') {
        printf("%d %d %d\n", max, min, mid);
    }
    else if (str[0] == 'C' && str[1] == 'B' && str[2] == 'A') {
        printf("%d %d %d\n", max, mid, min);
    }

    return 0;
}