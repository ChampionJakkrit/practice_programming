#include <stdio.h>

int main() {
    int a, b, c, count = 0;
    scanf("%d %d %d", &a, &b, &c);
    int dif1 = b-a, dif2 = c-b;
    if (dif2 > dif1) {
        while (!(a == c || b == c)) {
            a = b + 1;
            if (a != c)
                count++;
            else
                break;
            b = a + 1;
            if (b != c)
                count++;
            else
                break;
        }
    }
    else {
        while (!(b == a|| c == a)) {
            c = b - 1;
            if (c != a)
                count++;
            else
                break;
            b = c - 1;
            if (b != a)
                count++;
            else
                break;
        }
    }
    printf("%d\n", count);

    return 0;
}